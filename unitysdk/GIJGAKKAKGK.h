#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GIJGAKKAKGK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A32B50)
#define GIJGAKKAKGK_FBEFKEMJHGG_OFFSET UNITYSDK_OFFSET(0x15A327D0)

inline static constexpr unsigned int GIJGAKKAKGK_TypeDefinitionIndex = 74120;

	class GIJGAKKAKGK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJGAKKAKGK_CTOR_OFFSET))(this);
		}

		static ::System::Boolean FBEFKEMJHGG(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GIJGAKKAKGK_FBEFKEMJHGG_OFFSET))(a1, a2, a3, a4);
		}

	};
