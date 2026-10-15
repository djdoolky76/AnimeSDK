#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class LOCGLAAGEFC;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }
namespace System { class String; }

#define AANHEBGBNDL_BBOOOGIENPE_OFFSET UNITYSDK_OFFSET(0xB0D5660)
#define AANHEBGBNDL_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D36B0)
#define AANHEBGBNDL_DICNFKHGEOM_OFFSET UNITYSDK_OFFSET(0xB0D4DF0)
#define AANHEBGBNDL_DPGKGCOEJBH_OFFSET UNITYSDK_OFFSET(0xB0D4720)
#define AANHEBGBNDL_DPHDIMIGODC_OFFSET UNITYSDK_OFFSET(0xB0D4870)
#define AANHEBGBNDL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB0D38C0)
#define AANHEBGBNDL_HPJIJJLOIMM_OFFSET UNITYSDK_OFFSET(0xB0D59E0)
#define AANHEBGBNDL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB0D37F0)
#define AANHEBGBNDL_JMHBIIIIGFE_OFFSET UNITYSDK_OFFSET(0xB0D4000)
#define AANHEBGBNDL_MHGMBOMOMDN_OFFSET UNITYSDK_OFFSET(0xB0D57E0)
#define AANHEBGBNDL_NKHCHFBFFAC_OFFSET UNITYSDK_OFFSET(0xB0D4A80)
#define AANHEBGBNDL_NKOFDCOCPKO_OFFSET UNITYSDK_OFFSET(0xB0D54F0)
#define AANHEBGBNDL_NPFILABKLFM_OFFSET UNITYSDK_OFFSET(0xB0D5010)
#define AANHEBGBNDL_PBLBDKGFHPN_OFFSET UNITYSDK_OFFSET(0xB0D3A10)
#define AANHEBGBNDL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB0D3830)

inline static constexpr unsigned int AANHEBGBNDL_TypeDefinitionIndex = 76951;

	class AANHEBGBNDL : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::Entitas::IGroup* GGFCGEGCMAL; // 0x20
		::Entitas::IGroup* OLHLLNBNHHO; // 0x28
		::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::HIOEAKHGILF*>*>* KMECAKMIIPL; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + AANHEBGBNDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANHEBGBNDL_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANHEBGBNDL_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANHEBGBNDL_EXECUTE_OFFSET))(this);
		}

		::System::Void PBLBDKGFHPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANHEBGBNDL_PBLBDKGFHPN_OFFSET))(this);
		}

		::System::Boolean DPGKGCOEJBH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AANHEBGBNDL_DPGKGCOEJBH_OFFSET))(this, a1);
		}

		::System::Void JMHBIIIIGFE(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AANHEBGBNDL_JMHBIIIIGFE_OFFSET))(this, a1);
		}

		::System::Void NKHCHFBFFAC(::HIOEAKHGILF* a1, ::LOCGLAAGEFC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::LOCGLAAGEFC*))((::PBYTE)hIl2Cpp + AANHEBGBNDL_NKHCHFBFFAC_OFFSET))(this, a1, a2);
		}

		::System::Void DPHDIMIGODC(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AANHEBGBNDL_DPHDIMIGODC_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* NKOFDCOCPKO(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + AANHEBGBNDL_NKOFDCOCPKO_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* MHGMBOMOMDN(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + AANHEBGBNDL_MHGMBOMOMDN_OFFSET))(this, a1, a2);
		}

		::RPG::PoolList_1<::HIOEAKHGILF*>* BBOOOGIENPE(::System::String* a1)
		{
			return ((::RPG::PoolList_1<::HIOEAKHGILF*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AANHEBGBNDL_BBOOOGIENPE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NPFILABKLFM(::HIOEAKHGILF* a1, ::LOCGLAAGEFC* a2, ::RPG::GameCore::FiveDimDanmuTrack* a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HIOEAKHGILF*, ::LOCGLAAGEFC*, ::RPG::GameCore::FiveDimDanmuTrack*))((::PBYTE)hIl2Cpp + AANHEBGBNDL_NPFILABKLFM_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 HPJIJJLOIMM(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AANHEBGBNDL_HPJIJJLOIMM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FiveDimDanmuTrack* DICNFKHGEOM(::LOCGLAAGEFC* a1)
		{
			return ((::RPG::GameCore::FiveDimDanmuTrack*(*)(::PVOID, ::LOCGLAAGEFC*))((::PBYTE)hIl2Cpp + AANHEBGBNDL_DICNFKHGEOM_OFFSET))(this, a1);
		}

	};
