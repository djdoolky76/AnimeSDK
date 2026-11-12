#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IMOHEHDKGPK.h"
class CFFPEAALCPH;
namespace RPG::GameCore { class SyncAnimWithBgm; }
namespace RPG::GameCore { class SyncAnimWithBgmPhaseConfig; }
namespace System { class Object; }

#define CFFPEAALCPH_JJGHFDADLPD_ACCAGEBDLDJ_OFFSET UNITYSDK_OFFSET(0xD38B910)
#define CFFPEAALCPH_JJGHFDADLPD_BCCCAFLGGPH_OFFSET UNITYSDK_OFFSET(0xD38B220)
#define CFFPEAALCPH_JJGHFDADLPD_BOCNLFAHJKF_OFFSET UNITYSDK_OFFSET(0xD38B610)
#define CFFPEAALCPH_JJGHFDADLPD_CDNEANMMHCH_OFFSET UNITYSDK_OFFSET(0xD37C2A0)
#define CFFPEAALCPH_JJGHFDADLPD_CKADGNFLODD_OFFSET UNITYSDK_OFFSET(0xD38BB30)
#define CFFPEAALCPH_JJGHFDADLPD_CTOR_OFFSET UNITYSDK_OFFSET(0xD37C290)
#define CFFPEAALCPH_JJGHFDADLPD_DBDGKKGEFHN_OFFSET UNITYSDK_OFFSET(0xD38B500)
#define CFFPEAALCPH_JJGHFDADLPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD37CF70)
#define CFFPEAALCPH_JJGHFDADLPD_DLNNFPKMHLO_OFFSET UNITYSDK_OFFSET(0xD38B9B0)
#define CFFPEAALCPH_JJGHFDADLPD_ECFKHEPIHIG_OFFSET UNITYSDK_OFFSET(0xD37C310)
#define CFFPEAALCPH_JJGHFDADLPD_EFEJMKGKCOJ_OFFSET UNITYSDK_OFFSET(0xD37C490)
#define CFFPEAALCPH_JJGHFDADLPD_FEBNANCHFCA_OFFSET UNITYSDK_OFFSET(0xD38B720)
#define CFFPEAALCPH_JJGHFDADLPD_GET_ANIPARAMVALUE_OFFSET UNITYSDK_OFFSET(0xD38BC00)
#define CFFPEAALCPH_JJGHFDADLPD_GET_ANISTATENORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xD38BC20)
#define CFFPEAALCPH_JJGHFDADLPD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD38BBD0)
#define CFFPEAALCPH_JJGHFDADLPD_JGILOBFFPEI_OFFSET UNITYSDK_OFFSET(0xD38BA40)
#define CFFPEAALCPH_JJGHFDADLPD_JOFFOAEEIPM_OFFSET UNITYSDK_OFFSET(0xD38B450)
#define CFFPEAALCPH_JJGHFDADLPD_KCIGLFGLKHK_OFFSET UNITYSDK_OFFSET(0xD37C620)
#define CFFPEAALCPH_JJGHFDADLPD_OMIFHFELHLN_OFFSET UNITYSDK_OFFSET(0xD38B7D0)
#define CFFPEAALCPH_JJGHFDADLPD_ONNOMFDCKNG_OFFSET UNITYSDK_OFFSET(0xD38BBF0)
#define CFFPEAALCPH_JJGHFDADLPD_PALEJGNLOEF_OFFSET UNITYSDK_OFFSET(0xD38B3F0)
#define CFFPEAALCPH_JJGHFDADLPD_SET_ANIPARAMVALUE_OFFSET UNITYSDK_OFFSET(0xD38BC10)
#define CFFPEAALCPH_JJGHFDADLPD_SET_ANISTATENORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xD38BC30)
#define CFFPEAALCPH_JJGHFDADLPD_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD38BBE0)

inline static constexpr unsigned int CFFPEAALCPH_JJGHFDADLPD_TypeDefinitionIndex = 58126;

	class CFFPEAALCPH_JJGHFDADLPD : public ::System::Object
	{
	public:
		::RPG::GameCore::SyncAnimWithBgm* _Config_k__BackingField; // 0x10
		::CFFPEAALCPH* OOPIHKDLJPE; // 0x18
		::System::Single _AniStateNormalizedTime_k__BackingField; // 0x20
		::System::Single _AniParamValue_k__BackingField; // 0x24
		::System::Single PINPGKLEBGK; // 0x28
		::System::Boolean NHNALDNCEMB; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 OHOGFBCFFFN; // 0x30
		::System::Int32 MKPLLIHMFGD; // 0x34
		::System::Void _ctor(::CFFPEAALCPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFFPEAALCPH*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_DISPOSE_OFFSET))(this);
		}

		::System::Void ECFKHEPIHIG(::RPG::GameCore::SyncAnimWithBgm* a1, ::IMOHEHDKGPK a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SyncAnimWithBgm*, ::IMOHEHDKGPK))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_ECFKHEPIHIG_OFFSET))(this, a1, a2);
		}

		::System::Void EFEJMKGKCOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_EFEJMKGKCOJ_OFFSET))(this);
		}

		::System::Boolean KCIGLFGLKHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_KCIGLFGLKHK_OFFSET))(this);
		}

		::System::Boolean OMIFHFELHLN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_OMIFHFELHLN_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::SyncAnimWithBgmPhaseConfig*>* FEBNANCHFCA()
		{
			return ((::Il2CppArray<::RPG::GameCore::SyncAnimWithBgmPhaseConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_FEBNANCHFCA_OFFSET))(this);
		}

		::System::Single PALEJGNLOEF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_PALEJGNLOEF_OFFSET))(this);
		}

		::System::Boolean DLNNFPKMHLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_DLNNFPKMHLO_OFFSET))(this);
		}

		::System::Single ACCAGEBDLDJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_ACCAGEBDLDJ_OFFSET))(this);
		}

		::System::Int32 JOFFOAEEIPM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_JOFFOAEEIPM_OFFSET))(this);
		}

		::System::Boolean BCCCAFLGGPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_BCCCAFLGGPH_OFFSET))(this);
		}

		::System::Void DBDGKKGEFHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_DBDGKKGEFHN_OFFSET))(this);
		}

		::System::Void BOCNLFAHJKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_BOCNLFAHJKF_OFFSET))(this);
		}

		::System::Void JGILOBFFPEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_JGILOBFFPEI_OFFSET))(this, a1);
		}

		::System::Void CKADGNFLODD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_CKADGNFLODD_OFFSET))(this, a1);
		}

		::RPG::GameCore::SyncAnimWithBgm* get_Config()
		{
			return ((::RPG::GameCore::SyncAnimWithBgm*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::SyncAnimWithBgm* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SyncAnimWithBgm*))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Boolean CDNEANMMHCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_CDNEANMMHCH_OFFSET))(this);
		}

		::System::Int32 ONNOMFDCKNG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_ONNOMFDCKNG_OFFSET))(this);
		}

		::System::Single get_AniParamValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_GET_ANIPARAMVALUE_OFFSET))(this);
		}

		::System::Void set_AniParamValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_SET_ANIPARAMVALUE_OFFSET))(this, a1);
		}

		::System::Single get_AniStateNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_GET_ANISTATENORMALIZEDTIME_OFFSET))(this);
		}

		::System::Void set_AniStateNormalizedTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFFPEAALCPH_JJGHFDADLPD_SET_ANISTATENORMALIZEDTIME_OFFSET))(this, a1);
		}

	};
