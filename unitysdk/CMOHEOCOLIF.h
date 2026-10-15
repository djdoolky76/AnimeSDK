#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class AFENBMDDEDG;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CMOHEOCOLIF_AAIKPKPMKCK_OFFSET UNITYSDK_OFFSET(0xDA396D0)
#define CMOHEOCOLIF_CTOR_OFFSET UNITYSDK_OFFSET(0xDA394A0)
#define CMOHEOCOLIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA39610)
#define CMOHEOCOLIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA394B0)
#define CMOHEOCOLIF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA39560)
#define CMOHEOCOLIF_TICK_OFFSET UNITYSDK_OFFSET(0xDA395B0)

inline static constexpr unsigned int CMOHEOCOLIF_TypeDefinitionIndex = 58906;

	class CMOHEOCOLIF : public ::GELIALJDFBL
	{
	public:
		::AFENBMDDEDG* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AFENBMDDEDG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AFENBMDDEDG*))((::PBYTE)hIl2Cpp + CMOHEOCOLIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOHEOCOLIF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOHEOCOLIF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMOHEOCOLIF_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOHEOCOLIF_DISPOSE_OFFSET))(this);
		}

		::System::Void AAIKPKPMKCK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMOHEOCOLIF_AAIKPKPMKCK_OFFSET))(this, a1);
		}

	};
