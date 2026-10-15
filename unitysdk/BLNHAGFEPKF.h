#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ALGEKGNPOBF;
namespace RPG::GameCore { class TaskContext; }

#define BLNHAGFEPKF_ACADOGIIADG_OFFSET UNITYSDK_OFFSET(0xBA7B010)
#define BLNHAGFEPKF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7AB80)
#define BLNHAGFEPKF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA7AB90)
#define BLNHAGFEPKF_JCHGOGHFMJN_OFFSET UNITYSDK_OFFSET(0xBA7B420)
#define BLNHAGFEPKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA7AC60)
#define BLNHAGFEPKF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA7AC10)
#define BLNHAGFEPKF_TICK_OFFSET UNITYSDK_OFFSET(0xBA7AFB0)

inline static constexpr unsigned int BLNHAGFEPKF_TypeDefinitionIndex = 53077;

	class BLNHAGFEPKF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::ALGEKGNPOBF* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ALGEKGNPOBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ALGEKGNPOBF*))((::PBYTE)hIl2Cpp + BLNHAGFEPKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNHAGFEPKF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNHAGFEPKF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNHAGFEPKF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLNHAGFEPKF_TICK_OFFSET))(this, a1);
		}

		::System::Void ACADOGIIADG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNHAGFEPKF_ACADOGIIADG_OFFSET))(this, a1);
		}

		::System::Void JCHGOGHFMJN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNHAGFEPKF_JCHGOGHFMJN_OFFSET))(this, a1);
		}

	};
