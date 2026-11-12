#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BANDDFEHONE;
class DJMOOPPAEBM;
class EEGFDJCDDAA;
class GAHPNAEGACM;
class MHEFMBEPJOJ;
class PGNDPPPFEEA;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define IHIFPCCBKOF_AFBPKDFCLEL_OFFSET UNITYSDK_OFFSET(0x173D7B20)
#define IHIFPCCBKOF_AHFENDHFMOD_OFFSET UNITYSDK_OFFSET(0x173D8020)
#define IHIFPCCBKOF_ALKBPICBBOO_OFFSET UNITYSDK_OFFSET(0x173D7C10)
#define IHIFPCCBKOF_BFEFLKGHICK_OFFSET UNITYSDK_OFFSET(0x173D6F30)
#define IHIFPCCBKOF_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x173D7ED0)
#define IHIFPCCBKOF_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x173D77E0)
#define IHIFPCCBKOF_CJLBLGIKGAI_OFFSET UNITYSDK_OFFSET(0x173D8B70)
#define IHIFPCCBKOF_CTOR_OFFSET UNITYSDK_OFFSET(0x173D91A0)
#define IHIFPCCBKOF_DHEJAGFIEBA_OFFSET UNITYSDK_OFFSET(0x173D7E00)
#define IHIFPCCBKOF_DMGOOHPPGLK_OFFSET UNITYSDK_OFFSET(0x173D9130)
#define IHIFPCCBKOF_DOPGKKIFLGK_OFFSET UNITYSDK_OFFSET(0x173D85B0)
#define IHIFPCCBKOF_ENGBLJEDEBK_OFFSET UNITYSDK_OFFSET(0x173D8C40)
#define IHIFPCCBKOF_FPONLAKGHFN_OFFSET UNITYSDK_OFFSET(0x173D8070)
#define IHIFPCCBKOF_HGCGDMOACDK_OFFSET UNITYSDK_OFFSET(0x173D7840)
#define IHIFPCCBKOF_IGMFCMMBJKK_OFFSET UNITYSDK_OFFSET(0x173D6CB0)
#define IHIFPCCBKOF_IIOOFJLPIBJ_OFFSET UNITYSDK_OFFSET(0x173D74C0)
#define IHIFPCCBKOF_INKPAMGBIIN_OFFSET UNITYSDK_OFFSET(0x173D7CC0)
#define IHIFPCCBKOF_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x173D70A0)
#define IHIFPCCBKOF_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x173D6E90)
#define IHIFPCCBKOF_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x173D7A80)
#define IHIFPCCBKOF_KJJIGHPMFHF_OFFSET UNITYSDK_OFFSET(0x173D7AD0)
#define IHIFPCCBKOF_LINKBMMGIJD_OFFSET UNITYSDK_OFFSET(0x173D8B00)
#define IHIFPCCBKOF_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x173D75A0)
#define IHIFPCCBKOF_LPBODJDDEMO_OFFSET UNITYSDK_OFFSET(0x173D88E0)
#define IHIFPCCBKOF_MEGBICDFMDP_OFFSET UNITYSDK_OFFSET(0x173D7290)
#define IHIFPCCBKOF_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x173D6EE0)
#define IHIFPCCBKOF_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0x173D7690)
#define IHIFPCCBKOF_MNCFPMMINKJ_OFFSET UNITYSDK_OFFSET(0x173D6C00)
#define IHIFPCCBKOF_NAHNPOOHGBO_OFFSET UNITYSDK_OFFSET(0x173D8110)
#define IHIFPCCBKOF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x173D6DC0)
#define IHIFPCCBKOF_OAJAIGOKPKL_OFFSET UNITYSDK_OFFSET(0x173D7320)
#define IHIFPCCBKOF_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0x173D7B70)
#define IHIFPCCBKOF_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x173D7150)
#define IHIFPCCBKOF_PMICEGLDCDI_OFFSET UNITYSDK_OFFSET(0x173D8D50)
#define IHIFPCCBKOF__ONBIND_OFFSET UNITYSDK_OFFSET(0x173D68D0)
#define IHIFPCCBKOF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x173D6B90)

inline static constexpr unsigned int IHIFPCCBKOF_TypeDefinitionIndex = 74229;

	class IHIFPCCBKOF : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x60
		::EEGFDJCDDAA* CMPHAKBNEND; // 0x68
		::MHEFMBEPJOJ* LPFEAPPIHOH; // 0x70
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
		::System::String* DIDHOFMKIFH; // 0x80
		::DJMOOPPAEBM* DGEHALMJPAP; // 0x88
		::UnityEngine::RectTransform* LLBFEPIPCJI; // 0x90
		::System::Collections::Generic::List_1<::PGNDPPPFEEA*>* FFEPFMPEPLD; // 0x98
		::RPG::Client::PrefabLoadMeta* OKFHIEBBBAE; // 0xA0
		::System::Collections::Generic::List_1<::BANDDFEHONE*>* LKKLBJJNIMI; // 0xA8
		::System::Boolean IDBHEIBEGBA; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IHIFPCCBKOF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void MNCFPMMINKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_MNCFPMMINKJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::DJMOOPPAEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJMOOPPAEBM*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_JIABCJLODJI_OFFSET))(this, a1);
		}

		::GJPBCNIIEOB_Mode PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::GJPBCNIIEOB_Mode(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::GJPBCNIIEOB_Mode IIOOFJLPIBJ(::GAHPNAEGACM* a1)
		{
			return ((::GJPBCNIIEOB_Mode(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_IIOOFJLPIBJ_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Boolean MHLMDMKFOFG(::RPG::Client::ActionBarItemUIStyle a1, ::GJPBCNIIEOB_Mode a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::GJPBCNIIEOB_Mode))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_MHLMDMKFOFG_OFFSET))(this, a1, a2);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::GJPBCNIIEOB_Mode HGCGDMOACDK()
		{
			return ((::GJPBCNIIEOB_Mode(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_HGCGDMOACDK_OFFSET))(this);
		}

		::System::Void PADHGKJFDGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_PADHGKJFDGD_OFFSET))(this, a1);
		}

		::System::Boolean MEGBICDFMDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_MEGBICDFMDP_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void IGMFCMMBJKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_IGMFCMMBJKK_OFFSET))(this);
		}

		::System::String* DHEJAGFIEBA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_DHEJAGFIEBA_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::GJPBCNIIEOB_Mode OAJAIGOKPKL(::GAHPNAEGACM* a1)
		{
			return ((::GJPBCNIIEOB_Mode(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_OAJAIGOKPKL_OFFSET))(this, a1);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void AHFENDHFMOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_AHFENDHFMOD_OFFSET))(this);
		}

		::System::Void KJJIGHPMFHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_KJJIGHPMFHF_OFFSET))(this);
		}

		::System::Void AFBPKDFCLEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_AFBPKDFCLEL_OFFSET))(this);
		}

		::System::Void BFEFLKGHICK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_BFEFLKGHICK_OFFSET))(this);
		}

		::System::Void INKPAMGBIIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_INKPAMGBIIN_OFFSET))(this);
		}

		::System::Void FPONLAKGHFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_FPONLAKGHFN_OFFSET))(this);
		}

		::System::Void NAHNPOOHGBO(::System::Collections::Generic::List_1<::BANDDFEHONE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BANDDFEHONE*>*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_NAHNPOOHGBO_OFFSET))(this, a1);
		}

		::System::Int32 LPBODJDDEMO(::System::Collections::Generic::List_1<::BANDDFEHONE*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::BANDDFEHONE*>*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_LPBODJDDEMO_OFFSET))(this, a1);
		}

		::System::Void DOPGKKIFLGK(::System::Collections::Generic::List_1<::BANDDFEHONE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BANDDFEHONE*>*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_DOPGKKIFLGK_OFFSET))(this, a1);
		}

		::PGNDPPPFEEA* PMICEGLDCDI()
		{
			return ((::PGNDPPPFEEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_PMICEGLDCDI_OFFSET))(this);
		}

		::System::Void DMGOOHPPGLK(::BANDDFEHONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_DMGOOHPPGLK_OFFSET))(this, a1);
		}

		::System::Void ENGBLJEDEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_ENGBLJEDEBK_OFFSET))(this);
		}

		::PGNDPPPFEEA* LINKBMMGIJD(::BANDDFEHONE* a1)
		{
			return ((::PGNDPPPFEEA*(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_LINKBMMGIJD_OFFSET))(this, a1);
		}

		::PGNDPPPFEEA* CJLBLGIKGAI(::BANDDFEHONE* a1)
		{
			return ((::PGNDPPPFEEA*(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_CJLBLGIKGAI_OFFSET))(this, a1);
		}

		::System::Void ALKBPICBBOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF_ALKBPICBBOO_OFFSET))(this);
		}

	};
