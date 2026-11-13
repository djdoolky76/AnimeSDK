#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define PACHHKCNDNG_AHMCGDLMMLM_OFFSET UNITYSDK_OFFSET(0x18AD5200)
#define PACHHKCNDNG_JLPDLBCBJNN_OFFSET UNITYSDK_OFFSET(0x18AD5370)

inline static constexpr unsigned int PACHHKCNDNG_TypeDefinitionIndex = 53821;

	class PACHHKCNDNG : public ::System::Object
	{
	public:
		static ::System::String* AHMCGDLMMLM(::UnityEngine::Vector3 a1)
		{
			return ((::System::String*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PACHHKCNDNG_AHMCGDLMMLM_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 JLPDLBCBJNN(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::String*))((::PBYTE)hIl2Cpp + PACHHKCNDNG_JLPDLBCBJNN_OFFSET))(a1);
		}

	};
