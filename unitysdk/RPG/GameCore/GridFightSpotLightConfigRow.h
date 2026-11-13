#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpotLightConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA63A10)
#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA63510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpotLightConfigRow_TypeDefinitionIndex = 13717;

	class GridFightSpotLightConfigRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::Il2CppArray<::System::UInt32>* SuitableAvatarList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::Il2CppArray<::System::UInt32>* Tag; // 0x28
		::System::String* JsonPath; // 0x30
		::System::Int32 EnemyDiffLvAdd; // 0x38
		::System::Boolean IsCarry; // 0x3C
		::System::Boolean IsOCEffective; // 0x3D
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID Desc; // 0x50
		::System::UInt32 TraitID; // 0x60
		::System::UInt32 ID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPOTLIGHTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSpotLightConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSpotLightConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPOTLIGHTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
