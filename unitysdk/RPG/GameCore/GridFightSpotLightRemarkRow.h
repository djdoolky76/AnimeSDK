#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpotLightRemarkRow; }

#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTREMARKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA63C00)
#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTREMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA63A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpotLightRemarkRow_TypeDefinitionIndex = 13723;

	class GridFightSpotLightRemarkRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::RPG::Client::TextID SpotLightRemark; // 0x18
		::System::UInt32 SpotLightID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPOTLIGHTREMARKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSpotLightRemarkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSpotLightRemarkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPOTLIGHTREMARKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
