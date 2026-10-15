#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ServantBodySize.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ManikinServantConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MANIKINSERVANTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FB560)
#define RPG_GAMECORE_MANIKINSERVANTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7FB410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinServantConfig_TypeDefinitionIndex = 17473;

	class ManikinServantConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ServantBodySize ServantBodySize; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINSERVANTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManikinServantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManikinServantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINSERVANTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
