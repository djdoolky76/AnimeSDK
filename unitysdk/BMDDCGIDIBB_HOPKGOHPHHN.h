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

#define BMDDCGIDIBB_HOPKGOHPHHN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x18B71E40)
#define BMDDCGIDIBB_HOPKGOHPHHN_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x18B717A0)
#define BMDDCGIDIBB_HOPKGOHPHHN_CTOR_OFFSET UNITYSDK_OFFSET(0x18B66420)
#define BMDDCGIDIBB_HOPKGOHPHHN_DCBPABOCBHA_OFFSET UNITYSDK_OFFSET(0x18B71E50)
#define BMDDCGIDIBB_HOPKGOHPHHN_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0x18B717F0)
#define BMDDCGIDIBB_HOPKGOHPHHN_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0x18B716E0)
#define BMDDCGIDIBB_HOPKGOHPHHN_HPLBPNGEFFB_OFFSET UNITYSDK_OFFSET(0x18B71ED0)
#define BMDDCGIDIBB_HOPKGOHPHHN_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0x18B71C90)
#define BMDDCGIDIBB_HOPKGOHPHHN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x18B71120)
#define BMDDCGIDIBB_HOPKGOHPHHN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x18B71870)

inline static constexpr unsigned int BMDDCGIDIBB_HOPKGOHPHHN_TypeDefinitionIndex = 71135;

	class BMDDCGIDIBB_HOPKGOHPHHN : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::System::Boolean IOCJCHENMGP; // 0x18
		::System::Boolean CKAKDPAIHMA; // 0x19
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 PLPMPGPCEGP; // 0x1C
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
