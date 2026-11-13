#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x205FB960)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x205FB420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentConfigRow_TypeDefinitionIndex = 13473;

	class GridFightAugmentConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::System::UInt32>* AugmentGameRefScore; // 0x18
		::System::String* MiniIconPath; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::UInt32>* AugmentGameRefTrait; // 0x30
		::Il2CppArray<::System::UInt32>* ChapterLimitList; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x40
		::System::String* AugmentSearchKey; // 0x48
		::System::UInt32 CategoryID; // 0x50
		::System::UInt32 IsOCEffective; // 0x54
		::RPG::Client::TextID HexName; // 0x58
		::System::UInt32 ID; // 0x68
		::RPG::GameCore::GridFightAugmentQuality Quality; // 0x6C
		::RPG::Client::TextID HexDesc; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightAugmentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightAugmentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
