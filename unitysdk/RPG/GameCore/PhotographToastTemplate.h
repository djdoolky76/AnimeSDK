#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotographToastTemplate; }

#define RPG_GAMECORE_PHOTOGRAPHTOASTTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E6E30)
#define RPG_GAMECORE_PHOTOGRAPHTOASTTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E6C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotographToastTemplate_TypeDefinitionIndex = 19062;

	class PhotographToastTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID SuccessToastText; // 0x10
		::RPG::Client::TextID FailToastText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTOASTTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotographToastTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotographToastTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTOASTTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
