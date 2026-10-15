#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BBNNDJLGGLC;
class BMDDCGIDIBB_DIMAABDMJBL;

#define BMDDCGIDIBB_MJCFBAHBPJB_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBD9BBA0)
#define BMDDCGIDIBB_MJCFBAHBPJB_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBD9B2F0)
#define BMDDCGIDIBB_MJCFBAHBPJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBD9BC60)
#define BMDDCGIDIBB_MJCFBAHBPJB_DCBPABOCBHA_OFFSET UNITYSDK_OFFSET(0xBD9BBB0)
#define BMDDCGIDIBB_MJCFBAHBPJB_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0xBD9B440)
#define BMDDCGIDIBB_MJCFBAHBPJB_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0xBD9B230)
#define BMDDCGIDIBB_MJCFBAHBPJB_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xBD9B9C0)
#define BMDDCGIDIBB_MJCFBAHBPJB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBD9AAE0)
#define BMDDCGIDIBB_MJCFBAHBPJB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD9B4C0)

inline static constexpr unsigned int BMDDCGIDIBB_MJCFBAHBPJB_TypeDefinitionIndex = 69180;

	class BMDDCGIDIBB_MJCFBAHBPJB : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::JOGBIBJLPJB AGBACLADKJH; // 0x18
		::System::Boolean PIOAJDKBAML; // 0x20
		::System::Boolean MLKDAICGNDO; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJCFBAHBPJB_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJCFBAHBPJB_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJCFBAHBPJB_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJCFBAHBPJB_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EPedestrianV2MotionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJCFBAHBPJB_BGDKFHEBDFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJCFBAHBPJB_IAKCEPJGNJC_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector3> DCBPABOCBHA()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJCFBAHBPJB_DCBPABOCBHA_OFFSET))(this);
		}

		::BBNNDJLGGLC* HDANFPANCNF()
		{
			return ((::BBNNDJLGGLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJCFBAHBPJB_HDANFPANCNF_OFFSET))(this);
		}

		::System::Void EIJPOIHEOMC(::BBNNDJLGGLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBNNDJLGGLC*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJCFBAHBPJB_EIJPOIHEOMC_OFFSET))(this, a1);
		}

	};
