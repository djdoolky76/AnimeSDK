#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElectricChain; }
namespace System { class String; }

#define RPG_CLIENT_EFFECT_ELECTRICCHAIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD27990)
#define RPG_CLIENT_EFFECT_ELECTRICCHAIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCD27940)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ElectricChain_TypeDefinitionIndex = 70453;

	class Effect_ElectricChain
	{
	public:
		::Il2CppArray<::RPG::Client::ElectricChain*>* chain; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
