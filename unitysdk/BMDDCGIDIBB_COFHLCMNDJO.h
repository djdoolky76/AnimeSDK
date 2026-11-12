#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDDCGIDIBB_DIMAABDMJBL.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMDDCGIDIBB_DIMAABDMJBL;
class EFKFAPMPJDI;

#define BMDDCGIDIBB_COFHLCMNDJO_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xC425600)
#define BMDDCGIDIBB_COFHLCMNDJO_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC424850)
#define BMDDCGIDIBB_COFHLCMNDJO_CTOR_OFFSET UNITYSDK_OFFSET(0xC41D110)
#define BMDDCGIDIBB_COFHLCMNDJO_DCBPABOCBHA_OFFSET UNITYSDK_OFFSET(0xC425670)
#define BMDDCGIDIBB_COFHLCMNDJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC423170)
#define BMDDCGIDIBB_COFHLCMNDJO_EELJBENEJJE_OFFSET UNITYSDK_OFFSET(0xC425560)
#define BMDDCGIDIBB_COFHLCMNDJO_EIJPOIHEOMC_OFFSET UNITYSDK_OFFSET(0xC424980)
#define BMDDCGIDIBB_COFHLCMNDJO_HDANFPANCNF_OFFSET UNITYSDK_OFFSET(0xC423250)
#define BMDDCGIDIBB_COFHLCMNDJO_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0xC424F80)
#define BMDDCGIDIBB_COFHLCMNDJO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC4233B0)
#define BMDDCGIDIBB_COFHLCMNDJO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC424A00)

inline static constexpr unsigned int BMDDCGIDIBB_COFHLCMNDJO_TypeDefinitionIndex = 71134;

	class BMDDCGIDIBB_COFHLCMNDJO : public ::BMDDCGIDIBB_DIMAABDMJBL
	{
	public:
		::System::Boolean MLKDAICGNDO; // 0x18
		::System::Boolean PIOAJDKBAML; // 0x19
		::System::Boolean KNOBKBCODLO; // 0x1A
		::System::Boolean INJJGMIGFFD; // 0x1B
		::JOGBIBJLPJB AGBACLADKJH; // 0x1C
		::System::Single EGJGFEBFIBG; // 0x24
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

		::System::Nullable_1<::UnityEngine::Vector3> DCBPABOCBHA()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COFHLCMNDJO_DCBPABOCBHA_OFFSET))(this);
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
