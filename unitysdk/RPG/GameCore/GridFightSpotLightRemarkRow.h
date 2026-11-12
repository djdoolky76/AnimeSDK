#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpotLightRemarkRow; }

#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTREMARKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E955E90)
#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTREMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E955CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpotLightRemarkRow_TypeDefinitionIndex = 13723;

	class GridFightSpotLightRemarkRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 SpotLightID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID SpotLightRemark; // 0x20
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
