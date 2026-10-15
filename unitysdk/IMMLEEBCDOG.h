#pragma once
#include "unitysdk/unitysdk.h"
class DEEGAJPPPBG;
namespace RPG::GameCore { class ST_Side_OverrideVision; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VisionBaseConfig; }

#define IMMLEEBCDOG_CTOR_OFFSET UNITYSDK_OFFSET(0x164DF420)
#define IMMLEEBCDOG_LALGDFKKADM_OFFSET UNITYSDK_OFFSET(0x164DF5E0)
#define IMMLEEBCDOG_LDDIMNHIHGG_OFFSET UNITYSDK_OFFSET(0x164DF630)
#define IMMLEEBCDOG_MJILALHMOJB_OFFSET UNITYSDK_OFFSET(0x164DFAF0)
#define IMMLEEBCDOG_MPPPNJCJJAE_OFFSET UNITYSDK_OFFSET(0x164DFA50)
#define IMMLEEBCDOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164DF450)
#define IMMLEEBCDOG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164DFBE0)

	class IMMLEEBCDOG
	{
	public:
		::DEEGAJPPPBG* FAOEOJJKLLB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_OverrideVision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_OverrideVision*))((::PBYTE)hIl2Cpp + IMMLEEBCDOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMLEEBCDOG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void LDDIMNHIHGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMLEEBCDOG_LDDIMNHIHGG_OFFSET))(this);
		}

		::System::Void MPPPNJCJJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMLEEBCDOG_MPPPNJCJJAE_OFFSET))(this);
		}

		::System::Void MJILALHMOJB(::RPG::GameCore::VisionBaseConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VisionBaseConfig*))((::PBYTE)hIl2Cpp + IMMLEEBCDOG_MJILALHMOJB_OFFSET))(this, a1);
		}

		::System::Void LALGDFKKADM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMLEEBCDOG_LALGDFKKADM_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMLEEBCDOG_ONTASKRESET_OFFSET))(this);
		}

	};
