#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphFreeStyleDataConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHFREESTYLEDATACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D911040)
#define RPG_GAMECORE_PHOTOGRAPHFREESTYLEDATACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D910E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphFreeStyleDataConfig_TypeDefinitionIndex = 19048;

	class PhotoGraphFreeStyleDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::String* SpritePath; // 0x20
		::System::String* Key; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFREESTYLEDATACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphFreeStyleDataConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphFreeStyleDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFREESTYLEDATACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
