#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace ABC::CustomRenderPipeline { class ChessGameOverrideSettings; }
namespace ABC::CustomRenderPipeline { class ContactShadowsSettings; }
namespace ABC::CustomRenderPipeline { class CullingSettings; }
namespace ABC::CustomRenderPipeline { class DeformationSetting; }
namespace ABC::CustomRenderPipeline { class GISettings; }
namespace ABC::CustomRenderPipeline { class GTAOSetting; }
namespace ABC::CustomRenderPipeline { class GrassSettings; }
namespace ABC::CustomRenderPipeline { class HizSettings; }
namespace ABC::CustomRenderPipeline { class LightClusterSetting; }
namespace ABC::CustomRenderPipeline { class LocalLightSettings; }
namespace ABC::CustomRenderPipeline { class MiscGraphicsSettings; }
namespace ABC::CustomRenderPipeline { class OCSettings; }
namespace ABC::CustomRenderPipeline { class PCSSSettings; }
namespace ABC::CustomRenderPipeline { class PerObjectShadowSettings; }
namespace ABC::CustomRenderPipeline { class PostProcessSettings; }
namespace ABC::CustomRenderPipeline { class SSGISettings; }
namespace ABC::CustomRenderPipeline { class SSPRSettings; }
namespace ABC::CustomRenderPipeline { class SSRSettings; }
namespace ABC::CustomRenderPipeline { class ShadowSettings; }
namespace ABC::CustomRenderPipeline { class SkyAtmosphereSetting; }
namespace ABC::CustomRenderPipeline { class SuperResolutionSettings; }
namespace ABC::CustomRenderPipeline { class TerrainSetting; }
namespace ABC::CustomRenderPipeline { class TransparentSettings; }
namespace ABC::CustomRenderPipeline { class VolumetricFogSetting; }
namespace ABC::CustomRenderPipeline { class WaterSSRSettings; }
namespace ABC::CustomRenderPipeline { class WindSettings; }
namespace B88870E9FB4B8C1A { class E6E535EDFA14822E; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A127521A2156F2B1_OFFSET UNITYSDK_OFFSET(0x17F7030)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A24B07C56D47E153_OFFSET UNITYSDK_OFFSET(0x17F7040)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x282D320)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A562F20669152214_OFFSET UNITYSDK_OFFSET(0x18CFCA0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A81D98907EA1C58A_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A90AAE8455F04A27_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_AA3AAE9E9A8766F1_OFFSET UNITYSDK_OFFSET(0x169C070)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_AAE76637A89F920F_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B2361B27B9A5B1F0_OFFSET UNITYSDK_OFFSET(0x1D19FB0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B300BD0BF9380C45_OFFSET UNITYSDK_OFFSET(0x168FC80)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B3B1CE99FF11CA4C_OFFSET UNITYSDK_OFFSET(0x24136E0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B4DC70103C251522_OFFSET UNITYSDK_OFFSET(0x165A390)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B8DD6A37B591B930_OFFSET UNITYSDK_OFFSET(0x180ED20)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_BA46FE6D19ACB8E6_OFFSET UNITYSDK_OFFSET(0x18347C0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_BB45C963A682BCC2_OFFSET UNITYSDK_OFFSET(0x282D230)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x282D390)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_BF3C9736E6296DAD_OFFSET UNITYSDK_OFFSET(0x165A3A0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_E29223288869E37B_OFFSET UNITYSDK_OFFSET(0x18C00E0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_E3EEF421081493F2_OFFSET UNITYSDK_OFFSET(0x16DFCA0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_E4CB90EE99B1BFEB_OFFSET UNITYSDK_OFFSET(0x17919E0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_EA426CAEE74BB2E0_OFFSET UNITYSDK_OFFSET(0x17F0F50)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_EB0C7FEAB75798ED_OFFSET UNITYSDK_OFFSET(0x19392E0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_EC40EA2F287BB2FE_OFFSET UNITYSDK_OFFSET(0x165A410)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_F0C395E9A5097957_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_F4732280AE045212_OFFSET UNITYSDK_OFFSET(0x180F000)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_F5C5654BF479F18B_OFFSET UNITYSDK_OFFSET(0x1B96BE0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_F77B071AA8A0019D_OFFSET UNITYSDK_OFFSET(0x1921850)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_FB4ED2DCAC873C84_OFFSET UNITYSDK_OFFSET(0x1BC3260)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_FC74D466FABC4C62_OFFSET UNITYSDK_OFFSET(0x17F7020)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_FDFAF086731AF541_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_FF5C6487795E28D8_OFFSET UNITYSDK_OFFSET(0x1685600)
#define ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x282D760)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int ABCGraphicsSettingsData_TypeDefinitionIndex = 16927;

	class ABCGraphicsSettingsData : public ::UnityEngine::ScriptableObject
	{
	public:
		::ABC::CustomRenderPipeline::ShadowSettings* m_ShadowSettings; // 0x18
		::ABC::CustomRenderPipeline::SSRSettings* m_SSRSettings; // 0x20
		::ABC::CustomRenderPipeline::WaterSSRSettings* m_WaterSSRSettings; // 0x28
		::ABC::CustomRenderPipeline::SSGISettings* m_SSGISettings; // 0x30
		::ABC::CustomRenderPipeline::ContactShadowsSettings* m_ContactShadowSettings; // 0x38
		::ABC::CustomRenderPipeline::SSPRSettings* m_SSPRSettings; // 0x40
		::ABC::CustomRenderPipeline::PCSSSettings* m_PCSSSettings; // 0x48
		::ABC::CustomRenderPipeline::HizSettings* m_HizSettings; // 0x50
		::ABC::CustomRenderPipeline::GISettings* m_GISettings; // 0x58
		::ABC::CustomRenderPipeline::GrassSettings* m_GrassSettings; // 0x60
		::ABC::CustomRenderPipeline::WindSettings* m_WindSettings; // 0x68
		::ABC::CustomRenderPipeline::VolumetricFogSetting* m_VolumetricFogSetting; // 0x70
		::ABC::CustomRenderPipeline::LightClusterSetting* m_LightClusterSetting; // 0x78
		::ABC::CustomRenderPipeline::OCSettings* m_OCSettings; // 0x80
		::ABC::CustomRenderPipeline::PostProcessSettings* m_PPSettings; // 0x88
		::ABC::CustomRenderPipeline::SuperResolutionSettings* m_SuperResolutionSettings; // 0x90
		::ABC::CustomRenderPipeline::PerObjectShadowSettings* m_PerObjectShadowSettings; // 0x98
		::ABC::CustomRenderPipeline::TerrainSetting* m_TerrainSettings; // 0xA0
		::ABC::CustomRenderPipeline::DeformationSetting* m_DeformationSetting; // 0xA8
		::ABC::CustomRenderPipeline::ChessGameOverrideSettings* m_ChessGameOverrideSettings; // 0xB0
		::ABC::CustomRenderPipeline::SkyAtmosphereSetting* m_SkyAtmosphereSetting; // 0xB8
		::ABC::CustomRenderPipeline::CullingSettings* m_CullingSettings; // 0xC0
		::ABC::CustomRenderPipeline::MiscGraphicsSettings* m_MiscGraphicsSettings; // 0xC8
		::ABC::CustomRenderPipeline::LocalLightSettings* m_LocalLightSettings; // 0xD0
		::ABC::CustomRenderPipeline::TransparentSettings* m_TransparentSettings; // 0xD8
		::ABC::CustomRenderPipeline::GTAOSetting* m_GTAOSetting; // 0xE0
		::System::Collections::Generic::List_1<::B88870E9FB4B8C1A::E6E535EDFA14822E*>* E4F94F728C28FB13; // 0xE8

		::ABC::CustomRenderPipeline::ShadowSettings* A81D98907EA1C58A()
		{
			return ((::ABC::CustomRenderPipeline::ShadowSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A81D98907EA1C58A_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::WindSettings* B300BD0BF9380C45()
		{
			return ((::ABC::CustomRenderPipeline::WindSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B300BD0BF9380C45_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::CullingSettings* B8DD6A37B591B930()
		{
			return ((::ABC::CustomRenderPipeline::CullingSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B8DD6A37B591B930_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::ContactShadowsSettings* EC40EA2F287BB2FE()
		{
			return ((::ABC::CustomRenderPipeline::ContactShadowsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_EC40EA2F287BB2FE_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::MiscGraphicsSettings* EB0C7FEAB75798ED()
		{
			return ((::ABC::CustomRenderPipeline::MiscGraphicsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_EB0C7FEAB75798ED_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::PostProcessSettings* BA46FE6D19ACB8E6()
		{
			return ((::ABC::CustomRenderPipeline::PostProcessSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_BA46FE6D19ACB8E6_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::SSPRSettings* FDFAF086731AF541()
		{
			return ((::ABC::CustomRenderPipeline::SSPRSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_FDFAF086731AF541_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::GISettings* A562F20669152214()
		{
			return ((::ABC::CustomRenderPipeline::GISettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A562F20669152214_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::WaterSSRSettings* AA3AAE9E9A8766F1()
		{
			return ((::ABC::CustomRenderPipeline::WaterSSRSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_AA3AAE9E9A8766F1_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA__CTOR_OFFSET))(this);
		}

		::System::Void BB45C963A682BCC2(::ABC::CustomRenderPipeline::ABCGraphicsSettingsData* B425DE47290929B1)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::ABCGraphicsSettingsData*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_BB45C963A682BCC2_OFFSET))(this, B425DE47290929B1);
		}

		::ABC::CustomRenderPipeline::HizSettings* FF5C6487795E28D8()
		{
			return ((::ABC::CustomRenderPipeline::HizSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_FF5C6487795E28D8_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::SuperResolutionSettings* E4CB90EE99B1BFEB()
		{
			return ((::ABC::CustomRenderPipeline::SuperResolutionSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_E4CB90EE99B1BFEB_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::SkyAtmosphereSetting* E29223288869E37B()
		{
			return ((::ABC::CustomRenderPipeline::SkyAtmosphereSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_E29223288869E37B_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::DeformationSetting* FC74D466FABC4C62()
		{
			return ((::ABC::CustomRenderPipeline::DeformationSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_FC74D466FABC4C62_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::PerObjectShadowSettings* F77B071AA8A0019D()
		{
			return ((::ABC::CustomRenderPipeline::PerObjectShadowSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_F77B071AA8A0019D_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::TerrainSetting* A24B07C56D47E153()
		{
			return ((::ABC::CustomRenderPipeline::TerrainSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A24B07C56D47E153_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::TransparentSettings* B2361B27B9A5B1F0()
		{
			return ((::ABC::CustomRenderPipeline::TransparentSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B2361B27B9A5B1F0_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::LightClusterSetting* B4DC70103C251522()
		{
			return ((::ABC::CustomRenderPipeline::LightClusterSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B4DC70103C251522_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::OCSettings* F5C5654BF479F18B()
		{
			return ((::ABC::CustomRenderPipeline::OCSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_F5C5654BF479F18B_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::SSGISettings* AAE76637A89F920F()
		{
			return ((::ABC::CustomRenderPipeline::SSGISettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_AAE76637A89F920F_OFFSET))(this);
		}

		::System::Void B3B1CE99FF11CA4C(::ABC::CustomRenderPipeline::SkyAtmosphereSetting* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::SkyAtmosphereSetting*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_B3B1CE99FF11CA4C_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::SSRSettings* F0C395E9A5097957()
		{
			return ((::ABC::CustomRenderPipeline::SSRSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_F0C395E9A5097957_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_BF13C91AD80643D2_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::GrassSettings* E3EEF421081493F2()
		{
			return ((::ABC::CustomRenderPipeline::GrassSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_E3EEF421081493F2_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::ChessGameOverrideSettings* A127521A2156F2B1()
		{
			return ((::ABC::CustomRenderPipeline::ChessGameOverrideSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A127521A2156F2B1_OFFSET))(this);
		}

		::System::Void F4732280AE045212(::ABC::CustomRenderPipeline::ChessGameOverrideSettings* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::ChessGameOverrideSettings*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_F4732280AE045212_OFFSET))(this, E937D4885DAA1AE8);
		}

		::ABC::CustomRenderPipeline::PCSSSettings* A90AAE8455F04A27()
		{
			return ((::ABC::CustomRenderPipeline::PCSSSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_A90AAE8455F04A27_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::VolumetricFogSetting* BF3C9736E6296DAD()
		{
			return ((::ABC::CustomRenderPipeline::VolumetricFogSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_BF3C9736E6296DAD_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::LocalLightSettings* FB4ED2DCAC873C84()
		{
			return ((::ABC::CustomRenderPipeline::LocalLightSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_FB4ED2DCAC873C84_OFFSET))(this);
		}

		::ABC::CustomRenderPipeline::GTAOSetting* EA426CAEE74BB2E0()
		{
			return ((::ABC::CustomRenderPipeline::GTAOSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_ABCGRAPHICSSETTINGSDATA_EA426CAEE74BB2E0_OFFSET))(this);
		}
	};
}
