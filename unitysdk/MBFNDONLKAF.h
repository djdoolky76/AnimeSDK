#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerLeaveChessRogue; }
namespace System { class Object; }

#define MBFNDONLKAF_BPEAAOINNBL_OFFSET UNITYSDK_OFFSET(0xB853D10)
#define MBFNDONLKAF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8539C0)
#define MBFNDONLKAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB853BF0)
#define MBFNDONLKAF_FEDEMHPFPLO_OFFSET UNITYSDK_OFFSET(0xB853A20)
#define MBFNDONLKAF_NIIJDKJLMJD_OFFSET UNITYSDK_OFFSET(0xB853CB0)
#define MBFNDONLKAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8539D0)
#define MBFNDONLKAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB853B40)
#define MBFNDONLKAF_TICK_OFFSET UNITYSDK_OFFSET(0xB853B90)

inline static constexpr unsigned int MBFNDONLKAF_TypeDefinitionIndex = 58790;

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
