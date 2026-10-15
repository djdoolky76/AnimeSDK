#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class RendererMaterialCache; }

#define DEGDOEMPKCM_BPDFPHNAJOE_OFFSET UNITYSDK_OFFSET(0xE50A910)
#define DEGDOEMPKCM_CJOJOFNLMKJ_OFFSET UNITYSDK_OFFSET(0xE50B140)
#define DEGDOEMPKCM_CTOR_OFFSET UNITYSDK_OFFSET(0xE509F80)
#define DEGDOEMPKCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE509FE0)
#define DEGDOEMPKCM_DLFFCMJKEGM_OFFSET UNITYSDK_OFFSET(0xE50AB80)
#define DEGDOEMPKCM_EBGOEKHHJFD_OFFSET UNITYSDK_OFFSET(0xE50AA80)
#define DEGDOEMPKCM_EINENLPEMBK_OFFSET UNITYSDK_OFFSET(0xE50A670)
#define DEGDOEMPKCM_IAPLJJGEGDC_OFFSET UNITYSDK_OFFSET(0xE50AA00)
#define DEGDOEMPKCM_IILFIAPOKLK_OFFSET UNITYSDK_OFFSET(0xE50A2A0)
#define DEGDOEMPKCM_JBOIEAKILKO_OFFSET UNITYSDK_OFFSET(0xE50AEE0)
#define DEGDOEMPKCM_JCFHPINEJAB_OFFSET UNITYSDK_OFFSET(0xE50B090)
#define DEGDOEMPKCM_JFBJDGPAMHH_OFFSET UNITYSDK_OFFSET(0xE50AD30)
#define DEGDOEMPKCM_JNNOLPMKBDF_OFFSET UNITYSDK_OFFSET(0xE50A7D0)
#define DEGDOEMPKCM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE50A230)
#define DEGDOEMPKCM_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xE509F90)
#define DEGDOEMPKCM_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xE50A0A0)
#define DEGDOEMPKCM_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xE50A050)
#define DEGDOEMPKCM_OOIKNGPCKEA_OFFSET UNITYSDK_OFFSET(0xE50A870)
#define DEGDOEMPKCM_PJKEJOPFAHD_OFFSET UNITYSDK_OFFSET(0xE50AB00)

inline static constexpr unsigned int DEGDOEMPKCM_TypeDefinitionIndex = 57260;

	class DEGDOEMPKCM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::RendererMaterialCache* EAIBBECPIFJ; // 0x18
		::System::Single IFJMLKGEBKD; // 0x20
		::System::Single LKBKDNAMNEG; // 0x24
		::System::Single FEKKGMEBEBG; // 0x28
		::System::Boolean DFGBIEALLDD; // 0x2C
		::System::Boolean OEIBNCMNNJP; // 0x2D
		::System::Boolean DPIKBLEOFGM; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Single FIJCHDIEKGF; // 0x30
		::System::Single HDKKECHDBCN; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EINENLPEMBK(::UnityEngine::Color a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Color a4, ::UnityEngine::Color a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_EINENLPEMBK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BPDFPHNAJOE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_BPDFPHNAJOE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IILFIAPOKLK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_IILFIAPOKLK_OFFSET))(this, a1);
		}

		::System::Boolean JCFHPINEJAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_JCFHPINEJAB_OFFSET))(this);
		}

		::System::Void OOIKNGPCKEA(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_OOIKNGPCKEA_OFFSET))(this, a1, a2);
		}

		::System::Single CJOJOFNLMKJ(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_CJOJOFNLMKJ_OFFSET))(this, a1);
		}

		::System::Void JNNOLPMKBDF(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_JNNOLPMKBDF_OFFSET))(this, a1, a2);
		}

		::System::Void DLFFCMJKEGM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_DLFFCMJKEGM_OFFSET))(this, a1, a2);
		}

		::System::Void IAPLJJGEGDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_IAPLJJGEGDC_OFFSET))(this, a1);
		}

		::System::Void JFBJDGPAMHH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_JFBJDGPAMHH_OFFSET))(this, a1, a2);
		}

		::System::Void EBGOEKHHJFD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_EBGOEKHHJFD_OFFSET))(this, a1);
		}

		::System::Void JBOIEAKILKO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_JBOIEAKILKO_OFFSET))(this, a1, a2);
		}

		::System::Void PJKEJOPFAHD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEGDOEMPKCM_PJKEJOPFAHD_OFFSET))(this, a1);
		}

	};
