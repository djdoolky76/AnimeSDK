#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AMEJOLGMDJC_DAHOKFNGLCO_OFFSET UNITYSDK_OFFSET(0x1557C700)
#define AMEJOLGMDJC_ICNHJNJFNBN_OFFSET UNITYSDK_OFFSET(0x1557C600)
#define AMEJOLGMDJC_KJPBMOPALOM_1_OFFSET UNITYSDK_OFFSET(0x1557C360)
#define AMEJOLGMDJC_KJPBMOPALOM_OFFSET UNITYSDK_OFFSET(0x1557C100)

	class AMEJOLGMDJC : public ::System::Object
	{
	public:
		static ::System::Boolean KJPBMOPALOM(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMEJOLGMDJC_KJPBMOPALOM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean KJPBMOPALOM_1(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AMEJOLGMDJC_KJPBMOPALOM_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector2 ICNHJNJFNBN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMEJOLGMDJC_ICNHJNJFNBN_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 DAHOKFNGLCO(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMEJOLGMDJC_DAHOKFNGLCO_OFFSET))(a1, a2, a3, a4);
		}

	};
