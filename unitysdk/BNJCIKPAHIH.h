#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class DFHFOEODPLF;
class GAHPNAEGACM;
class GEDMHFPPBHN;
class KPCOIAAEGAK;
class MADHNHEMBOJ;
class OJGHGPNOOFL;
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define BNJCIKPAHIH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC75B010)
#define BNJCIKPAHIH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC75B0E0)
#define BNJCIKPAHIH_BJLPAKMDKHE_OFFSET UNITYSDK_OFFSET(0xC75AF80)
#define BNJCIKPAHIH_CJMLBCIJEBJ_OFFSET UNITYSDK_OFFSET(0xC75AE90)
#define BNJCIKPAHIH_CTOR_OFFSET UNITYSDK_OFFSET(0xC75B180)
#define BNJCIKPAHIH_DCPBJLDPPOK_OFFSET UNITYSDK_OFFSET(0xC75AC30)
#define BNJCIKPAHIH_GGEDGBNHGAC_OFFSET UNITYSDK_OFFSET(0xC75ACE0)
#define BNJCIKPAHIH_LOGNIMAKMCO_OFFSET UNITYSDK_OFFSET(0xC75A940)
#define BNJCIKPAHIH_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC75AF30)
#define BNJCIKPAHIH_MPPMDJIMBBH_OFFSET UNITYSDK_OFFSET(0xC75A810)
#define BNJCIKPAHIH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC75AB60)
#define BNJCIKPAHIH_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xC75AE20)
#define BNJCIKPAHIH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC75AA40)
#define BNJCIKPAHIH__ONBIND_OFFSET UNITYSDK_OFFSET(0xC75A550)

inline static constexpr unsigned int BNJCIKPAHIH_TypeDefinitionIndex = 73212;

	class BNJCIKPAHIH : public ::FMPCODLIOLG
	{
	public:
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x60
		::OJGHGPNOOFL* DNAIDBLIPNH; // 0x68
		::UnityEngine::Transform* AGHEGOCDDCK; // 0x70
		::KPCOIAAEGAK* FMDKIOCDOIE; // 0x78
		::UnityEngine::Transform* MGDDJCDGKOJ; // 0x80
		::UnityEngine::Transform* MNDABEGBCKM; // 0x88
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x90
		::UnityEngine::Transform* FCPIBPBPLMH; // 0x98
		::UnityEngine::Transform* EMCOKOIENJI; // 0xA0
		::UnityEngine::Transform* FCAPCILLLON; // 0xA8
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xB0
		::GJPBCNIIEOB_Mode EEGFGAEOMCO; // 0xB8
		// static const ::System::Object MIPNCHMFDGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH__ONBIND_OFFSET))(this);
		}

		::System::Void MPPMDJIMBBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_MPPMDJIMBBH_OFFSET))(this);
		}

		::DFHFOEODPLF* LOGNIMAKMCO()
		{
			return ((::DFHFOEODPLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_LOGNIMAKMCO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH__INITVARONCE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::CAOEEDDAPIK_NNBFMHKHMKO* a1, ::GJPBCNIIEOB_Mode a2)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*, ::GJPBCNIIEOB_Mode))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void DCPBJLDPPOK(::GJPBCNIIEOB_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJPBCNIIEOB_Mode))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_DCPBJLDPPOK_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void GGEDGBNHGAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_GGEDGBNHGAC_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_MFCDKJIHDEH_OFFSET))(this);
		}

		::UnityEngine::Transform* CJMLBCIJEBJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_CJMLBCIJEBJ_OFFSET))(this);
		}

		::System::Void BJLPAKMDKHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_BJLPAKMDKHE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
