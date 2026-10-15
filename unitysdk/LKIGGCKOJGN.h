#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LKIGGCKOJGN_INBMMHFFHEC_OFFSET UNITYSDK_OFFSET(0xB748CF0)

inline static constexpr unsigned int LKIGGCKOJGN_TypeDefinitionIndex = 60115;

	class LKIGGCKOJGN : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 INBMMHFFHEC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LKIGGCKOJGN_INBMMHFFHEC_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
