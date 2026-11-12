#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
class KINJHHBJNJP;
namespace RPG::Client { class GridFightTraitAstropolisInfo; }
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDCDA080)
#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_ASTROPOLISINFO_OFFSET UNITYSDK_OFFSET(0xDCDA330)
#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xDCDA350)
#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xDCDA280)
#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_SETASTROPOLISINFO_OFFSET UNITYSDK_OFFSET(0xDCDA400)
#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_SET_ASTROPOLISINFO_OFFSET UNITYSDK_OFFSET(0xDCDA340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitDamageStatisticInfo_TypeDefinitionIndex = 65863;

	class GridFightTraitDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::RPG::Client::GridFightTraitAstropolisInfo* _AstropolisInfo_k__BackingField; // 0x28
		::System::UInt32 ActiveLayer; // 0x30
		::System::Void _ctor(::KINJHHBJNJP* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::KINJHHBJNJP*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitConfigBase* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_TRAITCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitAstropolisInfo* get_AstropolisInfo()
		{
			return ((::RPG::Client::GridFightTraitAstropolisInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_ASTROPOLISINFO_OFFSET))(this);
		}

		::System::Void set_AstropolisInfo(::RPG::Client::GridFightTraitAstropolisInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitAstropolisInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_SET_ASTROPOLISINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTrailLayerQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightTrailLayerQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_QUALITY_OFFSET))(this);
		}

		::System::Void SetAstropolisInfo(::RPG::Client::GridFightTraitAstropolisInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitAstropolisInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_SETASTROPOLISINFO_OFFSET))(this, a1);
		}

	};
}
