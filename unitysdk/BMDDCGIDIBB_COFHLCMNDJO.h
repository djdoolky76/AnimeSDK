#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMDDCGIDIBB_DIMAABDMJBL;
class EFKFAPMPJDI;
namespace System { class Nullable; }

#define BMDDCGIDIBB_COFHLCMNDJO_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBA92E10)
#define BMDDCGIDIBB_COFHLCMNDJO_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBA92050)
#define BMDDCGIDIBB_COFHLCMNDJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA8AB10)
#define BMDDCGIDIBB_COFHLCMNDJO_DCBPABOCBHA_OFFSET UNITYSDK_OFFSET(0xBA92E80)
#define BMDDCGIDIBB_COFHLCMNDJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA90870)
#define BMDDCGIDIBB_COFHLCMNDJO_EELJBENEJJE_OFFSET UNITYSDK_OFFSET(0xBA92D70)
#define BMDDCGIDIBB_COFHLCMNDJO_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0xBA92180)
#define BMDDCGIDIBB_COFHLCMNDJO_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0xBA90950)
#define BMDDCGIDIBB_COFHLCMNDJO_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xBA92780)
#define BMDDCGIDIBB_COFHLCMNDJO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBA90AB0)
#define BMDDCGIDIBB_COFHLCMNDJO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA92200)

inline static constexpr unsigned int BMDDCGIDIBB_COFHLCMNDJO_TypeDefinitionIndex = 69181;

	class BMDDCGIDIBB_COFHLCMNDJO : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::System::Single EGJGFEBFIBG; // 0x18
		::System::Boolean MLKDAICGNDO; // 0x1C
		::System::Boolean PIOAJDKBAML; // 0x1D
		::System::Boolean INJJGMIGFFD; // 0x1E
		::System::Boolean KNOBKBCODLO; // 0x1F
		::JOGBIBJLPJB AGBACLADKJH; // 0x20
		// static const ::System::Object EKJJNBIKMAL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::BMDDCGIDIBB_DIMAABDMJBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDDCGIDIBB_DIMAABDMJBL*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void EELJBENEJJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_EELJBENEJJE_OFFSET))(this);
		}

		::RPG::Client::EPedestrianV2MotionState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_BGDKFHEBDFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_IAKCEPJGNJC_OFFSET))(this);
		}

		::System::Nullable* DCBPABOCBHA()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_DCBPABOCBHA_OFFSET))(this);
		}

		::EFKFAPMPJDI* HDANFPANCNF()
		{
			return ((::EFKFAPMPJDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_HDANFPANCNF_OFFSET))(this);
		}

		::System::Void EIJPOIHEOMC(::EFKFAPMPJDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFKFAPMPJDI*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_EIJPOIHEOMC_OFFSET))(this, a1);
		}

	};
