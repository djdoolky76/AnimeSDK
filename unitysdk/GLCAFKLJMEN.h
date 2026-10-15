#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Mesh; }

#define GLCAFKLJMEN_CBOALGENLHN_OFFSET UNITYSDK_OFFSET(0x15AAAB90)
#define GLCAFKLJMEN_FFGCKLJLMOC_OFFSET UNITYSDK_OFFSET(0x15AACB60)
#define GLCAFKLJMEN_ICCMPHPFDNE_OFFSET UNITYSDK_OFFSET(0x15AABCE0)

inline static constexpr unsigned int GLCAFKLJMEN_TypeDefinitionIndex = 47699;

	class GLCAFKLJMEN : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh* CBOALGENLHN()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + GLCAFKLJMEN_CBOALGENLHN_OFFSET))();
		}

		static ::UnityEngine::Mesh* ICCMPHPFDNE()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + GLCAFKLJMEN_ICCMPHPFDNE_OFFSET))();
		}

		static ::UnityEngine::Vector3 FFGCKLJLMOC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GLCAFKLJMEN_FFGCKLJLMOC_OFFSET))(a1, a2, a3);
		}

	};
