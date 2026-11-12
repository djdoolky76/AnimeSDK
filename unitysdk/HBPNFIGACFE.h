#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class RendererMaterialCache; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define HBPNFIGACFE_CJOJOFNLMKJ_OFFSET UNITYSDK_OFFSET(0x16B57080)
#define HBPNFIGACFE_CTOR_OFFSET UNITYSDK_OFFSET(0x16B565E0)
#define HBPNFIGACFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B56640)
#define HBPNFIGACFE_HIBCDHEOKEM_OFFSET UNITYSDK_OFFSET(0x16B56E00)
#define HBPNFIGACFE_IIFNLMFKNAD_OFFSET UNITYSDK_OFFSET(0x16B56A60)
#define HBPNFIGACFE_JCFHPINEJAB_OFFSET UNITYSDK_OFFSET(0x16B56FD0)
#define HBPNFIGACFE_JNNOLPMKBDF_OFFSET UNITYSDK_OFFSET(0x16B56CC0)
#define HBPNFIGACFE_KJFOLKPAOHG_OFFSET UNITYSDK_OFFSET(0x16B57100)
#define HBPNFIGACFE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16B569F0)
#define HBPNFIGACFE_LBCGMFHAPJO_OFFSET UNITYSDK_OFFSET(0x16B56D60)
#define HBPNFIGACFE_LEKNOLNMBHJ_OFFSET UNITYSDK_OFFSET(0x16B56B60)
#define HBPNFIGACFE_LGANALGCCAO_OFFSET UNITYSDK_OFFSET(0x16B568A0)
#define HBPNFIGACFE_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x16B565F0)
#define HBPNFIGACFE_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x16B56700)
#define HBPNFIGACFE_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x16B566B0)
#define HBPNFIGACFE_OOIKNGPCKEA_OFFSET UNITYSDK_OFFSET(0x16B56C20)
#define HBPNFIGACFE_PDPAJEPEMIM_OFFSET UNITYSDK_OFFSET(0x16B56E90)

inline static constexpr unsigned int HBPNFIGACFE_TypeDefinitionIndex = 58486;

	class HBPNFIGACFE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::RendererMaterialCache* EAIBBECPIFJ; // 0x18
		::System::Single HDKKECHDBCN; // 0x20
		::System::Single LKBKDNAMNEG; // 0x24
		::System::Boolean HKBAPECGDMA; // 0x28
		::System::Boolean DPIKBLEOFGM; // 0x29
		::System::Boolean OEIBNCMNNJP; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Single CJDGDMKGFPN; // 0x2C
		::System::Int32 GMHMDCDALIP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNFIGACFE_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBPNFIGACFE_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNFIGACFE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNFIGACFE_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNFIGACFE_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBPNFIGACFE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void LEKNOLNMBHJ(::System::Single a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HBPNFIGACFE_LEKNOLNMBHJ_OFFSET))(this, a1, a2);
		}

		::System::Void LBCGMFHAPJO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HBPNFIGACFE_LBCGMFHAPJO_OFFSET))(this, a1, a2);
		}

		::System::Void IIFNLMFKNAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBPNFIGACFE_IIFNLMFKNAD_OFFSET))(this, a1);
		}

		::System::Int32 LGANALGCCAO(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + HBPNFIGACFE_LGANALGCCAO_OFFSET))(this, a1);
		}

		::System::Boolean JCFHPINEJAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNFIGACFE_JCFHPINEJAB_OFFSET))(this);
		}

		::System::Void OOIKNGPCKEA(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HBPNFIGACFE_OOIKNGPCKEA_OFFSET))(this, a1, a2);
		}

		::System::Single CJOJOFNLMKJ(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBPNFIGACFE_CJOJOFNLMKJ_OFFSET))(this, a1);
		}

		::System::Void JNNOLPMKBDF(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HBPNFIGACFE_JNNOLPMKBDF_OFFSET))(this, a1, a2);
		}

		::System::Void KJFOLKPAOHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBPNFIGACFE_KJFOLKPAOHG_OFFSET))(this, a1);
		}

		::System::Void PDPAJEPEMIM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HBPNFIGACFE_PDPAJEPEMIM_OFFSET))(this, a1, a2);
		}

		::System::Void HIBCDHEOKEM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBPNFIGACFE_HIBCDHEOKEM_OFFSET))(this, a1);
		}

	};
