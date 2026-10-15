#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BKCJLICDPMD;
class KDMEFGANLKI;

#define CDOMNOHBJGD_BDGHMAJNEIN_OFFSET UNITYSDK_OFFSET(0xC76F4D0)
#define CDOMNOHBJGD_DIIPCFHLLHF_1_OFFSET UNITYSDK_OFFSET(0xC76F6C0)
#define CDOMNOHBJGD_DIIPCFHLLHF_OFFSET UNITYSDK_OFFSET(0xC76F600)
#define CDOMNOHBJGD_KKNHHLEHDPK_1_OFFSET UNITYSDK_OFFSET(0xC76F320)
#define CDOMNOHBJGD_KKNHHLEHDPK_OFFSET UNITYSDK_OFFSET(0xC76F280)
#define CDOMNOHBJGD_LHJLLAHDCJN_OFFSET UNITYSDK_OFFSET(0xC76F560)

inline static constexpr unsigned int CDOMNOHBJGD_TypeDefinitionIndex = 68010;

	class CDOMNOHBJGD : public ::System::Object
	{
	public:
		static ::KDMEFGANLKI* KKNHHLEHDPK(::UnityEngine::Vector3 a1)
		{
			return ((::KDMEFGANLKI*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CDOMNOHBJGD_KKNHHLEHDPK_OFFSET))(a1);
		}

		static ::KDMEFGANLKI* KKNHHLEHDPK_1(::UnityEngine::Quaternion a1)
		{
			return ((::KDMEFGANLKI*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CDOMNOHBJGD_KKNHHLEHDPK_1_OFFSET))(a1);
		}

		static ::BKCJLICDPMD* BDGHMAJNEIN(::UnityEngine::Quaternion a1)
		{
			return ((::BKCJLICDPMD*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CDOMNOHBJGD_BDGHMAJNEIN_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 LHJLLAHDCJN(::KDMEFGANLKI* a1)
		{
			return ((::UnityEngine::Vector3(*)(::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + CDOMNOHBJGD_LHJLLAHDCJN_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion DIIPCFHLLHF(::KDMEFGANLKI* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + CDOMNOHBJGD_DIIPCFHLLHF_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion DIIPCFHLLHF_1(::BKCJLICDPMD* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::BKCJLICDPMD*))((::PBYTE)hIl2Cpp + CDOMNOHBJGD_DIIPCFHLLHF_1_OFFSET))(a1);
		}

	};
