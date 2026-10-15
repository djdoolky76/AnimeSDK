#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ReceiveDynamicSkillButtonInput; }
namespace RPG::GameCore { class TaskContext; }

#define MFOAPFLEACC_BBLAGJIFKEK_OFFSET UNITYSDK_OFFSET(0xB910000)
#define MFOAPFLEACC_CTOR_OFFSET UNITYSDK_OFFSET(0xB90FA30)
#define MFOAPFLEACC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB90FB40)
#define MFOAPFLEACC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB90FCB0)
#define MFOAPFLEACC_TICK_OFFSET UNITYSDK_OFFSET(0xB910090)

	class MFOAPFLEACC
	{
	public:
		::KFELGAIGHAP* IMLDGCEMCCM; // 0x28
		::KFELGAIGHAP* NOPDCJAEDBG; // 0x30
		::KFELGAIGHAP* JOBCHGELIKG; // 0x38
		::RPG::GameCore::ControlSkillType ENGIAPOIDFK; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReceiveDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReceiveDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + MFOAPFLEACC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOAPFLEACC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOAPFLEACC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFOAPFLEACC_TICK_OFFSET))(this, a1);
		}

		::System::Void BBLAGJIFKEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOAPFLEACC_BBLAGJIFKEK_OFFSET))(this);
		}

	};
