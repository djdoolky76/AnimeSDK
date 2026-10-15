#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiAtomConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiActionConfigBase; }
namespace System { class String; }

#define RPG_GAMECORE_MIACTIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87F0D0)
#define RPG_GAMECORE_MIACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D87F030)
#define RPG_GAMECORE_MIACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D87EFD0)

namespace RPG::GameCore
{
	class MiActionConfigBase : public ::RPG::GameCore::MiAtomConfigBase
	{
	public:
		::System::String* MiActionUniqueID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
