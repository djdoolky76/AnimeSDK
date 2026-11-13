#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroPropertyType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROPROPERTY_AFHGEEMLPLC_OFFSET UNITYSDK_OFFSET(0x136913C0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0x136907F0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_AOHGNELBJOB_OFFSET UNITYSDK_OFFSET(0x136912F0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_AOMPMEKCPMA_OFFSET UNITYSDK_OFFSET(0x13690350)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_BHPIOFGPLHK_OFFSET UNITYSDK_OFFSET(0x1368FD10)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_BMECIEMHNJJ_OFFSET UNITYSDK_OFFSET(0x1368FEC0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_CCTOR_OFFSET UNITYSDK_OFFSET(0x136914E0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_CIDBPDMJMMJ_OFFSET UNITYSDK_OFFSET(0x13691340)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_CKCNECALFGG_OFFSET UNITYSDK_OFFSET(0x13690BF0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x13690D20)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_DCEDDCPIHPC_OFFSET UNITYSDK_OFFSET(0x136911A0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_DFFNDPOODCN_OFFSET UNITYSDK_OFFSET(0x13690330)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_DIKDILJHFNC_OFFSET UNITYSDK_OFFSET(0x1368FAD0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x13691380)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_DKMOALEOKEF_OFFSET UNITYSDK_OFFSET(0x13690200)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_DNJIAAJGNMJ_OFFSET UNITYSDK_OFFSET(0x13691000)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x13691160)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x13691490)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_EMHEFAPIGKB_OFFSET UNITYSDK_OFFSET(0x13690000)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_FAHGANGLJJF_OFFSET UNITYSDK_OFFSET(0x1368FDA0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_FCFEABPMAEA_OFFSET UNITYSDK_OFFSET(0x13690940)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_FDFPOIGEHGB_OFFSET UNITYSDK_OFFSET(0x1368FC80)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_FEPKGGKNOIC_OFFSET UNITYSDK_OFFSET(0x13690080)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_FIHDJNEGBLD_OFFSET UNITYSDK_OFFSET(0x13690C60)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_FMAEHIEIMJL_OFFSET UNITYSDK_OFFSET(0x1368FF80)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x13691110)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1368EBA0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_GCICAABIGKP_OFFSET UNITYSDK_OFFSET(0x136910D0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_GHMNEJPPIGM_OFFSET UNITYSDK_OFFSET(0x1368FBF0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_GOHOOFAPHKP_OFFSET UNITYSDK_OFFSET(0x13691400)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_HEMJMGIPCKA_OFFSET UNITYSDK_OFFSET(0x13691440)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_HGIFMCLDAGI_OFFSET UNITYSDK_OFFSET(0x13690430)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_HHPDKECEGKJ_OFFSET UNITYSDK_OFFSET(0x13690320)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_HKCCGOLNMFE_OFFSET UNITYSDK_OFFSET(0x136903A0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_HKNPJJLNKCP_OFFSET UNITYSDK_OFFSET(0x13690E90)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_IBGFNCGLJOF_OFFSET UNITYSDK_OFFSET(0x13690300)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_IJIFPDPKLCJ_OFFSET UNITYSDK_OFFSET(0x1368FF10)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x1368F4E0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_INOPHHLJDOD_OFFSET UNITYSDK_OFFSET(0x13690340)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_JGCEGPJKLJG_OFFSET UNITYSDK_OFFSET(0x1368FA40)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x13690100)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_KADJIDHNIEM_OFFSET UNITYSDK_OFFSET(0x13691270)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_KIJHKHCLJBL_OFFSET UNITYSDK_OFFSET(0x136912B0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x13691060)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_LIHINDPAEPN_OFFSET UNITYSDK_OFFSET(0x13690280)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_LIIPKKCELGH_OFFSET UNITYSDK_OFFSET(0x13691220)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_LPCOOHGAICK_OFFSET UNITYSDK_OFFSET(0x136911E0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_LPGIDDEAELI_OFFSET UNITYSDK_OFFSET(0x1368FB60)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x136906C0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_NMCDCJNEMKG_OFFSET UNITYSDK_OFFSET(0x13690310)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_NPMCMNCIINB_OFFSET UNITYSDK_OFFSET(0x13690360)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_OBDJOMIOOME_OFFSET UNITYSDK_OFFSET(0x1368FE30)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_PCHDHLPOKEO_OFFSET UNITYSDK_OFFSET(0x13690BB0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x13690480)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_PJMFODKLBHB_OFFSET UNITYSDK_OFFSET(0x136903F0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1368DEF0)
#define ENVIROMENTSYSTEM_ENVIROPROPERTY_PPLBMLHLPIC_OFFSET UNITYSDK_OFFSET(0x13690180)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroProperty_TypeDefinitionIndex = 50694;

	class EnviroProperty : public ::System::Object
	{
	public:
		::EnviromentSystem::EnviromentProfile* m_Parent; // 0x10
		::EnviromentSystem::EnviroPropertyType m_Type; // 0x18
		::EnviromentSystem::EnviroPropertyType m_ExpType; // 0x1C
		::System::String* m_PropertyName; // 0x20
		::System::Boolean m_IsSaved; // 0x28
		::System::Byte _padding0[0x1];
		::System::UInt16 m_Data_ShaderID; // 0x2A
		::System::UInt16 m_Data_ShaderID_Override; // 0x2C
		::System::UInt16 m_Data_PropertySlotIndex; // 0x2E
		::System::UInt16 m_Data_ShaderID_Target; // 0x30
		::System::UInt16 m_Data_ShaderID_Target_Override; // 0x32
		::System::Byte _padding1[0x4];
		::EnviromentSystem::EnviroProperty* m_TransistionTarget; // 0x38
		::RPG::GameCore::EnviromentControlPriority priority; // 0x40
		::System::Byte m_FlagBit; // 0x44
		::System::Boolean m_IsAssetProperty; // 0x45
		static ::System::Int32* StaticGet_IsTransitionTargetID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroProperty")->GetStaticField(0x9610);
		}

		// static const ::System::Object BitIsEditorNeesUpdate; // 0x0
		// static const ::System::Object BitIsNeverSaved; // 0x0
		// static const ::System::Object BitIsPatch; // 0x0
		// static const ::System::Object BitIsActive; // 0x0
		// static const ::System::Object BitIsGUIEnable; // 0x0
		// static const ::System::Object BitIsSkipInit; // 0x0
		// static const ::System::Object BitIsAsyncLoadFinish; // 0x0
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::EnviromentSystem::EnviroPropertyType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::EnviromentSystem::EnviroPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_CCTOR_OFFSET))();
		}

		::System::Void JGCEGPJKLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_JGCEGPJKLJG_OFFSET))(this);
		}

		::System::Boolean BMECIEMHNJJ(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_BMECIEMHNJJ_OFFSET))(this, a1);
		}

		::System::Void IJIFPDPKLCJ(::System::Boolean a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Byte))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_IJIFPDPKLCJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean FMAEHIEIMJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_FMAEHIEIMJL_OFFSET))(this);
		}

		::System::Void DIKDILJHFNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_DIKDILJHFNC_OFFSET))(this, a1);
		}

		::System::Boolean EMHEFAPIGKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_EMHEFAPIGKB_OFFSET))(this);
		}

		::System::Void LPGIDDEAELI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_LPGIDDEAELI_OFFSET))(this, a1);
		}

		::System::Boolean FEPKGGKNOIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_FEPKGGKNOIC_OFFSET))(this);
		}

		::System::Void GHMNEJPPIGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_GHMNEJPPIGM_OFFSET))(this, a1);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Void FDFPOIGEHGB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_FDFPOIGEHGB_OFFSET))(this, a1);
		}

		::System::Boolean PPLBMLHLPIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_PPLBMLHLPIC_OFFSET))(this);
		}

		::System::Void BHPIOFGPLHK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_BHPIOFGPLHK_OFFSET))(this, a1);
		}

		::System::Boolean DKMOALEOKEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_DKMOALEOKEF_OFFSET))(this);
		}

		::System::Void FAHGANGLJJF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_FAHGANGLJJF_OFFSET))(this, a1);
		}

		::System::Boolean LIHINDPAEPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_LIHINDPAEPN_OFFSET))(this);
		}

		::System::Void OBDJOMIOOME(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_OBDJOMIOOME_OFFSET))(this, a1);
		}

		::System::Int32 IBGFNCGLJOF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_IBGFNCGLJOF_OFFSET))(this);
		}

		::System::Void NMCDCJNEMKG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_NMCDCJNEMKG_OFFSET))(this, a1);
		}

		::System::Int32 HHPDKECEGKJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_HHPDKECEGKJ_OFFSET))(this);
		}

		::System::Void DFFNDPOODCN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_DFFNDPOODCN_OFFSET))(this, a1);
		}

		::System::Int32 INOPHHLJDOD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_INOPHHLJDOD_OFFSET))(this);
		}

		::System::Void AOMPMEKCPMA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_AOMPMEKCPMA_OFFSET))(this, a1);
		}

		::System::Int32 NPMCMNCIINB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_NPMCMNCIINB_OFFSET))(this);
		}

		::System::Void HKCCGOLNMFE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_HKCCGOLNMFE_OFFSET))(this, a1);
		}

		::System::Int32 PJMFODKLBHB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_PJMFODKLBHB_OFFSET))(this);
		}

		::System::Void HGIFMCLDAGI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_HGIFMCLDAGI_OFFSET))(this, a1);
		}

		::System::Void PCNAKDOLCCD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_PCNAKDOLCCD_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_AGHABIKPPNO_OFFSET))(this, a1);
		}

		::System::Void FCFEABPMAEA(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_FCFEABPMAEA_OFFSET))(this, a1);
		}

		::System::Void PCHDHLPOKEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_PCHDHLPOKEO_OFFSET))(this);
		}

		::System::Void CKCNECALFGG(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_CKCNECALFGG_OFFSET))(this, a1);
		}

		::System::Void FIHDJNEGBLD(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_FIHDJNEGBLD_OFFSET))(this, a1);
		}

		::System::Void HKNPJJLNKCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_HKNPJJLNKCP_OFFSET))(this);
		}

		::System::Void DNJIAAJGNMJ(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_DNJIAAJGNMJ_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void GCICAABIGKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_GCICAABIGKP_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Boolean FMDIMGPGIHD(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

		::System::Void DCEDDCPIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_DCEDDCPIHPC_OFFSET))(this);
		}

		::System::Void LPCOOHGAICK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_LPCOOHGAICK_OFFSET))(this);
		}

		::System::Int32 LIIPKKCELGH(::System::Int32 a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_LIIPKKCELGH_OFFSET))(this, a1, a2);
		}

		::System::Void KADJIDHNIEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_KADJIDHNIEM_OFFSET))(this);
		}

		::System::Void KIJHKHCLJBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_KIJHKHCLJBL_OFFSET))(this);
		}

		::System::Void AOHGNELBJOB(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_AOHGNELBJOB_OFFSET))(this, a1, a2);
		}

		::System::Void CIDBPDMJMMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_CIDBPDMJMMJ_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void AFHGEEMLPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_AFHGEEMLPLC_OFFSET))(this);
		}

		::System::Void GOHOOFAPHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_GOHOOFAPHKP_OFFSET))(this);
		}

		::System::Void HEMJMGIPCKA(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_HEMJMGIPCKA_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

	};
}
