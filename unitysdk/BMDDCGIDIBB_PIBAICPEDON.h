#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class BMDDCGIDIBB_DIMAABDMJBL;
class KFGKNDNJKMI;
namespace System { class Nullable; }

#define BMDDCGIDIBB_PIBAICPEDON_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBDA28F0)
#define BMDDCGIDIBB_PIBAICPEDON_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBDA2330)
#define BMDDCGIDIBB_PIBAICPEDON_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA29E0)
#define BMDDCGIDIBB_PIBAICPEDON_DCBPABOCBHA_OFFSET UNITYSDK_OFFSET(0xBDA2900)
#define BMDDCGIDIBB_PIBAICPEDON_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDA2040)
#define BMDDCGIDIBB_PIBAICPEDON_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0xBDA2960)
#define BMDDCGIDIBB_PIBAICPEDON_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0xBDA2830)
#define BMDDCGIDIBB_PIBAICPEDON_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xBDA21A0)
#define BMDDCGIDIBB_PIBAICPEDON_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBDA20B0)
#define BMDDCGIDIBB_PIBAICPEDON_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBDA23E0)

inline static constexpr unsigned int BMDDCGIDIBB_PIBAICPEDON_TypeDefinitionIndex = 69186;

	class BMDDCGIDIBB_PIBAICPEDON : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::System::Single NEAFJCGPJCL; // 0x18
		::System::Single AKKEAPCEBIP; // 0x1C
		::UnityEngine::Vector3 NDAJFEMNNLN; // 0x20
		// static const ::System::Object COIKKIJBJLP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EPedestrianV2MotionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_BGDKFHEBDFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_IAKCEPJGNJC_OFFSET))(this);
		}

		::System::Nullable* DCBPABOCBHA()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_DCBPABOCBHA_OFFSET))(this);
		}

		::KFGKNDNJKMI* HDANFPANCNF()
		{
			return ((::KFGKNDNJKMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_HDANFPANCNF_OFFSET))(this);
		}

		::System::Void EIJPOIHEOMC(::KFGKNDNJKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGKNDNJKMI*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_EIJPOIHEOMC_OFFSET))(this, a1);
		}

	};
