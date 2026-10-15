#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrepTutorialSubToastHintParam; }

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSUBTOASTHINTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73B1B0)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSUBTOASTHINTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73A8E0)

namespace RPG::GameCore
{
	class GridFightPrepTutorialSubToastHintParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Title; // 0x10
		::System::Boolean Visible; // 0x20
		::System::Boolean ShowAnim; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSUBTOASTHINTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrepTutorialSubToastHintParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrepTutorialSubToastHintParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSUBTOASTHINTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
