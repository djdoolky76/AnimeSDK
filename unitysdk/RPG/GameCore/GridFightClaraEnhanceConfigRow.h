#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightClaraEnhanceCategory.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightClaraEnhanceConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTCLARAENHANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x205FEBC0)
#define RPG_GAMECORE_GRIDFIGHTCLARAENHANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x205FE600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightClaraEnhanceConfigRow_TypeDefinitionIndex = 13864;

	class GridFightClaraEnhanceConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::RPG::Client::TextID EnhanceSelectSimpleDesc; // 0x18
		::RPG::Client::TextID EnhanceDesc; // 0x28
		::RPG::Client::TextID EnhanceSelectName; // 0x38
		::RPG::GameCore::GridFightClaraEnhanceCategory Category; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 CostCoin; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EnhanceName; // 0x58
		::System::UInt32 BuffID; // 0x68
		::System::UInt32 Limit; // 0x6C
		::RPG::Client::TextID EnhanceSelectDesc; // 0x70
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCLARAENHANCECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightClaraEnhanceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightClaraEnhanceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCLARAENHANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
