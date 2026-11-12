#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitParamSource.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveEffect.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitRemarkRow; }

#define RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95BDE0)
#define RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E95B950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitRemarkRow_TypeDefinitionIndex = 13820;

	class GridFightTraitRemarkRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ConditionParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* TraitRemarkParamList; // 0x18
		::System::Boolean IsInBook; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 TextOrder; // 0x24
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::GridFightTraitRemarkActiveEffect Format; // 0x2C
		::RPG::GameCore::GridFightTraitParamSource ParamSource; // 0x30
		::RPG::GameCore::GridFightTraitRemarkActiveType ConditionType; // 0x34
		::RPG::Client::TextID TraitSimpleRemark; // 0x38
		::RPG::GameCore::GridFightTraitRemarkPosition Position; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID TraitRemark; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitRemarkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
