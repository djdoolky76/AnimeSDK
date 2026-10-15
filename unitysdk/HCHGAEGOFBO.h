#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCHGAEGOFBO_TriggerDisableReason.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"
class EDLDHDMLJDH;
class GELIALJDFBL;
class KFELGAIGHAP;
class LDJLOIJHLOC;
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonUnitGlobalConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnitCustomTriggerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HCHGAEGOFBO_AGIMGKGCLJP_OFFSET UNITYSDK_OFFSET(0x15C1D970)
#define HCHGAEGOFBO_AOGACFIOJKK_OFFSET UNITYSDK_OFFSET(0x15C1BD40)
#define HCHGAEGOFBO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C1EDF0)
#define HCHGAEGOFBO_DAHIKABGJFB_OFFSET UNITYSDK_OFFSET(0x15C1ECE0)
#define HCHGAEGOFBO_DPIIHPNEHJA_OFFSET UNITYSDK_OFFSET(0x15C1C390)
#define HCHGAEGOFBO_EAGNPMKPJDK_OFFSET UNITYSDK_OFFSET(0x15C1D520)
#define HCHGAEGOFBO_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0x15C1C380)
#define HCHGAEGOFBO_FFNIMOEDJKD_OFFSET UNITYSDK_OFFSET(0x15C1EA40)
#define HCHGAEGOFBO_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x15C1EDC0)
#define HCHGAEGOFBO_GIMOJBAJAJG_OFFSET UNITYSDK_OFFSET(0x15C1EDD0)
#define HCHGAEGOFBO_GLNIGDFCHOJ_OFFSET UNITYSDK_OFFSET(0x15C1EDE0)
#define HCHGAEGOFBO_GNBFHLKIBJI_OFFSET UNITYSDK_OFFSET(0x15C1C290)
#define HCHGAEGOFBO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15C1BFB0)
#define HCHGAEGOFBO_HAIPMHBGCBI_OFFSET UNITYSDK_OFFSET(0x15C1BCA0)
#define HCHGAEGOFBO_HCFLEFNGHHC_OFFSET UNITYSDK_OFFSET(0x15C1C7A0)
#define HCHGAEGOFBO_JEEMFDKPPKB_OFFSET UNITYSDK_OFFSET(0x15C1BBB0)
#define HCHGAEGOFBO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C1E070)
#define HCHGAEGOFBO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C1AE60)
#define HCHGAEGOFBO_LBBLNALEPMN_OFFSET UNITYSDK_OFFSET(0x15C1D6D0)
#define HCHGAEGOFBO_MAHIFKGEHIF_OFFSET UNITYSDK_OFFSET(0x15C1C540)
#define HCHGAEGOFBO_MKMBPBMMDOJ_OFFSET UNITYSDK_OFFSET(0x15C1E100)
#define HCHGAEGOFBO_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15C1EDA0)
#define HCHGAEGOFBO_NENGKHLILJL_OFFSET UNITYSDK_OFFSET(0x15C1DC10)
#define HCHGAEGOFBO_NKEHCELIDHG_OFFSET UNITYSDK_OFFSET(0x15C1C460)
#define HCHGAEGOFBO_PLOGHCKKPII_OFFSET UNITYSDK_OFFSET(0x15C1EDB0)

inline static constexpr unsigned int HCHGAEGOFBO_TypeDefinitionIndex = 57460;

	class HCHGAEGOFBO : public ::System::Object
	{
	public:
		::KFELGAIGHAP* ENAIBJGFMFI; // 0x10
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ColliderTriggerComponent* EJEEIAAFHNN; // 0x20
		::KFELGAIGHAP* GMEDBNAABDC; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NCIHENHPKCH; // 0x30
		::EDLDHDMLJDH* GALAHGAJODG; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NBCPCIFHEHG; // 0x40
		::RPG::GameCore::UnitCustomTriggerConfig* IGHAHBNLIJA; // 0x48
		::System::String* GIDAEFPOGHI; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AKHPJHLBMCM; // 0x58
		::GELIALJDFBL* DJHOAONPLLH; // 0x60
		::RPG::GameCore::SummonUnitGlobalConfig* FAFFFDIKBBI; // 0x68
		::LDJLOIJHLOC* LFFDPMJPHEG; // 0x70
		::System::Single MDNPNOEMHIC; // 0x78
		::System::Single FJPOKCBJDAL; // 0x7C
		::HCHGAEGOFBO_TriggerDisableReason KPIJLMIIJKF; // 0x80
		::System::Boolean OKCCLDANMCE; // 0x84
		::System::Boolean HKKLHMHNNHG; // 0x85
		::System::Boolean OLABICPNDFJ; // 0x86
		::System::Boolean BDKBIJFDANJ; // 0x87
		::System::Boolean AGMMNOOOFAD; // 0x88
		::System::Boolean HOBLOANFANB; // 0x89
		::System::Byte _padding0[0x2];
		::System::Single COAELIHGAHH; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LDJLOIJHLOC* a1, ::RPG::GameCore::ColliderTriggerComponent* a2, ::RPG::GameCore::UnitCustomTriggerConfig* a3, ::System::Int32 a4, ::RPG::GameCore::TaskContext* a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::LDJLOIJHLOC*, ::RPG::GameCore::ColliderTriggerComponent*, ::RPG::GameCore::UnitCustomTriggerConfig*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void AOGACFIOJKK(::System::Boolean a1, ::HCHGAEGOFBO_TriggerDisableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::HCHGAEGOFBO_TriggerDisableReason))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_AOGACFIOJKK_OFFSET))(this, a1, a2);
		}

		::System::Void DPIIHPNEHJA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_DPIIHPNEHJA_OFFSET))(this, a1, a2);
		}

		::System::Void MAHIFKGEHIF(::EDLDHDMLJDH* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EDLDHDMLJDH*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_MAHIFKGEHIF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EAGNPMKPJDK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_EAGNPMKPJDK_OFFSET))(this, a1);
		}

		::System::Void NKEHCELIDHG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_NKEHCELIDHG_OFFSET))(this, a1);
		}

		::System::Void NENGKHLILJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_NENGKHLILJL_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MKMBPBMMDOJ(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_MKMBPBMMDOJ_OFFSET))(this, a1);
		}

		::System::Void GNBFHLKIBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_GNBFHLKIBJI_OFFSET))(this);
		}

		::System::Boolean HCFLEFNGHHC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_HCFLEFNGHHC_OFFSET))(this, a1);
		}

		static ::System::Boolean DAHIKABGJFB(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_DAHIKABGJFB_OFFSET))(a1, a2);
		}

		::System::Void AGIMGKGCLJP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_AGIMGKGCLJP_OFFSET))(this, a1);
		}

		::System::Void LBBLNALEPMN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_LBBLNALEPMN_OFFSET))(this, a1);
		}

		::System::Void FFNIMOEDJKD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_FFNIMOEDJKD_OFFSET))(this, a1);
		}

		::System::Void HAIPMHBGCBI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_HAIPMHBGCBI_OFFSET))(this, a1);
		}

		::System::Int32 JEEMFDKPPKB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_JEEMFDKPPKB_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_MLMGEFIOION_OFFSET))(this);
		}

		::System::Boolean EJGKNIJIMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_EJGKNIJIMLH_OFFSET))(this);
		}

		::System::Boolean PLOGHCKKPII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_PLOGHCKKPII_OFFSET))(this);
		}

		::RPG::GameCore::UnitCustomTriggerConfig* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::UnitCustomTriggerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_FMHKLHAKMKO_OFFSET))(this);
		}

		::EDLDHDMLJDH* GIMOJBAJAJG()
		{
			return ((::EDLDHDMLJDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_GIMOJBAJAJG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GLNIGDFCHOJ()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHGAEGOFBO_GLNIGDFCHOJ_OFFSET))(this);
		}

	};
