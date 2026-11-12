#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightClaraEnhanceCategory.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightClaraEnhanceConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTCLARAENHANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E933170)
#define RPG_GAMECORE_GRIDFIGHTCLARAENHANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E932BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightClaraEnhanceConfigRow_TypeDefinitionIndex = 13864;

	class GridFightClaraEnhanceConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::RPG::Client::TextID EnhanceSelectSimpleDesc; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 Limit; // 0x2C
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x30
		::RPG::Client::TextID EnhanceDesc; // 0x40
		::RPG::Client::TextID EnhanceSelectDesc; // 0x50
		::RPG::Client::TextID EnhanceSelectName; // 0x60
		::RPG::Client::TextID EnhanceName; // 0x70
		::RPG::GameCore::GridFightClaraEnhanceCategory Category; // 0x80
		::System::UInt32 BuffID; // 0x84
		::System::UInt32 CostCoin; // 0x88
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
