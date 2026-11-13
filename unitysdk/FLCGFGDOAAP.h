#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class AudienceGroupInstance; }
namespace RPG::GameCore { class LevelAudienceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FLCGFGDOAAP_BIAGMOMFPLL_OFFSET UNITYSDK_OFFSET(0x18959410)
#define FLCGFGDOAAP_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1895A2F0)
#define FLCGFGDOAAP_CHEIIOFKPKL_OFFSET UNITYSDK_OFFSET(0x18959470)
#define FLCGFGDOAAP_CTOR_OFFSET UNITYSDK_OFFSET(0x18958C40)
#define FLCGFGDOAAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189595F0)
#define FLCGFGDOAAP_EHKLKGOONLG_OFFSET UNITYSDK_OFFSET(0x1895A180)
#define FLCGFGDOAAP_EMMGHDLIPOH_OFFSET UNITYSDK_OFFSET(0x1895A060)
#define FLCGFGDOAAP_GET_ID_OFFSET UNITYSDK_OFFSET(0x1895A450)
#define FLCGFGDOAAP_GET_LOADPERCENT_OFFSET UNITYSDK_OFFSET(0x1895A460)
#define FLCGFGDOAAP_GNFMDBLFCJI_OFFSET UNITYSDK_OFFSET(0x18959A30)
#define FLCGFGDOAAP_HBIBAGDNODD_1_OFFSET UNITYSDK_OFFSET(0x18959AE0)
#define FLCGFGDOAAP_HBIBAGDNODD_OFFSET UNITYSDK_OFFSET(0x189598E0)
#define FLCGFGDOAAP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x18959760)
#define FLCGFGDOAAP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18958CA0)
#define FLCGFGDOAAP_NBDCEHAOGLM_1_OFFSET UNITYSDK_OFFSET(0x18959EA0)
#define FLCGFGDOAAP_NBDCEHAOGLM_2_OFFSET UNITYSDK_OFFSET(0x18959E20)
#define FLCGFGDOAAP_NBDCEHAOGLM_OFFSET UNITYSDK_OFFSET(0x18959C60)
#define FLCGFGDOAAP_SET_LOADPERCENT_OFFSET UNITYSDK_OFFSET(0x1895A470)

inline static constexpr unsigned int FLCGFGDOAAP_TypeDefinitionIndex = 71088;

	class FLCGFGDOAAP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AudienceGroupInstance*>* CCECMIKFAME; // 0x10
		::System::Boolean MHEAIOMEGCA; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single _LoadPercent_k__BackingField; // 0x1C
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Transform* a1, ::System::Collections::Generic::IList_1<::RPG::GameCore::LevelAudienceInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::IList_1<::RPG::GameCore::LevelAudienceInfo*>*))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HBIBAGDNODD(::System::String* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_HBIBAGDNODD_OFFSET))(this, a1, a2);
		}

		::System::Void HBIBAGDNODD_1(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_HBIBAGDNODD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBDCEHAOGLM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_NBDCEHAOGLM_OFFSET))(this, a1);
		}

		::System::Void NBDCEHAOGLM_1(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_NBDCEHAOGLM_1_OFFSET))(this, a1, a2);
		}

		::System::Void EMMGHDLIPOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_EMMGHDLIPOH_OFFSET))(this);
		}

		::System::Void CHEIIOFKPKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_CHEIIOFKPKL_OFFSET))(this);
		}

		::System::Void EHKLKGOONLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_EHKLKGOONLG_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void BIAGMOMFPLL(::RPG::Client::AudienceGroupInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceGroupInstance*))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_BIAGMOMFPLL_OFFSET))(this, a1);
		}

		::System::Void GNFMDBLFCJI(::RPG::Client::AudienceGroupInstance* a1, ::System::String* a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceGroupInstance*, ::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_GNFMDBLFCJI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBDCEHAOGLM_2(::RPG::Client::AudienceGroupInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceGroupInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_NBDCEHAOGLM_2_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_GET_ID_OFFSET))(this);
		}

		::System::Single get_LoadPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_GET_LOADPERCENT_OFFSET))(this);
		}

		::System::Void set_LoadPercent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLCGFGDOAAP_SET_LOADPERCENT_OFFSET))(this, a1);
		}

	};
