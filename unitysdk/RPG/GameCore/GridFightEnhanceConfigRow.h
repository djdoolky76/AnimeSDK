#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSelectEnhanceConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEnhanceConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E937FC0)
#define RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E937B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEnhanceConfigRow_TypeDefinitionIndex = 13715;

	class GridFightEnhanceConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* JsonPath; // 0x20
		::Il2CppArray<::System::UInt32>* PrevEnhanceIDList; // 0x28
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x30
		::RPG::Client::TextID EnhanceName; // 0x40
		::RPG::GameCore::GridFightSelectEnhanceConditionType SelectCondition; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 GroupID; // 0x58
		::System::UInt32 Cost; // 0x5C
		::RPG::Client::TextID EnhanceDesc; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightEnhanceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightEnhanceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
