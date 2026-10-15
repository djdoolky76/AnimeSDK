#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCBlockWeight; }

#define RPG_GAMECORE_ROGUEDLCBLOCKWEIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BC690)
#define RPG_GAMECORE_ROGUEDLCBLOCKWEIGHT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9BC570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockWeight_TypeDefinitionIndex = 17911;

	class RogueDLCBlockWeight : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CreateNum; // 0x10
		::System::UInt32 Weight; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKWEIGHT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCBlockWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCBlockWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKWEIGHT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
