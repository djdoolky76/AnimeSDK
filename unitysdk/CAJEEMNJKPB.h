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

#define CAJEEMNJKPB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18FB9AC0)
#define CAJEEMNJKPB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18FB9B90)
#define CAJEEMNJKPB_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x18FB9540)
#define CAJEEMNJKPB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x18FB8ED0)
#define CAJEEMNJKPB_CTOR_OFFSET UNITYSDK_OFFSET(0x18FB9C30)
#define CAJEEMNJKPB_DCJCMCCFKEB_OFFSET UNITYSDK_OFFSET(0x18FB9A00)
#define CAJEEMNJKPB_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0x18FB8D30)
#define CAJEEMNJKPB_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0x18FB91D0)
#define CAJEEMNJKPB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x18FB86E0)
#define CAJEEMNJKPB_JIGAHNHGJDB_OFFSET UNITYSDK_OFFSET(0x18FB9240)
#define CAJEEMNJKPB_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x18FB8C00)
#define CAJEEMNJKPB_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x18FB8C50)
#define CAJEEMNJKPB_KCEGEBIIIDE_OFFSET UNITYSDK_OFFSET(0x18FB8FF0)
#define CAJEEMNJKPB_LDMAAPEKLPH_OFFSET UNITYSDK_OFFSET(0x18FB96B0)
#define CAJEEMNJKPB_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x18FB8CA0)
#define CAJEEMNJKPB_MEGBICDFMDP_OFFSET UNITYSDK_OFFSET(0x18FB9140)
#define CAJEEMNJKPB_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x18FB8A50)
#define CAJEEMNJKPB_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0x18FB8DB0)
#define CAJEEMNJKPB_MNCFPMMINKJ_OFFSET UNITYSDK_OFFSET(0x18FB8F40)
#define CAJEEMNJKPB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18FB8790)
#define CAJEEMNJKPB_NOIGOHOKOLB_OFFSET UNITYSDK_OFFSET(0x18FB8870)
#define CAJEEMNJKPB_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x18FB8AA0)
#define CAJEEMNJKPB_PFKDDJCDBGB_OFFSET UNITYSDK_OFFSET(0x18FB8FA0)
#define CAJEEMNJKPB__ONBIND_OFFSET UNITYSDK_OFFSET(0x18FB80F0)
#define CAJEEMNJKPB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18FB8660)

inline static constexpr unsigned int CAJEEMNJKPB_TypeDefinitionIndex = 74237;

	class CAJEEMNJKPB : public ::FMPCODLIOLG
	{
	public:
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x60
		::UnityEngine::Transform* AIAOBPIDHCF; // 0x68
		::DJMOOPPAEBM* DGEHALMJPAP; // 0x70
		::RPG::Client::UIDynamicEffect* CPGINCJECEM; // 0x78
		::UnityEngine::Transform* JJCPAPNKKBL; // 0x80
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x88
		::RPG::Client::PrefabLoadMeta* IPHADIJMKPF; // 0x90
		::RPG::Client::UIDynamicEffect* EPMJCKHKPFC; // 0x98
		::System::String* DIDHOFMKIFH; // 0xA0
		::EBCNJEFOMCG* PNBFAOANEKC; // 0xA8
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0xB0
		::UnityEngine::Transform* NJECMJCJAPD; // 0xB8
		::UnityEngine::Transform* NJFPFGJBLMK; // 0xC0
		::HOJPODMLIGP* CNEEFOMPGBC; // 0xC8
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
