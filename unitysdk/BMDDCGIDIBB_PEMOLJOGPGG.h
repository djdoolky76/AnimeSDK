#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMDDCGIDIBB_DIMAABDMJBL;

#define BMDDCGIDIBB_PEMOLJOGPGG_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBD9E030)
#define BMDDCGIDIBB_PEMOLJOGPGG_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBD9DA40)
#define BMDDCGIDIBB_PEMOLJOGPGG_CTOR_OFFSET UNITYSDK_OFFSET(0xBD9E1C0)
#define BMDDCGIDIBB_PEMOLJOGPGG_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xBD9E040)
#define BMDDCGIDIBB_PEMOLJOGPGG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBD9D950)
#define BMDDCGIDIBB_PEMOLJOGPGG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD9DA90)

inline static constexpr unsigned int BMDDCGIDIBB_PEMOLJOGPGG_TypeDefinitionIndex = 69177;

	class BMDDCGIDIBB_PEMOLJOGPGG : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PEMOLJOGPGG_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PEMOLJOGPGG_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PEMOLJOGPGG_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PEMOLJOGPGG_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EPedestrianV2MotionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PEMOLJOGPGG_BGDKFHEBDFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PEMOLJOGPGG_IAKCEPJGNJC_OFFSET))(this);
		}

	};
