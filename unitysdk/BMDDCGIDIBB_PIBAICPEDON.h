#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class BMDDCGIDIBB_DIMAABDMJBL;
class KFGKNDNJKMI;

#define BMDDCGIDIBB_PIBAICPEDON_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBD9EA70)
#define BMDDCGIDIBB_PIBAICPEDON_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBD9E4B0)
#define BMDDCGIDIBB_PIBAICPEDON_CTOR_OFFSET UNITYSDK_OFFSET(0xBD9EB60)
#define BMDDCGIDIBB_PIBAICPEDON_DCBPABOCBHA_OFFSET UNITYSDK_OFFSET(0xBD9EA80)
#define BMDDCGIDIBB_PIBAICPEDON_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD9E1D0)
#define BMDDCGIDIBB_PIBAICPEDON_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0xBD9EAE0)
#define BMDDCGIDIBB_PIBAICPEDON_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0xBD9E9B0)
#define BMDDCGIDIBB_PIBAICPEDON_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xBD9E330)
#define BMDDCGIDIBB_PIBAICPEDON_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBD9E240)
#define BMDDCGIDIBB_PIBAICPEDON_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD9E560)

inline static constexpr unsigned int BMDDCGIDIBB_PIBAICPEDON_TypeDefinitionIndex = 69186;

	class BMDDCGIDIBB_PIBAICPEDON : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::System::Single AKKEAPCEBIP; // 0x18
		::System::Single NEAFJCGPJCL; // 0x1C
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

		::System::Nullable_1<::UnityEngine::Vector3> DCBPABOCBHA()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIBAICPEDON_DCBPABOCBHA_OFFSET))(this);
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
