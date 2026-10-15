#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMDDCGIDIBB_DIMAABDMJBL;

#define BMDDCGIDIBB_DPMBBJEGAOH_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBA939D0)
#define BMDDCGIDIBB_DPMBBJEGAOH_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBA93730)
#define BMDDCGIDIBB_DPMBBJEGAOH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA8AB00)
#define BMDDCGIDIBB_DPMBBJEGAOH_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xBA939E0)
#define BMDDCGIDIBB_DPMBBJEGAOH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBA930C0)
#define BMDDCGIDIBB_DPMBBJEGAOH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA937C0)

inline static constexpr unsigned int BMDDCGIDIBB_DPMBBJEGAOH_TypeDefinitionIndex = 69178;

	class BMDDCGIDIBB_DPMBBJEGAOH : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_DPMBBJEGAOH_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_DPMBBJEGAOH_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_DPMBBJEGAOH_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_DPMBBJEGAOH_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EPedestrianV2MotionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_DPMBBJEGAOH_BGDKFHEBDFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_DPMBBJEGAOH_IAKCEPJGNJC_OFFSET))(this);
		}

	};
