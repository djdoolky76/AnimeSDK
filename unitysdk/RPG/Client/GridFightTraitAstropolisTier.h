#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightTraitAstropolisConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E2C60)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_GET_DETAILDESC_OFFSET UNITYSDK_OFFSET(0x1D3E4960)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1D3E47D0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D3E4820)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_GET_THREESTARNUM_OFFSET UNITYSDK_OFFSET(0x1D3E4780)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitAstropolisTier_TypeDefinitionIndex = 67230;

	class GridFightTraitAstropolisTier : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitAstropolisConfigRow* _Row; // 0x10
		::System::Void _ctor(::RPG::GameCore::GridFightTraitAstropolisConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitAstropolisConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ThreeStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_GET_THREESTARNUM_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTrailLayerQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightTrailLayerQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_GET_QUALITY_OFFSET))(this);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::String* get_DetailDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISTIER_GET_DETAILDESC_OFFSET))(this);
		}

	};
}
