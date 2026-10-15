#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/WeaknessState.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KFLKNAENGDO;
class PHILMGOOGCK;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define MKBFCANFMEL_AAOGFGCOPDB_OFFSET UNITYSDK_OFFSET(0xB982810)
#define MKBFCANFMEL_ALHNBLJNLLK_OFFSET UNITYSDK_OFFSET(0xB983A90)
#define MKBFCANFMEL_APMDOMOLEPF_OFFSET UNITYSDK_OFFSET(0xB9830A0)
#define MKBFCANFMEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB9841F0)
#define MKBFCANFMEL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB9822D0)
#define MKBFCANFMEL_EKMOJPOKPMH_OFFSET UNITYSDK_OFFSET(0xB982D90)
#define MKBFCANFMEL_FDFIBKPPJDK_OFFSET UNITYSDK_OFFSET(0xB983170)
#define MKBFCANFMEL_GDLBAMCJFFO_OFFSET UNITYSDK_OFFSET(0xB982420)
#define MKBFCANFMEL_GFIFOOFMAIF_OFFSET UNITYSDK_OFFSET(0xB984120)
#define MKBFCANFMEL_GIHKDLBOBMN_OFFSET UNITYSDK_OFFSET(0xB9840D0)
#define MKBFCANFMEL_GJOFGKBKJON_OFFSET UNITYSDK_OFFSET(0xB981950)
#define MKBFCANFMEL_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0xB9820A0)
#define MKBFCANFMEL_HECDADBDGFK_OFFSET UNITYSDK_OFFSET(0xB983410)
#define MKBFCANFMEL_HPJGHOMCJCA_OFFSET UNITYSDK_OFFSET(0xB982AB0)
#define MKBFCANFMEL_IAALPPGKDGL_OFFSET UNITYSDK_OFFSET(0xB982680)
#define MKBFCANFMEL_ILFHJOBHMIL_OFFSET UNITYSDK_OFFSET(0xB983590)
#define MKBFCANFMEL_JGMBNKPBPKG_OFFSET UNITYSDK_OFFSET(0xB9833C0)
#define MKBFCANFMEL_KEPDEIOJJMA_OFFSET UNITYSDK_OFFSET(0xB983680)
#define MKBFCANFMEL_LBGKGJINBDL_OFFSET UNITYSDK_OFFSET(0xB9837E0)
#define MKBFCANFMEL_LMFCEPPHEKN_OFFSET UNITYSDK_OFFSET(0xB982D40)
#define MKBFCANFMEL_MCCFNKNJBFM_OFFSET UNITYSDK_OFFSET(0xB983470)
#define MKBFCANFMEL_MIIJCENJPLP_OFFSET UNITYSDK_OFFSET(0xB983D20)
#define MKBFCANFMEL_MONBDMPMPJC_OFFSET UNITYSDK_OFFSET(0xB982880)
#define MKBFCANFMEL_NEFMGDAGBGI_OFFSET UNITYSDK_OFFSET(0xB980F20)
#define MKBFCANFMEL_NKIHEDNPNKI_OFFSET UNITYSDK_OFFSET(0xB9835E0)
#define MKBFCANFMEL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB980EC0)
#define MKBFCANFMEL_OIAPBJJMFCM_OFFSET UNITYSDK_OFFSET(0xB983720)
#define MKBFCANFMEL_PFHPIAGCPOL_OFFSET UNITYSDK_OFFSET(0xB981070)
#define MKBFCANFMEL__ONBIND_OFFSET UNITYSDK_OFFSET(0xB982330)

inline static constexpr unsigned int MKBFCANFMEL_TypeDefinitionIndex = 71810;

	class MKBFCANFMEL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* BFNDFBEECCP; // 0x60
		::KFLKNAENGDO* EMOGILLDJFJ; // 0x68
		::UnityEngine::Transform* MKLCDAJONKL; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* AOLGNKIFOOE; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::PHILMGOOGCK*>* NHCGMOLCIBG; // 0x80
		::RPG::GameCore::AttackDamageType GDKNKDJMJCF; // 0x88
		::RPG::GameCore::AttackDamageType JPKLFMAPDJF; // 0x8C
		// static const ::System::Object OIDANIBCOCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_CTOR_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void HABFIFCKMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_HABFIFCKMKG_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MKBFCANFMEL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL__ONBIND_OFFSET))(this);
		}

		::System::Void GDLBAMCJFFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_GDLBAMCJFFO_OFFSET))(this);
		}

		::System::Void AAOGFGCOPDB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKBFCANFMEL_AAOGFGCOPDB_OFFSET))(this, a1);
		}

		::System::Void PFHPIAGCPOL(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MKBFCANFMEL_PFHPIAGCPOL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::WeaknessState HECDADBDGFK(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::RPG::GameCore::WeaknessState(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MKBFCANFMEL_HECDADBDGFK_OFFSET))(this, a1);
		}

		::System::Void ILFHJOBHMIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_ILFHJOBHMIL_OFFSET))(this);
		}

		::System::Void NEFMGDAGBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_NEFMGDAGBGI_OFFSET))(this);
		}

		::System::Void MCCFNKNJBFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_MCCFNKNJBFM_OFFSET))(this);
		}

		::System::Void GJOFGKBKJON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_GJOFGKBKJON_OFFSET))(this);
		}

		::PHILMGOOGCK* FDFIBKPPJDK(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::PHILMGOOGCK*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MKBFCANFMEL_FDFIBKPPJDK_OFFSET))(this, a1);
		}

		::PHILMGOOGCK* APMDOMOLEPF(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::PHILMGOOGCK*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MKBFCANFMEL_APMDOMOLEPF_OFFSET))(this, a1);
		}

		::System::String* OIAPBJJMFCM(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MKBFCANFMEL_OIAPBJJMFCM_OFFSET))(this, a1);
		}

		::System::Void LBGKGJINBDL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MKBFCANFMEL_LBGKGJINBDL_OFFSET))(this, a1, a2);
		}

		::System::Void ALHNBLJNLLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_ALHNBLJNLLK_OFFSET))(this);
		}

		::System::Void MIIJCENJPLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_MIIJCENJPLP_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType MONBDMPMPJC(::System::Boolean a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKBFCANFMEL_MONBDMPMPJC_OFFSET))(this, a1);
		}

		::System::Void HPJGHOMCJCA(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MKBFCANFMEL_HPJGHOMCJCA_OFFSET))(this, a1);
		}

		::System::Void GIHKDLBOBMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_GIHKDLBOBMN_OFFSET))(this);
		}

		::System::Void EKMOJPOKPMH(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MKBFCANFMEL_EKMOJPOKPMH_OFFSET))(this, a1);
		}

		::System::Boolean JGMBNKPBPKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_JGMBNKPBPKG_OFFSET))(this);
		}

		::System::Boolean NKIHEDNPNKI(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKBFCANFMEL_NKIHEDNPNKI_OFFSET))(this, a1);
		}

		::System::Boolean KEPDEIOJJMA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKBFCANFMEL_KEPDEIOJJMA_OFFSET))(this, a1);
		}

		::System::Void IAALPPGKDGL(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MKBFCANFMEL_IAALPPGKDGL_OFFSET))(this, a1);
		}

		::System::Void GFIFOOFMAIF(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MKBFCANFMEL_GFIFOOFMAIF_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType LMFCEPPHEKN()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBFCANFMEL_LMFCEPPHEKN_OFFSET))(this);
		}

	};
