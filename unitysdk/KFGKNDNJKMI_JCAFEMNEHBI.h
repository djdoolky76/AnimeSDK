#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JOGBIBJLPJB.h"
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeDropPointInfo; }

#define KFGKNDNJKMI_JCAFEMNEHBI_CPHMEGAJNMG_OFFSET UNITYSDK_OFFSET(0xBC294D0)
#define KFGKNDNJKMI_JCAFEMNEHBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC282F0)
#define KFGKNDNJKMI_JCAFEMNEHBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC2C300)
#define KFGKNDNJKMI_JCAFEMNEHBI_GET_INFO_OFFSET UNITYSDK_OFFSET(0xBC2C2E0)
#define KFGKNDNJKMI_JCAFEMNEHBI_HMEOEKCHENH_OFFSET UNITYSDK_OFFSET(0xBC29560)
#define KFGKNDNJKMI_JCAFEMNEHBI_PGCBPNFMBGH_OFFSET UNITYSDK_OFFSET(0xBC29540)
#define KFGKNDNJKMI_JCAFEMNEHBI_SET_INFO_OFFSET UNITYSDK_OFFSET(0xBC2C2F0)

inline static constexpr unsigned int KFGKNDNJKMI_JCAFEMNEHBI_TypeDefinitionIndex = 71266;

	class KFGKNDNJKMI_JCAFEMNEHBI : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* _Info_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_JCAFEMNEHBI_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* get_Info()
		{
			return ((::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_JCAFEMNEHBI_GET_INFO_OFFSET))(this);
		}

		::System::Void set_Info(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_JCAFEMNEHBI_SET_INFO_OFFSET))(this, a1);
		}

		::JOGBIBJLPJB CPHMEGAJNMG()
		{
			return ((::JOGBIBJLPJB(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_JCAFEMNEHBI_CPHMEGAJNMG_OFFSET))(this);
		}

		::System::UInt32 HMEOEKCHENH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_JCAFEMNEHBI_HMEOEKCHENH_OFFSET))(this);
		}

		::System::UInt32 PGCBPNFMBGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_JCAFEMNEHBI_PGCBPNFMBGH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_JCAFEMNEHBI_DISPOSE_OFFSET))(this);
		}

	};
