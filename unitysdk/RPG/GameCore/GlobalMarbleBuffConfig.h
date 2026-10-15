#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalMarbleBuffConfig; }
namespace RPG::GameCore { class MarbleBuffConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMARBLEBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F12A0)
#define RPG_GAMECORE_GLOBALMARBLEBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F11A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalMarbleBuffConfig_TypeDefinitionIndex = 16905;

	class GlobalMarbleBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MarbleBuffConfig*>* BuffDict; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalMarbleBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalMarbleBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
