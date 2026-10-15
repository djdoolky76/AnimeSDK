#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"
class CBPHAOJJAMH;
class IGCBDPPGKMD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBehaviorFlagStateAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHJCBKNDCNL_ABHINNCKONM_OFFSET UNITYSDK_OFFSET(0xCF4C9C0)
#define CHJCBKNDCNL_BGDHIEGBHFI_OFFSET UNITYSDK_OFFSET(0xCF4CF70)
#define CHJCBKNDCNL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF4D2F0)
#define CHJCBKNDCNL_LCFINOLFADD_OFFSET UNITYSDK_OFFSET(0xCF4CE60)
#define CHJCBKNDCNL_ONFLAGSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCF4D050)
#define CHJCBKNDCNL_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xCF4C920)
#define CHJCBKNDCNL_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xCF4C970)

inline static constexpr unsigned int CHJCBKNDCNL_TypeDefinitionIndex = 54105;

	class CHJCBKNDCNL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::System::Collections::Generic::List_1<::IGCBDPPGKMD*>* CGFBEPNJODL; // 0x18
		::System::Collections::Generic::List_1<::CBPHAOJJAMH*>* KMABDJAHOEH; // 0x20
		::Il2CppArray<::IGCBDPPGKMD*>* HKJLICHEBEO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJCBKNDCNL_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CHJCBKNDCNL_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJCBKNDCNL_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void ABHINNCKONM(::Il2CppArray<::RPG::GameCore::RtBehaviorFlagStateAction*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlagStateAction*>*))((::PBYTE)hIl2Cpp + CHJCBKNDCNL_ABHINNCKONM_OFFSET))(this, a1);
		}

		::System::Void LCFINOLFADD(::CBPHAOJJAMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBPHAOJJAMH*))((::PBYTE)hIl2Cpp + CHJCBKNDCNL_LCFINOLFADD_OFFSET))(this, a1);
		}

		::System::Void BGDHIEGBHFI(::CBPHAOJJAMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBPHAOJJAMH*))((::PBYTE)hIl2Cpp + CHJCBKNDCNL_BGDHIEGBHFI_OFFSET))(this, a1);
		}

		::System::Void OnFlagStateChange(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBehaviorFlag a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBehaviorFlag, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CHJCBKNDCNL_ONFLAGSTATECHANGE_OFFSET))(this, a1, a2, a3, a4);
		}

	};
