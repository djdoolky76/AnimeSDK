#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSelectEnhanceConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSelectEnhanceRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA61140)
#define RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA60CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSelectEnhanceRow_TypeDefinitionIndex = 13822;

	class GridFightSelectEnhanceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x10
		::Il2CppArray<::System::Double>* ParamList; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 TraitEffectID; // 0x2C
		::System::UInt32 Cost; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EnhanceDesc; // 0x38
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x48
		::System::UInt32 Count; // 0x58
		::RPG::GameCore::GridFightSelectEnhanceConditionType SelectCondition; // 0x5C
		::RPG::Client::TextID EnhanceName; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSelectEnhanceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSelectEnhanceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
