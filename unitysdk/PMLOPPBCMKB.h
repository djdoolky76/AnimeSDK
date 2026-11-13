#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Rect.h"
class AAODEOPMKBD;
class DGPKLNNFELK;
class ENLBPLPOGMF;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLodSetting; }
namespace RPG::GameCore { class LodDetail; }

#define PMLOPPBCMKB_ACPMFLMAMHK_1_OFFSET UNITYSDK_OFFSET(0x184987C0)
#define PMLOPPBCMKB_ACPMFLMAMHK_OFFSET UNITYSDK_OFFSET(0x18498530)
#define PMLOPPBCMKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1849A0D0)
#define PMLOPPBCMKB_CTOR_OFFSET UNITYSDK_OFFSET(0x188A9EF0)
#define PMLOPPBCMKB_DHOKNFMMMMJ_OFFSET UNITYSDK_OFFSET(0x18498B10)
#define PMLOPPBCMKB_DKKAAMKPILI_1_OFFSET UNITYSDK_OFFSET(0x18499AF0)
#define PMLOPPBCMKB_DKKAAMKPILI_OFFSET UNITYSDK_OFFSET(0x18499850)
#define PMLOPPBCMKB_DMGDBJEMMKN_OFFSET UNITYSDK_OFFSET(0x18498910)
#define PMLOPPBCMKB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x18499810)
#define PMLOPPBCMKB_HCNNNELBIBC_OFFSET UNITYSDK_OFFSET(0x184985F0)
#define PMLOPPBCMKB_IFBAGFPKJLF_OFFSET UNITYSDK_OFFSET(0x18498350)
#define PMLOPPBCMKB_IIKCPMFPGBJ_OFFSET UNITYSDK_OFFSET(0x18499E20)
#define PMLOPPBCMKB_JNPHNEFHNBP_OFFSET UNITYSDK_OFFSET(0x184991C0)
#define PMLOPPBCMKB_KFCLNDFGEBI_1_OFFSET UNITYSDK_OFFSET(0x18498F40)
#define PMLOPPBCMKB_KFCLNDFGEBI_2_OFFSET UNITYSDK_OFFSET(0x184993D0)
#define PMLOPPBCMKB_KFCLNDFGEBI_3_OFFSET UNITYSDK_OFFSET(0x18499590)
#define PMLOPPBCMKB_KFCLNDFGEBI_OFFSET UNITYSDK_OFFSET(0x18498DE0)
#define PMLOPPBCMKB_LNHIJKHIGPO_OFFSET UNITYSDK_OFFSET(0x18499F90)
#define PMLOPPBCMKB_MHLBNOCGKLA_OFFSET UNITYSDK_OFFSET(0x188AA0D0)
#define PMLOPPBCMKB_MNJCLJGGKEG_OFFSET UNITYSDK_OFFSET(0x18499640)
#define PMLOPPBCMKB_OAJDBPKBOAJ_OFFSET UNITYSDK_OFFSET(0x188A9F00)
#define PMLOPPBCMKB_ONLOKIFJOBL_OFFSET UNITYSDK_OFFSET(0x184984B0)

inline static constexpr unsigned int PMLOPPBCMKB_TypeDefinitionIndex = 75966;

	class PMLOPPBCMKB : public ::System::Object
	{
	public:
		::RPG::Client::OpenWorld::StreamingLodSetting* PNIBBJODGFJ; // 0x10
		::System::Single GJDDHLIKCPG; // 0x18
		::UnityEngine::Vector3 PFBFFIMPNBL; // 0x1C
		::System::Single LNGCANKBIDF; // 0x28
		static ::RPG::Client::RPGProfilerMarker** StaticGet_FGMCBJMPPHD()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "PMLOPPBCMKB")->GetStaticField(0x5E070);
		}

		static ::System::Single* StaticGet_DPGFEFBFPFF()
		{
			return (::System::Single*)UnitySDK::FromName("", "PMLOPPBCMKB")->GetStaticField(0x137B0);
		}

		static ::System::Single* StaticGet_ECCDDMLKKMC()
		{
			return (::System::Single*)UnitySDK::FromName("", "PMLOPPBCMKB")->GetStaticField(0x137B4);
		}

		static ::System::Single* StaticGet_PIIHMFECDJL()
		{
			return (::System::Single*)UnitySDK::FromName("", "PMLOPPBCMKB")->GetStaticField(0x137B8);
		}

		static ::System::Single* StaticGet_CKFJCFJLEJP()
		{
			return (::System::Single*)UnitySDK::FromName("", "PMLOPPBCMKB")->GetStaticField(0x137BC);
		}

		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLodSetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLodSetting*))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMLOPPBCMKB_CCTOR_OFFSET))();
		}

		::System::Void OAJDBPKBOAJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_OAJDBPKBOAJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MHLBNOCGKLA(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_MHLBNOCGKLA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IFBAGFPKJLF(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_IFBAGFPKJLF_OFFSET))(this, a1, a2);
		}

		::System::Void ONLOKIFJOBL(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_ONLOKIFJOBL_OFFSET))(this, a1, a2);
		}

		::System::Int32 ACPMFLMAMHK(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_ACPMFLMAMHK_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 HCNNNELBIBC(::AAODEOPMKBD* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::AAODEOPMKBD*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_HCNNNELBIBC_OFFSET))(a1, a2, a3);
		}

		::System::Int32 ACPMFLMAMHK_1(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Rect a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_ACPMFLMAMHK_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 DHOKNFMMMMJ(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_DHOKNFMMMMJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Single KFCLNDFGEBI(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_KFCLNDFGEBI_OFFSET))(a1, a2, a3);
		}

		static ::System::Single KFCLNDFGEBI_1(::ENLBPLPOGMF* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::System::Single(*)(::ENLBPLPOGMF*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_KFCLNDFGEBI_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single KFCLNDFGEBI_2(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Single(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_KFCLNDFGEBI_2_OFFSET))(a1, a2);
		}

		static ::System::Single KFCLNDFGEBI_3(::ENLBPLPOGMF* a1, ::UnityEngine::Rect a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::ENLBPLPOGMF*, ::UnityEngine::Rect, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_KFCLNDFGEBI_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single DMGDBJEMMKN(::ENLBPLPOGMF* a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Single(*)(::ENLBPLPOGMF*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_DMGDBJEMMKN_OFFSET))(a1, a2);
		}

		static ::System::Single JNPHNEFHNBP(::ENLBPLPOGMF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::ENLBPLPOGMF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_JNPHNEFHNBP_OFFSET))(a1, a2);
		}

		::System::Int32 MNJCLJGGKEG(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Rect a2, ::System::Single a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Rect, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_MNJCLJGGKEG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_HADOHLNHHGB_OFFSET))(this);
		}

		static ::System::Int32 DKKAAMKPILI(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_DKKAAMKPILI_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 DKKAAMKPILI_1(::DGPKLNNFELK* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::DGPKLNNFELK*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_DKKAAMKPILI_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean LNHIJKHIGPO(::RPG::GameCore::LodDetail* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LodDetail*, ::System::Int32))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_LNHIJKHIGPO_OFFSET))(a1, a2);
		}

		static ::System::Single IIKCPMFPGBJ(::RPG::GameCore::LodDetail* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::LodDetail*, ::System::Int32))((::PBYTE)hIl2Cpp + PMLOPPBCMKB_IIKCPMFPGBJ_OFFSET))(a1, a2);
		}

	};
