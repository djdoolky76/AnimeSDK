#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKBFAHODODN_AFHEEKHLJHL_OFFSET UNITYSDK_OFFSET(0xB45CD40)
#define KKBFAHODODN_BLFHFNMIEIP_OFFSET UNITYSDK_OFFSET(0xB45CED0)
#define KKBFAHODODN_CNACAGNKNFG_OFFSET UNITYSDK_OFFSET(0xB45DC10)
#define KKBFAHODODN_CTOR_OFFSET UNITYSDK_OFFSET(0xB45CCB0)
#define KKBFAHODODN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB45CCF0)
#define KKBFAHODODN_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0xB45DF70)
#define KKBFAHODODN_GEIHCFDNMEH_OFFSET UNITYSDK_OFFSET(0xB45DEF0)
#define KKBFAHODODN_GKJBEEIIMEB_OFFSET UNITYSDK_OFFSET(0xB45D360)
#define KKBFAHODODN_IGNHHIJBHGB_OFFSET UNITYSDK_OFFSET(0xB45CE60)
#define KKBFAHODODN_NCOKAEDOAIK_OFFSET UNITYSDK_OFFSET(0xB45D2F0)
#define KKBFAHODODN_OLLNABJNLDK_OFFSET UNITYSDK_OFFSET(0xB45DAB0)

inline static constexpr unsigned int KKBFAHODODN_TypeDefinitionIndex = 56878;

	class KKBFAHODODN : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarDataComponent* ACDJAKOGPPD; // 0x10
		::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* KPFHDLMEFHN; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* OOMDGPLMNOH; // 0x20
		::System::UInt32 MNIPJEALGNJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + KKBFAHODODN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBFAHODODN_DISPOSE_OFFSET))(this);
		}

		::System::Void IGNHHIJBHGB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKBFAHODODN_IGNHHIJBHGB_OFFSET))(this, a1);
		}

		::System::Void NCOKAEDOAIK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKBFAHODODN_NCOKAEDOAIK_OFFSET))(this, a1);
		}

		::System::Void CNACAGNKNFG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKBFAHODODN_CNACAGNKNFG_OFFSET))(this, a1);
		}

		::System::Void GKJBEEIIMEB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKBFAHODODN_GKJBEEIIMEB_OFFSET))(this, a1);
		}

		::System::Boolean GEIHCFDNMEH(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + KKBFAHODODN_GEIHCFDNMEH_OFFSET))(this, a1);
		}

		::System::Void BLFHFNMIEIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKBFAHODODN_BLFHFNMIEIP_OFFSET))(this, a1);
		}

		::System::Void OLLNABJNLDK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKBFAHODODN_OLLNABJNLDK_OFFSET))(this, a1);
		}

		::System::Void AFHEEKHLJHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBFAHODODN_AFHEEKHLJHL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FIIIDGBIHNB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBFAHODODN_FIIIDGBIHNB_OFFSET))(this);
		}

	};
