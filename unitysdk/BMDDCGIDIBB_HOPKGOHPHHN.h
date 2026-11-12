#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class BMDDCGIDIBB_DIMAABDMJBL;
class FCFPLEDCJKF;

#define BMDDCGIDIBB_HOPKGOHPHHN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xC428BB0)
#define BMDDCGIDIBB_HOPKGOHPHHN_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC428510)
#define BMDDCGIDIBB_HOPKGOHPHHN_CTOR_OFFSET UNITYSDK_OFFSET(0xC41D140)
#define BMDDCGIDIBB_HOPKGOHPHHN_DCBPABOCBHA_OFFSET UNITYSDK_OFFSET(0xC428BC0)
#define BMDDCGIDIBB_HOPKGOHPHHN_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0xC428560)
#define BMDDCGIDIBB_HOPKGOHPHHN_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0xC428450)
#define BMDDCGIDIBB_HOPKGOHPHHN_HPLBPNGEFFB_OFFSET UNITYSDK_OFFSET(0xC428C40)
#define BMDDCGIDIBB_HOPKGOHPHHN_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xC428A00)
#define BMDDCGIDIBB_HOPKGOHPHHN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC427E90)
#define BMDDCGIDIBB_HOPKGOHPHHN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC4285E0)

inline static constexpr unsigned int BMDDCGIDIBB_HOPKGOHPHHN_TypeDefinitionIndex = 71135;

	class BMDDCGIDIBB_HOPKGOHPHHN : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::UnityEngine::Vector3 PLPMPGPCEGP; // 0x18
		::System::Boolean IOCJCHENMGP; // 0x24
		::System::Boolean CKAKDPAIHMA; // 0x25
		::System::Byte _padding0[0x2];
		::JOGBIBJLPJB AGBACLADKJH; // 0x28
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

		::System::Nullable_1<::UnityEngine::Vector3> DCBPABOCBHA()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HOPKGOHPHHN_DCBPABOCBHA_OFFSET))(this);
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
