#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92FF10)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E92F9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentConfigRow_TypeDefinitionIndex = 13473;

	class GridFightAugmentConfigRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::String* JsonPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* AugmentSearchKey; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x30
		::Il2CppArray<::System::UInt32>* ChapterLimitList; // 0x38
		::Il2CppArray<::System::UInt32>* AugmentGameRefTrait; // 0x40
		::Il2CppArray<::System::UInt32>* AugmentGameRefScore; // 0x48
		::RPG::Client::TextID HexDesc; // 0x50
		::System::UInt32 ID; // 0x60
		::System::UInt32 CategoryID; // 0x64
		::RPG::Client::TextID HexName; // 0x68
		::RPG::GameCore::GridFightAugmentQuality Quality; // 0x78
		::System::UInt32 IsOCEffective; // 0x7C
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
