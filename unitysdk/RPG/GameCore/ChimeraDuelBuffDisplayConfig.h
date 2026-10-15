#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelBuffDisplayConfig; }

#define RPG_GAMECORE_CHIMERADUELBUFFDISPLAYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59BCC0)
#define RPG_GAMECORE_CHIMERADUELBUFFDISPLAYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59BA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffDisplayConfig_TypeDefinitionIndex = 16005;

	class ChimeraDuelBuffDisplayConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::RPG::Client::TextID Desc; // 0x20
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* DescParams; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFDISPLAYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBuffDisplayConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBuffDisplayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFDISPLAYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
