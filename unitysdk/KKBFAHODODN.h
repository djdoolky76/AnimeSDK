#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKBFAHODODN_AFHEEKHLJHL_OFFSET UNITYSDK_OFFSET(0xB4B3A30)
#define KKBFAHODODN_BLFHFNMIEIP_OFFSET UNITYSDK_OFFSET(0xB4B3BC0)
#define KKBFAHODODN_CNACAGNKNFG_OFFSET UNITYSDK_OFFSET(0xB4B4910)
#define KKBFAHODODN_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B39A0)
#define KKBFAHODODN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4B39E0)
#define KKBFAHODODN_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0xB4B4C70)
#define KKBFAHODODN_GEIHCFDNMEH_OFFSET UNITYSDK_OFFSET(0xB4B4BF0)
#define KKBFAHODODN_GKJBEEIIMEB_OFFSET UNITYSDK_OFFSET(0xB4B4050)
#define KKBFAHODODN_IGNHHIJBHGB_OFFSET UNITYSDK_OFFSET(0xB4B3B50)
#define KKBFAHODODN_NCOKAEDOAIK_OFFSET UNITYSDK_OFFSET(0xB4B3FE0)
#define KKBFAHODODN_OLLNABJNLDK_OFFSET UNITYSDK_OFFSET(0xB4B47B0)

inline static constexpr unsigned int KKBFAHODODN_TypeDefinitionIndex = 56878;

	class KKBFAHODODN : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* KPFHDLMEFHN; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* OOMDGPLMNOH; // 0x18
		::RPG::GameCore::AvatarDataComponent* ACDJAKOGPPD; // 0x20
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
