#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitAstropolisConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITASTROPOLISCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E959280)
#define RPG_GAMECORE_GRIDFIGHTTRAITASTROPOLISCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E958F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitAstropolisConfigRow_TypeDefinitionIndex = 13847;

	class GridFightTraitAstropolisConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x18
		::RPG::Client::TextID DetailDesc; // 0x20
		::RPG::GameCore::GridFightTrailLayerQuality TraitQuality; // 0x30
		::System::UInt32 ThreeStarNum; // 0x34
		::RPG::Client::TextID SimpleDesc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITASTROPOLISCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitAstropolisConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitAstropolisConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITASTROPOLISCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
