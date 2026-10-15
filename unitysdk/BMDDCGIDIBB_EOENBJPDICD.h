#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMDDCGIDIBB_DIMAABDMJBL;

#define BMDDCGIDIBB_EOENBJPDICD_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBA93E30)
#define BMDDCGIDIBB_EOENBJPDICD_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBA93D30)
#define BMDDCGIDIBB_EOENBJPDICD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA8AB20)
#define BMDDCGIDIBB_EOENBJPDICD_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xBA93E40)
#define BMDDCGIDIBB_EOENBJPDICD_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBA93B70)
#define BMDDCGIDIBB_EOENBJPDICD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA93DC0)

inline static constexpr unsigned int BMDDCGIDIBB_EOENBJPDICD_TypeDefinitionIndex = 69187;

	class BMDDCGIDIBB_EOENBJPDICD : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_EOENBJPDICD_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_EOENBJPDICD_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_EOENBJPDICD_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_EOENBJPDICD_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EPedestrianV2MotionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_EOENBJPDICD_BGDKFHEBDFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_EOENBJPDICD_IAKCEPJGNJC_OFFSET))(this);
		}

	};
