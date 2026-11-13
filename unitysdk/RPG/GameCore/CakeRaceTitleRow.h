#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceTitleConditionType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTitleExtremType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTitleParamType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACETITLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFE630)
#define RPG_GAMECORE_CAKERACETITLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBFE240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTitleRow_TypeDefinitionIndex = 11028;

	class CakeRaceTitleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::String* BgColor; // 0x18
		::RPG::Client::TextID TitleName; // 0x20
		::RPG::GameCore::CakeRaceTitleConditionType ConditionType; // 0x30
		::System::UInt32 TitleID; // 0x34
		::System::UInt32 Priority; // 0x38
		::RPG::GameCore::CakeRaceTitleExtremType ExtremType; // 0x3C
		::System::UInt32 ConditionParam; // 0x40
		::RPG::GameCore::CakeRaceTitleParamType ParamType; // 0x44
		::RPG::Client::TextID TitleDesc; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETITLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceTitleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceTitleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETITLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
