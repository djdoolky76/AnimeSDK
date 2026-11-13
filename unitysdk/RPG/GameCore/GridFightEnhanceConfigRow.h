#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSelectEnhanceConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEnhanceConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20603A10)
#define RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20603570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEnhanceConfigRow_TypeDefinitionIndex = 13715;

	class GridFightEnhanceConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::System::UInt32>* PrevEnhanceIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 ID; // 0x30
		::System::UInt32 Cost; // 0x34
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x38
		::RPG::Client::TextID EnhanceDesc; // 0x48
		::RPG::GameCore::GridFightSelectEnhanceConditionType SelectCondition; // 0x58
		::System::UInt32 GroupID; // 0x5C
		::RPG::Client::TextID EnhanceName; // 0x60
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
