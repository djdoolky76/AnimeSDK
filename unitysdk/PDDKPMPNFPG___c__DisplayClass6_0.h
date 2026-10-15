#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNGKJFAMKLI;
class JJKOHCPBGAL;
namespace RPG::Client { class ChimeraDuelGameSession; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }

#define PDDKPMPNFPG___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC00FCA0)
#define PDDKPMPNFPG___C__DISPLAYCLASS6_0___TRYCREATEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xC010D40)

inline static constexpr unsigned int PDDKPMPNFPG___c__DisplayClass6_0_TypeDefinitionIndex = 78348;

	class PDDKPMPNFPG___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSession* session; // 0x10
		::JJKOHCPBGAL* skill; // 0x18
		::FNGKJFAMKLI* effectData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDKPMPNFPG___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* __TryCreateEffect_b__0(::System::UInt32 a1)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDDKPMPNFPG___C__DISPLAYCLASS6_0___TRYCREATEEFFECT_B__0_OFFSET))(this, a1);
		}

	};
