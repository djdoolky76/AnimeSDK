#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/BMDDCGIDIBB_KJFCKEIACEO_ELeaveState.h"
#include "unitysdk/BMDDCGIDIBB_KJFCKEIACEO_EPlayState.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class BMDDCGIDIBB_DIMAABDMJBL;
class KFGKNDNJKMI;

#define BMDDCGIDIBB_KJFCKEIACEO_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x18B762E0)
#define BMDDCGIDIBB_KJFCKEIACEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x18B762F0)
#define BMDDCGIDIBB_KJFCKEIACEO_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x18B74570)
#define BMDDCGIDIBB_KJFCKEIACEO_CTOR_OFFSET UNITYSDK_OFFSET(0x18B66430)
#define BMDDCGIDIBB_KJFCKEIACEO_DGLFILCDKFE_OFFSET UNITYSDK_OFFSET(0x18B75230)
#define BMDDCGIDIBB_KJFCKEIACEO_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0x18B746D0)
#define BMDDCGIDIBB_KJFCKEIACEO_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0x18B744B0)
#define BMDDCGIDIBB_KJFCKEIACEO_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0x18B760B0)
#define BMDDCGIDIBB_KJFCKEIACEO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x18B73C90)
#define BMDDCGIDIBB_KJFCKEIACEO_MOJNEAEIHAB_OFFSET UNITYSDK_OFFSET(0x18B757B0)
#define BMDDCGIDIBB_KJFCKEIACEO_NODPMJFOIPO_OFFSET UNITYSDK_OFFSET(0x18B75E20)
#define BMDDCGIDIBB_KJFCKEIACEO_OAOAHGPJLKG_OFFSET UNITYSDK_OFFSET(0x18B6A660)
#define BMDDCGIDIBB_KJFCKEIACEO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x18B74750)

inline static constexpr unsigned int BMDDCGIDIBB_KJFCKEIACEO_TypeDefinitionIndex = 71136;

	class BMDDCGIDIBB_KJFCKEIACEO : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::JOGBIBJLPJB AGBACLADKJH; // 0x18
		::System::Nullable_1<::UnityEngine::Vector3> HAKCOKEJIGJ; // 0x20
		::System::Byte _padding0[0x8];
		::System::Single CJANIKMOLKL; // 0x30
		::System::Boolean CKAKDPAIHMA; // 0x34
		::System::Boolean OFEPHLEKKCD; // 0x35
		::System::Byte _padding1[0x2];
		::System::Single OFILPDGLPGF; // 0x38
		::BMDDCGIDIBB_KJFCKEIACEO_ELeaveState ANOPHKFLFFA; // 0x3C
		::BMDDCGIDIBB_KJFCKEIACEO_EPlayState CNAPOOPIAAI; // 0x40
		static ::UnityEngine::Vector2* StaticGet_BDEKGOJCGPJ()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("", "KJFCKEIACEO")->GetStaticField(0x14F40);
		}

		static ::UnityEngine::Vector2* StaticGet_BCOPPIJFOHA()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("", "KJFCKEIACEO")->GetStaticField(0x14F48);
		}

		static ::UnityEngine::Vector2* StaticGet_ACEFMLKEALG()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("", "KJFCKEIACEO")->GetStaticField(0x14F50);
		}

		static ::UnityEngine::Vector2* StaticGet_OKKIGLGLELM()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("", "KJFCKEIACEO")->GetStaticField(0x14F58);
		}

		// static const ::System::String* HNPPDOFADKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_CCTOR_OFFSET))();
		}

		::System::Void KIGBILLGNOH(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void OAOAHGPJLKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_OAOAHGPJLKG_OFFSET))(this);
		}

		::System::Void DGLFILCDKFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_DGLFILCDKFE_OFFSET))(this);
		}

		::RPG::Client::EPedestrianV2MotionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_BGDKFHEBDFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_IAKCEPJGNJC_OFFSET))(this);
		}

		::KFGKNDNJKMI* HDANFPANCNF()
		{
			return ((::KFGKNDNJKMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_HDANFPANCNF_OFFSET))(this);
		}

		::System::Void EIJPOIHEOMC(::KFGKNDNJKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGKNDNJKMI*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_EIJPOIHEOMC_OFFSET))(this, a1);
		}

		::System::Void NODPMJFOIPO(::BMDDCGIDIBB_KJFCKEIACEO_EPlayState a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_KJFCKEIACEO_EPlayState))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_NODPMJFOIPO_OFFSET))(this, a1);
		}

		::System::Boolean MOJNEAEIHAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJFCKEIACEO_MOJNEAEIHAB_OFFSET))(this);
		}

	};
