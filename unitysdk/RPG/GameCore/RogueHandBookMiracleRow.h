#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueHandBookMiracleRow; }

#define RPG_GAMECORE_ROGUEHANDBOOKMIRACLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CE130)
#define RPG_GAMECORE_ROGUEHANDBOOKMIRACLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9CDF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandBookMiracleRow_TypeDefinitionIndex = 14835;

	class RogueHandBookMiracleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MiracleTypeList; // 0x10
		::System::UInt32 MiracleHandbookID; // 0x18
		::System::UInt32 MiracleReward; // 0x1C
		::System::UInt32 MiracleDisplayID; // 0x20
		::System::UInt32 Order; // 0x24
		::System::UInt32 MiracleEffectDisplayID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKMIRACLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueHandBookMiracleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueHandBookMiracleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKMIRACLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
