#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEKOMMJCPJF;
class IMENCDLHKAI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNPJNAEAJJP_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xBA19CC0)
#define MNPJNAEAJJP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBA1A0F0)
#define MNPJNAEAJJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA1A220)
#define MNPJNAEAJJP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA19B00)
#define MNPJNAEAJJP_OFGFCCPIOAJ_OFFSET UNITYSDK_OFFSET(0xBA1A1D0)
#define MNPJNAEAJJP_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xBA19A00)
#define MNPJNAEAJJP_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xBA19AB0)

	class MNPJNAEAJJP : public ::System::Object
	{
	public:
		::System::Action* DGAAGLAGFID; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::IMENCDLHKAI*>* HAGAFPFAONA; // 0x18
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPJNAEAJJP_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + MNPJNAEAJJP_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPJNAEAJJP_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::HEKOMMJCPJF*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::HEKOMMJCPJF*>*))((::PBYTE)hIl2Cpp + MNPJNAEAJJP_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void AALCFBOGFKP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MNPJNAEAJJP_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::IMENCDLHKAI* ACMKLFOMPFC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::IMENCDLHKAI*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MNPJNAEAJJP_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Void OFGFCCPIOAJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MNPJNAEAJJP_OFGFCCPIOAJ_OFFSET))(this, a1);
		}

	};
