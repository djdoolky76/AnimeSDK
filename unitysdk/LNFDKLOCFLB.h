#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Camera; }

#define LNFDKLOCFLB_HOGBJMPBIFA_OFFSET UNITYSDK_OFFSET(0xB7DD140)

	class LNFDKLOCFLB : public ::System::Object
	{
	public:
		static ::System::Boolean HOGBJMPBIFA(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LNFDKLOCFLB_HOGBJMPBIFA_OFFSET))(a1, a2);
		}

	};
