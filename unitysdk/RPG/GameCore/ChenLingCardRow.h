#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingCardRow; }
namespace RPG::GameCore { class ChenLingGridOffset; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGCARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58ADD0)
#define RPG_GAMECORE_CHENLINGCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58AA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingCardRow_TypeDefinitionIndex = 11042;

	class ChenLingCardRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IconOutlinePath; // 0x18
		::Il2CppArray<::System::UInt32>* ParamList; // 0x20
		::Il2CppArray<::RPG::GameCore::ChenLingGridOffset*>* EffectGridPreShow; // 0x28
		::RPG::GameCore::ChenLingCardType Type; // 0x30
		::System::UInt32 ShopCost; // 0x34
		::System::Boolean IsSpecialCard; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 TypeID; // 0x3C
		::System::UInt32 ID; // 0x40
		::System::UInt32 Weight; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingCardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingCardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
