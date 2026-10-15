#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BlockCameraDitherUpdate; }

#define RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D440BF0)
#define RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D440C00)
#define RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D440BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockCameraDitherUpdate_TypeDefinitionIndex = 22767;

	class BlockCameraDitherUpdate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single BlockTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockCameraDitherUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockCameraDitherUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockCameraDitherUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockCameraDitherUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
