#pragma once
#include "unitysdk/unitysdk.h"
class DEEGAJPPPBG;
namespace RPG::GameCore { class ST_Side_OverrideVision; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VisionBaseConfig; }

#define IMMLEEBCDOG_CTOR_OFFSET UNITYSDK_OFFSET(0x164D1410)
#define IMMLEEBCDOG_LALGDFKKADM_OFFSET UNITYSDK_OFFSET(0x164D15D0)
#define IMMLEEBCDOG_LDDIMNHIHGG_OFFSET UNITYSDK_OFFSET(0x164D1620)
#define IMMLEEBCDOG_MJILALHMOJB_OFFSET UNITYSDK_OFFSET(0x164D1AE0)
#define IMMLEEBCDOG_MPPPNJCJJAE_OFFSET UNITYSDK_OFFSET(0x164D1A40)
#define IMMLEEBCDOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D1440)
#define IMMLEEBCDOG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164D1BD0)

inline static constexpr unsigned int IMMLEEBCDOG_TypeDefinitionIndex = 52243;

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
