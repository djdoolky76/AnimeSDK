#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerLeaveChessRogue; }
namespace System { class Object; }

#define MBFNDONLKAF_BPEAAOINNBL_OFFSET UNITYSDK_OFFSET(0xC0C0320)
#define MBFNDONLKAF_CTOR_OFFSET UNITYSDK_OFFSET(0xC0BFFD0)
#define MBFNDONLKAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0C0200)
#define MBFNDONLKAF_FEDEMHPFPLO_OFFSET UNITYSDK_OFFSET(0xC0C0030)
#define MBFNDONLKAF_NIIJDKJLMJD_OFFSET UNITYSDK_OFFSET(0xC0C02C0)
#define MBFNDONLKAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0BFFE0)
#define MBFNDONLKAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0C0150)
#define MBFNDONLKAF_TICK_OFFSET UNITYSDK_OFFSET(0xC0C01A0)

inline static constexpr unsigned int MBFNDONLKAF_TypeDefinitionIndex = 60058;

	class MBFNDONLKAF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerLeaveChessRogue* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerLeaveChessRogue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerLeaveChessRogue*))((::PBYTE)hIl2Cpp + MBFNDONLKAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFNDONLKAF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFNDONLKAF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBFNDONLKAF_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFNDONLKAF_DISPOSE_OFFSET))(this);
		}

		::System::Void NIIJDKJLMJD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBFNDONLKAF_NIIJDKJLMJD_OFFSET))(this, a1);
		}

		::System::Void FEDEMHPFPLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFNDONLKAF_FEDEMHPFPLO_OFFSET))(this);
		}

		::System::Void BPEAAOINNBL(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + MBFNDONLKAF_BPEAAOINNBL_OFFSET))(this, a1, a2);
		}

	};
