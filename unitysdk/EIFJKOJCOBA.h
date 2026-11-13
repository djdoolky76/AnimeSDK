#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ECDNGOHAPMA;
class KFLKNAENGDO;
class OLIJHLMMJJH;
class PHILMGOOGCK;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EIFJKOJCOBA_AAOGFGCOPDB_OFFSET UNITYSDK_OFFSET(0x19A91AD0)
#define EIFJKOJCOBA_ALHNBLJNLLK_OFFSET UNITYSDK_OFFSET(0x19A91770)
#define EIFJKOJCOBA_APMDOMOLEPF_OFFSET UNITYSDK_OFFSET(0x19A91C80)
#define EIFJKOJCOBA_CTOR_OFFSET UNITYSDK_OFFSET(0x19A92400)
#define EIFJKOJCOBA_DEENJIHKDDL_OFFSET UNITYSDK_OFFSET(0x19A91C10)
#define EIFJKOJCOBA_FDFIBKPPJDK_OFFSET UNITYSDK_OFFSET(0x19A91D60)
#define EIFJKOJCOBA_GDLBAMCJFFO_OFFSET UNITYSDK_OFFSET(0x19A91B30)
#define EIFJKOJCOBA_GIHKDLBOBMN_OFFSET UNITYSDK_OFFSET(0x19A91240)
#define EIFJKOJCOBA_GJOFGKBKJON_OFFSET UNITYSDK_OFFSET(0x19A905A0)
#define EIFJKOJCOBA_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0x19A91400)
#define EIFJKOJCOBA_ILFHJOBHMIL_OFFSET UNITYSDK_OFFSET(0x19A920C0)
#define EIFJKOJCOBA_JGMBNKPBPKG_OFFSET UNITYSDK_OFFSET(0x19A91BB0)
#define EIFJKOJCOBA_LBGKGJINBDL_OFFSET UNITYSDK_OFFSET(0x19A915B0)
#define EIFJKOJCOBA_LMFCEPPHEKN_OFFSET UNITYSDK_OFFSET(0x19A92060)
#define EIFJKOJCOBA_MCCFNKNJBFM_OFFSET UNITYSDK_OFFSET(0x19A92110)
#define EIFJKOJCOBA_MIIJCENJPLP_OFFSET UNITYSDK_OFFSET(0x19A91920)
#define EIFJKOJCOBA_NEFMGDAGBGI_OFFSET UNITYSDK_OFFSET(0x19A8FC70)
#define EIFJKOJCOBA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x19A8FC10)
#define EIFJKOJCOBA_OGENBMCBPPK_OFFSET UNITYSDK_OFFSET(0x19A91EF0)
#define EIFJKOJCOBA_PFHPIAGCPOL_OFFSET UNITYSDK_OFFSET(0x19A8FE70)
#define EIFJKOJCOBA__ONBIND_OFFSET UNITYSDK_OFFSET(0x19A8FAF0)
#define EIFJKOJCOBA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19A8FBA0)

inline static constexpr unsigned int EIFJKOJCOBA_TypeDefinitionIndex = 73786;

	class EIFJKOJCOBA : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::ECDNGOHAPMA*>* FOFHDIOPKED; // 0x60
		::UnityEngine::Transform* MKLCDAJONKL; // 0x68
		::OLIJHLMMJJH* GKJKFFNHLFG; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterWeaknessSpecialType, ::PHILMGOOGCK*>* NHCGMOLCIBG; // 0x78
		::KFLKNAENGDO* EMOGILLDJFJ; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EIFJKOJCOBA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void GIHKDLBOBMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_GIHKDLBOBMN_OFFSET))(this);
		}

		::System::Void HABFIFCKMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_HABFIFCKMKG_OFFSET))(this);
		}

		::System::Void LBGKGJINBDL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_LBGKGJINBDL_OFFSET))(this, a1, a2);
		}

		::System::Void ALHNBLJNLLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_ALHNBLJNLLK_OFFSET))(this);
		}

		::System::Void MIIJCENJPLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_MIIJCENJPLP_OFFSET))(this);
		}

		::System::Void AAOGFGCOPDB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_AAOGFGCOPDB_OFFSET))(this, a1);
		}

		::System::Void GDLBAMCJFFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_GDLBAMCJFFO_OFFSET))(this);
		}

		::System::Void GJOFGKBKJON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_GJOFGKBKJON_OFFSET))(this);
		}

		::System::Void PFHPIAGCPOL(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_PFHPIAGCPOL_OFFSET))(this, a1, a2);
		}

		::PHILMGOOGCK* DEENJIHKDDL(::RPG::GameCore::MonsterWeaknessSpecialType a1)
		{
			return ((::PHILMGOOGCK*(*)(::PVOID, ::RPG::GameCore::MonsterWeaknessSpecialType))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_DEENJIHKDDL_OFFSET))(this, a1);
		}

		::PHILMGOOGCK* APMDOMOLEPF(::RPG::GameCore::MonsterWeaknessSpecialType a1)
		{
			return ((::PHILMGOOGCK*(*)(::PVOID, ::RPG::GameCore::MonsterWeaknessSpecialType))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_APMDOMOLEPF_OFFSET))(this, a1);
		}

		::PHILMGOOGCK* FDFIBKPPJDK(::RPG::GameCore::MonsterWeaknessSpecialType a1)
		{
			return ((::PHILMGOOGCK*(*)(::PVOID, ::RPG::GameCore::MonsterWeaknessSpecialType))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_FDFIBKPPJDK_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType LMFCEPPHEKN()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_LMFCEPPHEKN_OFFSET))(this);
		}

		::PHILMGOOGCK* OGENBMCBPPK()
		{
			return ((::PHILMGOOGCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_OGENBMCBPPK_OFFSET))(this);
		}

		::System::Void ILFHJOBHMIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_ILFHJOBHMIL_OFFSET))(this);
		}

		::System::Void NEFMGDAGBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_NEFMGDAGBGI_OFFSET))(this);
		}

		::System::Void MCCFNKNJBFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_MCCFNKNJBFM_OFFSET))(this);
		}

		::System::Boolean JGMBNKPBPKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJKOJCOBA_JGMBNKPBPKG_OFFSET))(this);
		}

	};
