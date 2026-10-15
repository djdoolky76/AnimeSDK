#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BJIACBNKCCJ;

#define ACFJLOONPMA_GFCMFODMAPF_OFFSET UNITYSDK_OFFSET(0xB11BC40)
#define ACFJLOONPMA_PLJCOHFLCKA_OFFSET UNITYSDK_OFFSET(0xB11C000)

inline static constexpr unsigned int ACFJLOONPMA_TypeDefinitionIndex = 75924;

	class ACFJLOONPMA : public ::System::Object
	{
	public:
		static ::System::Void GFCMFODMAPF(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Void(*)(::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ACFJLOONPMA_GFCMFODMAPF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PLJCOHFLCKA(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Void(*)(::BJIACBNKCCJ*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ACFJLOONPMA_PLJCOHFLCKA_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
