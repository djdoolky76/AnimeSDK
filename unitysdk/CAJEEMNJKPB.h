#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ANABDAAAEEA;
class DJMOOPPAEBM;
class DLCPHCINDJF;
class EBCNJEFOMCG;
class GAHPNAEGACM;
class HOJPODMLIGP;
class KOAOAKKCCPK;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIDynamicEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CAJEEMNJKPB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCDECCC0)
#define CAJEEMNJKPB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCDECD90)
#define CAJEEMNJKPB_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xCDEC750)
#define CAJEEMNJKPB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xCDEC0C0)
#define CAJEEMNJKPB_CTOR_OFFSET UNITYSDK_OFFSET(0xCDECE30)
#define CAJEEMNJKPB_DCJCMCCFKEB_OFFSET UNITYSDK_OFFSET(0xCDECC00)
#define CAJEEMNJKPB_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0xCDEBF10)
#define CAJEEMNJKPB_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0xCDEC3E0)
#define CAJEEMNJKPB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xCDEB8A0)
#define CAJEEMNJKPB_JIGAHNHGJDB_OFFSET UNITYSDK_OFFSET(0xCDEC450)
#define CAJEEMNJKPB_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xCDEBDE0)
#define CAJEEMNJKPB_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xCDEBE30)
#define CAJEEMNJKPB_KCEGEBIIIDE_OFFSET UNITYSDK_OFFSET(0xCDEC1F0)
#define CAJEEMNJKPB_LDMAAPEKLPH_OFFSET UNITYSDK_OFFSET(0xCDEC8B0)
#define CAJEEMNJKPB_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xCDEBE80)
#define CAJEEMNJKPB_MEGBICDFMDP_OFFSET UNITYSDK_OFFSET(0xCDEC350)
#define CAJEEMNJKPB_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCDEBC30)
#define CAJEEMNJKPB_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0xCDEBFA0)
#define CAJEEMNJKPB_MNCFPMMINKJ_OFFSET UNITYSDK_OFFSET(0xCDEC140)
#define CAJEEMNJKPB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xCDEB950)
#define CAJEEMNJKPB_NOIGOHOKOLB_OFFSET UNITYSDK_OFFSET(0xCDEBA40)
#define CAJEEMNJKPB_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xCDEBC80)
#define CAJEEMNJKPB_PFKDDJCDBGB_OFFSET UNITYSDK_OFFSET(0xCDEC1A0)
#define CAJEEMNJKPB__ONBIND_OFFSET UNITYSDK_OFFSET(0xCDEB2B0)
#define CAJEEMNJKPB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCDEB820)

inline static constexpr unsigned int CAJEEMNJKPB_TypeDefinitionIndex = 74238;

	class CAJEEMNJKPB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* NJECMJCJAPD; // 0x60
		::RPG::Client::UIDynamicEffect* EPMJCKHKPFC; // 0x68
		::System::String* DIDHOFMKIFH; // 0x70
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x78
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x80
		::HOJPODMLIGP* CNEEFOMPGBC; // 0x88
		::RPG::Client::PrefabLoadMeta* IPHADIJMKPF; // 0x90
		::DJMOOPPAEBM* DGEHALMJPAP; // 0x98
		::UnityEngine::Transform* NJFPFGJBLMK; // 0xA0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xA8
		::RPG::Client::UIDynamicEffect* CPGINCJECEM; // 0xB0
		::UnityEngine::Transform* AIAOBPIDHCF; // 0xB8
		::UnityEngine::Transform* JJCPAPNKKBL; // 0xC0
		::EBCNJEFOMCG* PNBFAOANEKC; // 0xC8
		::System::Boolean IDBHEIBEGBA; // 0xD0
		// static const ::System::String* BLBNCJJHLMC; // 0x0
		// static const ::System::Object EAILNDLGEIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CAJEEMNJKPB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::DJMOOPPAEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJMOOPPAEBM*))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_MFCDKJIHDEH_OFFSET))(this);
		}

		::GJPBCNIIEOB_Mode PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::GJPBCNIIEOB_Mode(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Boolean MHLMDMKFOFG(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_MHLMDMKFOFG_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void MNCFPMMINKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_MNCFPMMINKJ_OFFSET))(this);
		}

		::System::Void PFKDDJCDBGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_PFKDDJCDBGB_OFFSET))(this);
		}

		::System::Boolean MEGBICDFMDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_MEGBICDFMDP_OFFSET))(this);
		}

		::System::Void JFBDFHPOEEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_JFBDFHPOEEK_OFFSET))(this, a1);
		}

		::System::Void NOIGOHOKOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_NOIGOHOKOLB_OFFSET))(this);
		}

		::System::Void ILMPMNJDDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_ILMPMNJDDPA_OFFSET))(this);
		}

		::System::Void JIGAHNHGJDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_JIGAHNHGJDB_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void KCEGEBIIIDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_KCEGEBIIIDE_OFFSET))(this);
		}

		::System::Void LDMAAPEKLPH(::System::Collections::Generic::List_1<::DLCPHCINDJF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLCPHCINDJF*>*))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_LDMAAPEKLPH_OFFSET))(this, a1);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void DCJCMCCFKEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_DCJCMCCFKEB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
