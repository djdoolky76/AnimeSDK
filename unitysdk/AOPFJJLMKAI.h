#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GHFPPJFOAGI;
class KLEFGGIHGMI;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOPFJJLMKAI_CTOR_OFFSET UNITYSDK_OFFSET(0x158C7E90)
#define AOPFJJLMKAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158C84F0)
#define AOPFJJLMKAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158C7F10)
#define AOPFJJLMKAI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158C8400)
#define AOPFJJLMKAI_TICK_OFFSET UNITYSDK_OFFSET(0x158C8540)

inline static constexpr unsigned int AOPFJJLMKAI_TypeDefinitionIndex = 58176;

	class AOPFJJLMKAI : public ::GELIALJDFBL
	{
	public:
		::GHFPPJFOAGI* OFKGLJOAMLD; // 0x18
		::System::String* FKFFINDOLOJ; // 0x20
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x28
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* PCDIEBGDABE; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GHFPPJFOAGI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GHFPPJFOAGI*))((::PBYTE)hIl2Cpp + AOPFJJLMKAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPFJJLMKAI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPFJJLMKAI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPFJJLMKAI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOPFJJLMKAI_TICK_OFFSET))(this, a1);
		}

	};
