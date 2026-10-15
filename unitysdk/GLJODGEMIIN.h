#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { template <typename T> class Predicate_1; }

#define GLJODGEMIIN_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15ABBA00)
#define GLJODGEMIIN_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABA5D0)
#define GLJODGEMIIN_EPIEHFMEPPH_OFFSET UNITYSDK_OFFSET(0x15ABB8D0)
#define GLJODGEMIIN_HJPDDKOIEEB_OFFSET UNITYSDK_OFFSET(0x15ABAEB0)
#define GLJODGEMIIN_IFACNNNEFMB_OFFSET UNITYSDK_OFFSET(0x15ABBAC0)
#define GLJODGEMIIN_JNAGNKAHEEM_OFFSET UNITYSDK_OFFSET(0x15ABB0B0)
#define GLJODGEMIIN_KDDDFFBHNBL_OFFSET UNITYSDK_OFFSET(0x15ABB720)
#define GLJODGEMIIN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15ABA5E0)
#define GLJODGEMIIN_MFJCHPHDJCG_OFFSET UNITYSDK_OFFSET(0x15ABB4B0)
#define GLJODGEMIIN_NLBKIBELCMF_OFFSET UNITYSDK_OFFSET(0x15ABB6A0)
#define GLJODGEMIIN_TICK_OFFSET UNITYSDK_OFFSET(0x15ABBA50)

	class GLJODGEMIIN : public ::HBPNHCICJGF
	{
	public:
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* FHBCGGCMHGL; // 0x28
		::RPG::GameCore::GameEntity* JMHLJHCDPJJ; // 0x30
		::RPG::GameCore::SkillCharacterComponent* CJOLLMNNCPE; // 0x38
		::System::UInt32 INIMEDHEMHB; // 0x40
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + GLJODGEMIIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJODGEMIIN_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Boolean NLBKIBELCMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJODGEMIIN_NLBKIBELCMF_OFFSET))(this);
		}

		::System::Void MFJCHPHDJCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJODGEMIIN_MFJCHPHDJCG_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJODGEMIIN_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLJODGEMIIN_TICK_OFFSET))(this, a1);
		}

		::System::Boolean EPIEHFMEPPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJODGEMIIN_EPIEHFMEPPH_OFFSET))(this);
		}

		::System::Boolean KDDDFFBHNBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJODGEMIIN_KDDDFFBHNBL_OFFSET))(this);
		}

		static ::System::Boolean IFACNNNEFMB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GLJODGEMIIN_IFACNNNEFMB_OFFSET))(a1);
		}

		::System::Boolean JNAGNKAHEEM(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLJODGEMIIN_JNAGNKAHEEM_OFFSET))(this, a1);
		}

		::System::Boolean HJPDDKOIEEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJODGEMIIN_HJPDDKOIEEB_OFFSET))(this);
		}

	};
