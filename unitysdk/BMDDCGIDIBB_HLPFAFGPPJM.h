#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AKMKHFACFCE;
class BMDDCGIDIBB_DIMAABDMJBL;
namespace RPG::Client { class MonoMovementPropHandle; }

#define BMDDCGIDIBB_HLPFAFGPPJM_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBD98FE0)
#define BMDDCGIDIBB_HLPFAFGPPJM_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBA94480)
#define BMDDCGIDIBB_HLPFAFGPPJM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD992C0)
#define BMDDCGIDIBB_HLPFAFGPPJM_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0xBD99240)
#define BMDDCGIDIBB_HLPFAFGPPJM_ENLDJHHKGGG_OFFSET UNITYSDK_OFFSET(0xBA94F00)
#define BMDDCGIDIBB_HLPFAFGPPJM_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0xBD99180)
#define BMDDCGIDIBB_HLPFAFGPPJM_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xBD98FF0)
#define BMDDCGIDIBB_HLPFAFGPPJM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBA93EC0)
#define BMDDCGIDIBB_HLPFAFGPPJM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA945F0)

inline static constexpr unsigned int BMDDCGIDIBB_HLPFAFGPPJM_TypeDefinitionIndex = 69179;

	class BMDDCGIDIBB_HLPFAFGPPJM : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::RPG::Client::MonoMovementPropHandle* IAHKANFGGDM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HLPFAFGPPJM_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HLPFAFGPPJM_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HLPFAFGPPJM_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HLPFAFGPPJM_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void ENLDJHHKGGG(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HLPFAFGPPJM_ENLDJHHKGGG_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::EPedestrianV2MotionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HLPFAFGPPJM_BGDKFHEBDFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HLPFAFGPPJM_IAKCEPJGNJC_OFFSET))(this);
		}

		::AKMKHFACFCE* HDANFPANCNF()
		{
			return ((::AKMKHFACFCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HLPFAFGPPJM_HDANFPANCNF_OFFSET))(this);
		}

		::System::Void EIJPOIHEOMC(::AKMKHFACFCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKMKHFACFCE*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HLPFAFGPPJM_EIJPOIHEOMC_OFFSET))(this, a1);
		}

	};
