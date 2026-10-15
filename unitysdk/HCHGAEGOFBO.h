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

#define HCHGAEGOFBO_AGIMGKGCLJP_OFFSET UNITYSDK_OFFSET(0x15C10C30)
#define HCHGAEGOFBO_AOGACFIOJKK_OFFSET UNITYSDK_OFFSET(0x15C0F010)
#define HCHGAEGOFBO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C120B0)
#define HCHGAEGOFBO_DAHIKABGJFB_OFFSET UNITYSDK_OFFSET(0x15C11FA0)
#define HCHGAEGOFBO_DPIIHPNEHJA_OFFSET UNITYSDK_OFFSET(0x15C0F660)
#define HCHGAEGOFBO_EAGNPMKPJDK_OFFSET UNITYSDK_OFFSET(0x15C107E0)
#define HCHGAEGOFBO_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0x15C0F650)
#define HCHGAEGOFBO_FFNIMOEDJKD_OFFSET UNITYSDK_OFFSET(0x15C11D00)
#define HCHGAEGOFBO_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x15C12080)
#define HCHGAEGOFBO_GIMOJBAJAJG_OFFSET UNITYSDK_OFFSET(0x15C12090)
#define HCHGAEGOFBO_GLNIGDFCHOJ_OFFSET UNITYSDK_OFFSET(0x15C120A0)
#define HCHGAEGOFBO_GNBFHLKIBJI_OFFSET UNITYSDK_OFFSET(0x15C0F560)
#define HCHGAEGOFBO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15C0F280)
#define HCHGAEGOFBO_HAIPMHBGCBI_OFFSET UNITYSDK_OFFSET(0x15C0EF70)
#define HCHGAEGOFBO_HCFLEFNGHHC_OFFSET UNITYSDK_OFFSET(0x15C0FA70)
#define HCHGAEGOFBO_JEEMFDKPPKB_OFFSET UNITYSDK_OFFSET(0x15C0EE80)
#define HCHGAEGOFBO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C11330)
#define HCHGAEGOFBO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C0E130)
#define HCHGAEGOFBO_LBBLNALEPMN_OFFSET UNITYSDK_OFFSET(0x15C10990)
#define HCHGAEGOFBO_MAHIFKGEHIF_OFFSET UNITYSDK_OFFSET(0x15C0F810)
#define HCHGAEGOFBO_MKMBPBMMDOJ_OFFSET UNITYSDK_OFFSET(0x15C113C0)
#define HCHGAEGOFBO_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15C12060)
#define HCHGAEGOFBO_NENGKHLILJL_OFFSET UNITYSDK_OFFSET(0x15C10ED0)
#define HCHGAEGOFBO_NKEHCELIDHG_OFFSET UNITYSDK_OFFSET(0x15C0F730)
#define HCHGAEGOFBO_PLOGHCKKPII_OFFSET UNITYSDK_OFFSET(0x15C12070)

inline static constexpr unsigned int HCHGAEGOFBO_TypeDefinitionIndex = 57460;

	class HCHGAEGOFBO : public ::System::Object
	{
	public:
		::GELIALJDFBL* DJHOAONPLLH; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NBCPCIFHEHG; // 0x18
		::RPG::GameCore::SummonUnitGlobalConfig* FAFFFDIKBBI; // 0x20
		::RPG::GameCore::UnitCustomTriggerConfig* IGHAHBNLIJA; // 0x28
		::EDLDHDMLJDH* GALAHGAJODG; // 0x30
		::KFELGAIGHAP* GMEDBNAABDC; // 0x38
		::LDJLOIJHLOC* LFFDPMJPHEG; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AKHPJHLBMCM; // 0x48
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
		::KFELGAIGHAP* ENAIBJGFMFI; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NCIHENHPKCH; // 0x60
		::RPG::GameCore::ColliderTriggerComponent* EJEEIAAFHNN; // 0x68
		::System::String* GIDAEFPOGHI; // 0x70
		::System::Single MDNPNOEMHIC; // 0x78
		::System::Single FJPOKCBJDAL; // 0x7C
		::HCHGAEGOFBO_TriggerDisableReason KPIJLMIIJKF; // 0x80
		::System::Boolean OLABICPNDFJ; // 0x84
		::System::Boolean BDKBIJFDANJ; // 0x85
		::System::Byte _padding0[0x2];
		::System::Single COAELIHGAHH; // 0x88
		::System::Boolean HKKLHMHNNHG; // 0x8C
		::System::Boolean AGMMNOOOFAD; // 0x8D
		::System::Boolean OKCCLDANMCE; // 0x8E
		::System::Boolean HOBLOANFANB; // 0x8F
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
