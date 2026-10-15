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
class KOAOAKKCCPK;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIDynamicEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CAJEEMNJKPB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC484820)
#define CAJEEMNJKPB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC4848F0)
#define CAJEEMNJKPB_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xC4842A0)
#define CAJEEMNJKPB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC483C60)
#define CAJEEMNJKPB_CTOR_OFFSET UNITYSDK_OFFSET(0xC484990)
#define CAJEEMNJKPB_DCJCMCCFKEB_OFFSET UNITYSDK_OFFSET(0xC484760)
#define CAJEEMNJKPB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC4833C0)
#define CAJEEMNJKPB_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0xC483AF0)
#define CAJEEMNJKPB_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0xC483F20)
#define CAJEEMNJKPB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC483430)
#define CAJEEMNJKPB_JIGAHNHGJDB_OFFSET UNITYSDK_OFFSET(0xC483F90)
#define CAJEEMNJKPB_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xC4839A0)
#define CAJEEMNJKPB_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xC4839F0)
#define CAJEEMNJKPB_KCEGEBIIIDE_OFFSET UNITYSDK_OFFSET(0xC483D30)
#define CAJEEMNJKPB_LDMAAPEKLPH_OFFSET UNITYSDK_OFFSET(0xC484410)
#define CAJEEMNJKPB_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC483A40)
#define CAJEEMNJKPB_MEGBICDFMDP_OFFSET UNITYSDK_OFFSET(0xC483E90)
#define CAJEEMNJKPB_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC4837F0)
#define CAJEEMNJKPB_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0xC483B40)
#define CAJEEMNJKPB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC4834E0)
#define CAJEEMNJKPB_NOIGOHOKOLB_OFFSET UNITYSDK_OFFSET(0xC4835D0)
#define CAJEEMNJKPB_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xC483840)
#define CAJEEMNJKPB_PFKDDJCDBGB_OFFSET UNITYSDK_OFFSET(0xC483CE0)
#define CAJEEMNJKPB__ONBIND_OFFSET UNITYSDK_OFFSET(0xC483080)

	class CAJEEMNJKPB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* JJCPAPNKKBL; // 0x60
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x68
		::EBCNJEFOMCG* PNBFAOANEKC; // 0x70
		::RPG::Client::PrefabLoadMeta* IPHADIJMKPF; // 0x78
		::UnityEngine::Transform* NJECMJCJAPD; // 0x80
		::RPG::Client::UIDynamicEffect* CPGINCJECEM; // 0x88
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x90
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x98
		::UnityEngine::Transform* AIAOBPIDHCF; // 0xA0
		::RPG::Client::UIDynamicEffect* EPMJCKHKPFC; // 0xA8
		::System::String* DIDHOFMKIFH; // 0xB0
		::ANABDAAAEEA* CMKFDMKBPDD; // 0xB8
		::DJMOOPPAEBM* DGEHALMJPAP; // 0xC0
		::System::Boolean IDBHEIBEGBA; // 0xC8
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CAJEEMNJKPB_DHHDFAAJMMC_OFFSET))(this, a1);
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
