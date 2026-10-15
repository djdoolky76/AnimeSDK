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

#define BNJCIKPAHIH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBDD85D0)
#define BNJCIKPAHIH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBDD86A0)
#define BNJCIKPAHIH_BJLPAKMDKHE_OFFSET UNITYSDK_OFFSET(0xBDD8540)
#define BNJCIKPAHIH_CJMLBCIJEBJ_OFFSET UNITYSDK_OFFSET(0xBDD8440)
#define BNJCIKPAHIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD8740)
#define BNJCIKPAHIH_DCPBJLDPPOK_OFFSET UNITYSDK_OFFSET(0xBDD81D0)
#define BNJCIKPAHIH_GGEDGBNHGAC_OFFSET UNITYSDK_OFFSET(0xBDD8280)
#define BNJCIKPAHIH_LOGNIMAKMCO_OFFSET UNITYSDK_OFFSET(0xBDD7EE0)
#define BNJCIKPAHIH_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xBDD84E0)
#define BNJCIKPAHIH_MPPMDJIMBBH_OFFSET UNITYSDK_OFFSET(0xBDD7DB0)
#define BNJCIKPAHIH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBDD7FE0)
#define BNJCIKPAHIH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBDD8100)
#define BNJCIKPAHIH_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xBDD83D0)
#define BNJCIKPAHIH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBDD7B00)

inline static constexpr unsigned int BNJCIKPAHIH_TypeDefinitionIndex = 71232;

	class BNJCIKPAHIH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* FCAPCILLLON; // 0x60
		::UnityEngine::Transform* FCPIBPBPLMH; // 0x68
		::UnityEngine::Transform* EMCOKOIENJI; // 0x70
		::UnityEngine::Transform* MGDDJCDGKOJ; // 0x78
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x80
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x88
		::OJGHGPNOOFL* DNAIDBLIPNH; // 0x90
		::UnityEngine::Transform* MNDABEGBCKM; // 0x98
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0xA0
		::UnityEngine::Transform* AGHEGOCDDCK; // 0xA8
		::KPCOIAAEGAK* FMDKIOCDOIE; // 0xB0
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCIKPAHIH_NIJJPBOIGBI_OFFSET))(this);
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
