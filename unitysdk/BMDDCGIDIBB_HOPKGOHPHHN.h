#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class BMDDCGIDIBB_DIMAABDMJBL;
class FCFPLEDCJKF;
namespace System { class Nullable; }

#define BMDDCGIDIBB_HOPKGOHPHHN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBD9A060)
#define BMDDCGIDIBB_HOPKGOHPHHN_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBD99950)
#define BMDDCGIDIBB_HOPKGOHPHHN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD9A1C0)
#define BMDDCGIDIBB_HOPKGOHPHHN_DCBPABOCBHA_OFFSET UNITYSDK_OFFSET(0xBD9A070)
#define BMDDCGIDIBB_HOPKGOHPHHN_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0xBD999F0)
#define BMDDCGIDIBB_HOPKGOHPHHN_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0xBD99890)
#define BMDDCGIDIBB_HOPKGOHPHHN_HPLBPNGEFFB_OFFSET UNITYSDK_OFFSET(0xBD9A0F0)
#define BMDDCGIDIBB_HOPKGOHPHHN_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xBD99EB0)
#define BMDDCGIDIBB_HOPKGOHPHHN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBD992D0)
#define BMDDCGIDIBB_HOPKGOHPHHN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD99A70)

	class BMDDCGIDIBB_HOPKGOHPHHN : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::UnityEngine::Vector3 PLPMPGPCEGP; // 0x18
		::JOGBIBJLPJB AGBACLADKJH; // 0x24
		::System::Boolean CKAKDPAIHMA; // 0x2C
		::System::Boolean IOCJCHENMGP; // 0x2D
		// static const ::System::String* NAGPIOBJGHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EPedestrianV2MotionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_BGDKFHEBDFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_IAKCEPJGNJC_OFFSET))(this);
		}

		::System::Nullable* DCBPABOCBHA()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_DCBPABOCBHA_OFFSET))(this);
		}

		::System::Void HPLBPNGEFFB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_HPLBPNGEFFB_OFFSET))(this, a1);
		}

		::FCFPLEDCJKF* HDANFPANCNF()
		{
			return ((::FCFPLEDCJKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_HDANFPANCNF_OFFSET))(this);
		}

		::System::Void EIJPOIHEOMC(::FCFPLEDCJKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCFPLEDCJKF*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_EIJPOIHEOMC_OFFSET))(this, a1);
		}

	};
