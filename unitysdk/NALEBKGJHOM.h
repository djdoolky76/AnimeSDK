#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
class COGBNIGPJPO;
class KLEFGGIHGMI;
class NALEBKGJHOM;
class SceneLightVolume;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define NALEBKGJHOM_BAODPCDPFML_OFFSET UNITYSDK_OFFSET(0xBAA5C60)
#define NALEBKGJHOM_BNILHCDGHJB_OFFSET UNITYSDK_OFFSET(0xBAA5930)
#define NALEBKGJHOM_CCCMOCIELFO_OFFSET UNITYSDK_OFFSET(0xBAA6120)
#define NALEBKGJHOM_CCTOR_OFFSET UNITYSDK_OFFSET(0xBAA64C0)
#define NALEBKGJHOM_CDDMBLPLDIA_OFFSET UNITYSDK_OFFSET(0xBAA4CF0)
#define NALEBKGJHOM_CIHLFNJCABF_OFFSET UNITYSDK_OFFSET(0xBAA4A60)
#define NALEBKGJHOM_CJPLNHNIHFD_OFFSET UNITYSDK_OFFSET(0xBAA5D10)
#define NALEBKGJHOM_CLMBJABNGFP_OFFSET UNITYSDK_OFFSET(0xBAA5FE0)
#define NALEBKGJHOM_CMFABFAOFAH_OFFSET UNITYSDK_OFFSET(0xBAA5770)
#define NALEBKGJHOM_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA47E0)
#define NALEBKGJHOM_DFHAIIOJEBJ_OFFSET UNITYSDK_OFFSET(0xBAA49E0)
#define NALEBKGJHOM_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xBAA4420)
#define NALEBKGJHOM_EDFJNHAMKBL_OFFSET UNITYSDK_OFFSET(0xBAA6080)
#define NALEBKGJHOM_EOPDCMGLONM_OFFSET UNITYSDK_OFFSET(0xBAA50F0)
#define NALEBKGJHOM_EPNFLFKBJDM_OFFSET UNITYSDK_OFFSET(0xBAA6200)
#define NALEBKGJHOM_EQUALS_OFFSET UNITYSDK_OFFSET(0xBAA4570)
#define NALEBKGJHOM_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xBAA4490)
#define NALEBKGJHOM_FGFDGBDLOLO_OFFSET UNITYSDK_OFFSET(0xBAA5620)
#define NALEBKGJHOM_FIMFPJPFNJO_OFFSET UNITYSDK_OFFSET(0xBAA4880)
#define NALEBKGJHOM_FJKDGHLIKKO_OFFSET UNITYSDK_OFFSET(0xBAA48F0)
#define NALEBKGJHOM_FMCJGKMKEHN_OFFSET UNITYSDK_OFFSET(0xBAA5190)
#define NALEBKGJHOM_FNNIMKNFGOM_OFFSET UNITYSDK_OFFSET(0xBAA54A0)
#define NALEBKGJHOM_GBFEIPPEKJN_OFFSET UNITYSDK_OFFSET(0xBAA4FE0)
#define NALEBKGJHOM_GDGEKGGJCBJ_OFFSET UNITYSDK_OFFSET(0xBAA5050)
#define NALEBKGJHOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBAA4620)
#define NALEBKGJHOM_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0xBAA47F0)
#define NALEBKGJHOM_GET_NAMEEX_OFFSET UNITYSDK_OFFSET(0xBAA4B70)
#define NALEBKGJHOM_GET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0xBAA4B50)
#define NALEBKGJHOM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBAA4B90)
#define NALEBKGJHOM_HGNDDFPBPIB_OFFSET UNITYSDK_OFFSET(0xBAA59E0)
#define NALEBKGJHOM_IEEICEGABLG_OFFSET UNITYSDK_OFFSET(0xBAA4970)
#define NALEBKGJHOM_INGIAELCOCF_OFFSET UNITYSDK_OFFSET(0xBAA46E0)
#define NALEBKGJHOM_IOBHEKEGKKH_OFFSET UNITYSDK_OFFSET(0xBAA55A0)
#define NALEBKGJHOM_JAECGCDKGAH_OFFSET UNITYSDK_OFFSET(0xBAA52D0)
#define NALEBKGJHOM_JBEHEMPJHPK_OFFSET UNITYSDK_OFFSET(0xBAA4EA0)
#define NALEBKGJHOM_JICOLFIJBKF_OFFSET UNITYSDK_OFFSET(0xBAA5230)
#define NALEBKGJHOM_JNIDGOJFKGL_OFFSET UNITYSDK_OFFSET(0xBAA4C80)
#define NALEBKGJHOM_KLINIHAEICE_OFFSET UNITYSDK_OFFSET(0xBAA4F60)
#define NALEBKGJHOM_LGJKJJCJCJE_OFFSET UNITYSDK_OFFSET(0xBAA5BF0)
#define NALEBKGJHOM_LLBKEEPHIND_OFFSET UNITYSDK_OFFSET(0xBAA5DC0)
#define NALEBKGJHOM_LPANPOJMENG_1_OFFSET UNITYSDK_OFFSET(0xBAA4050)
#define NALEBKGJHOM_LPANPOJMENG_OFFSET UNITYSDK_OFFSET(0xBAA3C80)
#define NALEBKGJHOM_MINDLBJNIOO_OFFSET UNITYSDK_OFFSET(0xBAA5E40)
#define NALEBKGJHOM_NALODEBBOKO_OFFSET UNITYSDK_OFFSET(0xBAA4DD0)
#define NALEBKGJHOM_NDMOKDMDFOJ_OFFSET UNITYSDK_OFFSET(0xBAA5EA0)
#define NALEBKGJHOM_NHGCDGPCLKI_OFFSET UNITYSDK_OFFSET(0xBAA4EF0)
#define NALEBKGJHOM_NLBGIBDFJIN_OFFSET UNITYSDK_OFFSET(0xBAA4BF0)
#define NALEBKGJHOM_NLDBFCCLPNB_OFFSET UNITYSDK_OFFSET(0xBAA53C0)
#define NALEBKGJHOM_NOMFNJGPCLN_OFFSET UNITYSDK_OFFSET(0xBAA5860)
#define NALEBKGJHOM_OAEMNALIIDK_OFFSET UNITYSDK_OFFSET(0xBAA5B80)
#define NALEBKGJHOM_OBONOODIJEG_OFFSET UNITYSDK_OFFSET(0xBAA4AD0)
#define NALEBKGJHOM_ODBFDIKMGCH_OFFSET UNITYSDK_OFFSET(0xBAA4770)
#define NALEBKGJHOM_OOJPHMNKKKB_OFFSET UNITYSDK_OFFSET(0xBAA5EE0)
#define NALEBKGJHOM_PFGFFKNBFKC_OFFSET UNITYSDK_OFFSET(0xBAA56A0)
#define NALEBKGJHOM_PLBNJCBMIOH_OFFSET UNITYSDK_OFFSET(0xBAA4D60)
#define NALEBKGJHOM_PLOPPLMOJHH_OFFSET UNITYSDK_OFFSET(0xBAA5F60)
#define NALEBKGJHOM_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0xBAA4800)
#define NALEBKGJHOM_SET_NAMEEX_OFFSET UNITYSDK_OFFSET(0xBAA4B80)
#define NALEBKGJHOM_SET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0xBAA4B60)

inline static constexpr unsigned int NALEBKGJHOM_TypeDefinitionIndex = 69803;

	class NALEBKGJHOM : public ::System::Object
	{
	public:
		::System::String* _NameEx_k__BackingField; // 0x10
		::System::String* _ProfilePathEx_k__BackingField; // 0x18
		::System::Int32 FFDOKPPGDLF; // 0x20
		::System::Int32 BPJALFELNFH; // 0x24
		::System::Int32 HMHAFIFGAPC; // 0x28
		::System::Int32 MOGDOFMMHHB; // 0x2C
		::System::Int32 AHAGNILGGGN; // 0x30
		::System::Int32 JHDCOEGCIBE; // 0x34
		::System::Int32 JAOFGOBGILB; // 0x38
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_OBPCFODPECD()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "NALEBKGJHOM")->GetStaticField(0x1B6D0);
		}

		static ::UnityEngine::Rendering::VolumeProfile** StaticGet_ICPKOBEBMMF()
		{
			return (::UnityEngine::Rendering::VolumeProfile**)UnitySDK::FromName("", "NALEBKGJHOM")->GetStaticField(0x1B6D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NALEBKGJHOM_CCTOR_OFFSET))();
		}

		::System::Void LPANPOJMENG(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_LPANPOJMENG_OFFSET))(this, a1, a2);
		}

		static ::System::Void LPANPOJMENG_1(::System::String* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_LPANPOJMENG_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean DLDBLNNPHKE(::NALEBKGJHOM* a1, ::NALEBKGJHOM* a2)
		{
			return ((::System::Boolean(*)(::NALEBKGJHOM*, ::NALEBKGJHOM*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		static ::System::Boolean FEIIDFFOICL(::NALEBKGJHOM* a1, ::NALEBKGJHOM* a2)
		{
			return ((::System::Boolean(*)(::NALEBKGJHOM*, ::NALEBKGJHOM*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Void INGIAELCOCF(::NALEBKGJHOM* a1)
		{
			return ((::System::Void(*)(::NALEBKGJHOM*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_INGIAELCOCF_OFFSET))(a1);
		}

		static ::NALEBKGJHOM* ODBFDIKMGCH(::System::String* a1, ::System::String* a2)
		{
			return ((::NALEBKGJHOM*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_ODBFDIKMGCH_OFFSET))(a1, a2);
		}

		::COGBNIGPJPO* get_ActiveProfileTransitionTarget()
		{
			return ((::COGBNIGPJPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this);
		}

		::System::Void set_ActiveProfileTransitionTarget(::COGBNIGPJPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this, a1);
		}

		::System::Boolean FIMFPJPFNJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_FIMFPJPFNJO_OFFSET))(this);
		}

		::System::Void FJKDGHLIKKO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NALEBKGJHOM_FJKDGHLIKKO_OFFSET))(this, a1);
		}

		::System::Boolean IEEICEGABLG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_IEEICEGABLG_OFFSET))(this);
		}

		::System::Void DFHAIIOJEBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NALEBKGJHOM_DFHAIIOJEBJ_OFFSET))(this, a1);
		}

		::System::Boolean CIHLFNJCABF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_CIHLFNJCABF_OFFSET))(this);
		}

		::System::Void OBONOODIJEG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NALEBKGJHOM_OBONOODIJEG_OFFSET))(this, a1);
		}

		::System::String* get_ProfilePathEx()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_GET_PROFILEPATHEX_OFFSET))(this);
		}

		::System::Void set_ProfilePathEx(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_SET_PROFILEPATHEX_OFFSET))(this, a1);
		}

		::System::String* get_NameEx()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_GET_NAMEEX_OFFSET))(this);
		}

		::System::Void set_NameEx(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_SET_NAMEEX_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_HADOHLNHHGB_OFFSET))(this);
		}

		::UnityEngine::Texture* NLBGIBDFJIN(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_NLBGIBDFJIN_OFFSET))(this, a1);
		}

		::System::Int32 JNIDGOJFKGL(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_JNIDGOJFKGL_OFFSET))(this, a1);
		}

		::System::Boolean CDDMBLPLDIA(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_CDDMBLPLDIA_OFFSET))(this, a1);
		}

		::System::Single PLBNJCBMIOH(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Single(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_PLBNJCBMIOH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 NALODEBBOKO(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_NALODEBBOKO_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* JBEHEMPJHPK(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_JBEHEMPJHPK_OFFSET))(this, a1);
		}

		::System::Int32 NHGCDGPCLKI(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_NHGCDGPCLKI_OFFSET))(this, a1);
		}

		::System::Void KLINIHAEICE(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Int32))((::PBYTE)hIl2Cpp + NALEBKGJHOM_KLINIHAEICE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GBFEIPPEKJN(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_GBFEIPPEKJN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GDGEKGGJCBJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_GDGEKGGJCBJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 EOPDCMGLONM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_EOPDCMGLONM_OFFSET))(this);
		}

		::UnityEngine::Light* FMCJGKMKEHN(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NALEBKGJHOM_FMCJGKMKEHN_OFFSET))(this, a1);
		}

		::UnityEngine::Light* JICOLFIJBKF(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NALEBKGJHOM_JICOLFIJBKF_OFFSET))(this, a1);
		}

		::System::Void JAECGCDKGAH(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NALEBKGJHOM_JAECGCDKGAH_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Rendering::VolumeProfile* NLDBFCCLPNB()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)())((::PBYTE)hIl2Cpp + NALEBKGJHOM_NLDBFCCLPNB_OFFSET))();
		}

		::UnityEngine::Rendering::VolumeProfile* FNNIMKNFGOM()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_FNNIMKNFGOM_OFFSET))(this);
		}

		::System::Void IOBHEKEGKKH(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_IOBHEKEGKKH_OFFSET))(this, a1, a2);
		}

		::System::Void FGFDGBDLOLO(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single))((::PBYTE)hIl2Cpp + NALEBKGJHOM_FGFDGBDLOLO_OFFSET))(this, a1, a2);
		}

		::System::Void PFGFFKNBFKC(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NALEBKGJHOM_PFGFFKNBFKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CMFABFAOFAH(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + NALEBKGJHOM_CMFABFAOFAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NOMFNJGPCLN(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NALEBKGJHOM_NOMFNJGPCLN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BNILHCDGHJB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NALEBKGJHOM_BNILHCDGHJB_OFFSET))(this, a1, a2);
		}

		::System::Boolean HGNDDFPBPIB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NALEBKGJHOM_HGNDDFPBPIB_OFFSET))(this, a1);
		}

		::System::Boolean OAEMNALIIDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_OAEMNALIIDK_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* LGJKJJCJCJE()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_LGJKJJCJCJE_OFFSET))(this);
		}

		::UnityEngine::Vector3 BAODPCDPFML()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_BAODPCDPFML_OFFSET))(this);
		}

		::UnityEngine::Vector3 CJPLNHNIHFD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_CJPLNHNIHFD_OFFSET))(this);
		}

		::System::Void LLBKEEPHIND(::COGBNIGPJPO* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_LLBKEEPHIND_OFFSET))(this, a1, a2);
		}

		::System::Void MINDLBJNIOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_MINDLBJNIOO_OFFSET))(this);
		}

		::System::Void NDMOKDMDFOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_NDMOKDMDFOJ_OFFSET))(this);
		}

		::System::Void OOJPHMNKKKB(::COGBNIGPJPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_OOJPHMNKKKB_OFFSET))(this, a1);
		}

		::System::Void PLOPPLMOJHH(::COGBNIGPJPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_PLOPPLMOJHH_OFFSET))(this, a1);
		}

		::System::Void CLMBJABNGFP(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_CLMBJABNGFP_OFFSET))(this, a1);
		}

		::System::Void EDFJNHAMKBL(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + NALEBKGJHOM_EDFJNHAMKBL_OFFSET))(this, a1);
		}

		::SceneLightVolume* CCCMOCIELFO()
		{
			return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALEBKGJHOM_CCCMOCIELFO_OFFSET))(this);
		}

		::System::Void EPNFLFKBJDM(::UnityEngine::Rendering::AmbientVolumneData a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData))((::PBYTE)hIl2Cpp + NALEBKGJHOM_EPNFLFKBJDM_OFFSET))(this, a1);
		}

	};
