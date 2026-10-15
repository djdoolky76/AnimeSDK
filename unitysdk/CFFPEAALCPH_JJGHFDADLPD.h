#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IMOHEHDKGPK.h"
class CFFPEAALCPH;
namespace RPG::GameCore { class SyncAnimWithBgm; }
namespace RPG::GameCore { class SyncAnimWithBgmPhaseConfig; }
namespace System { class Object; }

#define CFFPEAALCPH_JJGHFDADLPD_ACCAGEBDLDJ_OFFSET UNITYSDK_OFFSET(0xCA1A2D0)
#define CFFPEAALCPH_JJGHFDADLPD_BCCCAFLGGPH_OFFSET UNITYSDK_OFFSET(0xCA19BE0)
#define CFFPEAALCPH_JJGHFDADLPD_BOCNLFAHJKF_OFFSET UNITYSDK_OFFSET(0xCA19FD0)
#define CFFPEAALCPH_JJGHFDADLPD_CDNEANMMHCH_OFFSET UNITYSDK_OFFSET(0xCA0AD70)
#define CFFPEAALCPH_JJGHFDADLPD_CKADGNFLODD_OFFSET UNITYSDK_OFFSET(0xCA1A4F0)
#define CFFPEAALCPH_JJGHFDADLPD_CTOR_OFFSET UNITYSDK_OFFSET(0xCA0AD60)
#define CFFPEAALCPH_JJGHFDADLPD_DBDGKKGEFHN_OFFSET UNITYSDK_OFFSET(0xCA19EC0)
#define CFFPEAALCPH_JJGHFDADLPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA0BA20)
#define CFFPEAALCPH_JJGHFDADLPD_DLNNFPKMHLO_OFFSET UNITYSDK_OFFSET(0xCA1A370)
#define CFFPEAALCPH_JJGHFDADLPD_ECFKHEPIHIG_OFFSET UNITYSDK_OFFSET(0xCA0ADE0)
#define CFFPEAALCPH_JJGHFDADLPD_EFEJMKGKCOJ_OFFSET UNITYSDK_OFFSET(0xCA0AF60)
#define CFFPEAALCPH_JJGHFDADLPD_FEBNANCHFCA_OFFSET UNITYSDK_OFFSET(0xCA1A0E0)
#define CFFPEAALCPH_JJGHFDADLPD_GET_ANIPARAMVALUE_OFFSET UNITYSDK_OFFSET(0xCA1A5C0)
#define CFFPEAALCPH_JJGHFDADLPD_GET_ANISTATENORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xCA1A5E0)
#define CFFPEAALCPH_JJGHFDADLPD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCA1A590)
#define CFFPEAALCPH_JJGHFDADLPD_JGILOBFFPEI_OFFSET UNITYSDK_OFFSET(0xCA1A400)
#define CFFPEAALCPH_JJGHFDADLPD_JOFFOAEEIPM_OFFSET UNITYSDK_OFFSET(0xCA19E10)
#define CFFPEAALCPH_JJGHFDADLPD_KCIGLFGLKHK_OFFSET UNITYSDK_OFFSET(0xCA0B0E0)
#define CFFPEAALCPH_JJGHFDADLPD_OMIFHFELHLN_OFFSET UNITYSDK_OFFSET(0xCA1A190)
#define CFFPEAALCPH_JJGHFDADLPD_ONNOMFDCKNG_OFFSET UNITYSDK_OFFSET(0xCA1A5B0)
#define CFFPEAALCPH_JJGHFDADLPD_PALEJGNLOEF_OFFSET UNITYSDK_OFFSET(0xCA19DB0)
#define CFFPEAALCPH_JJGHFDADLPD_SET_ANIPARAMVALUE_OFFSET UNITYSDK_OFFSET(0xCA1A5D0)
#define CFFPEAALCPH_JJGHFDADLPD_SET_ANISTATENORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xCA1A5F0)
#define CFFPEAALCPH_JJGHFDADLPD_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCA1A5A0)

inline static constexpr unsigned int CFFPEAALCPH_JJGHFDADLPD_TypeDefinitionIndex = 56902;

	class CFFPEAALCPH_JJGHFDADLPD : public ::System::Object
	{
	public:
		::RPG::GameCore::SyncAnimWithBgm* _Config_k__BackingField; // 0x10
		::CFFPEAALCPH* OOPIHKDLJPE; // 0x18
		::System::Single _AniStateNormalizedTime_k__BackingField; // 0x20
		::System::Int32 OHOGFBCFFFN; // 0x24
		::System::Boolean NHNALDNCEMB; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single PINPGKLEBGK; // 0x2C
		::System::Int32 MKPLLIHMFGD; // 0x30
		::System::Single _AniParamValue_k__BackingField; // 0x34
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
