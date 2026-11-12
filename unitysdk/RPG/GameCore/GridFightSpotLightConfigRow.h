#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpotLightConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E955CA0)
#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9557A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpotLightConfigRow_TypeDefinitionIndex = 13717;

	class GridFightSpotLightConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::System::UInt32>* SuitableAvatarList; // 0x18
		::Il2CppArray<::System::UInt32>* Tag; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x28
		::System::String* Icon; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID Desc; // 0x48
		::System::Int32 EnemyDiffLvAdd; // 0x58
		::System::UInt32 ID; // 0x5C
		::System::UInt32 TraitID; // 0x60
		::System::Boolean IsOCEffective; // 0x64
		::System::Boolean IsCarry; // 0x65
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
