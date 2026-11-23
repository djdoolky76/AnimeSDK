#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E79D6DCE4DE1BCF3.h"

namespace System { class String; }
namespace UnityEngine { class E58549530A18BC6B_AAD1F36E292A1878; }
namespace UnityEngine { class E58549530A18BC6B_AC1D0E20201A2755; }
namespace UnityEngine { class TerrainData; }

#define UNITYENGINE_E58549530A18BC6B_BB74758EA592C7F1_OFFSET UNITYSDK_OFFSET(0x41C46E0)
#define UNITYENGINE_E58549530A18BC6B_F7B976125F73675B_OFFSET UNITYSDK_OFFSET(0x41C47F0)

namespace UnityEngine
{
	inline static constexpr unsigned int E58549530A18BC6B_TypeDefinitionIndex = 21044;

	class E58549530A18BC6B : public ::System::Object
	{
	public:
		static ::UnityEngine::E58549530A18BC6B_AAD1F36E292A1878** StaticGet_E63DE6926A3E8328()
		{
			return (::UnityEngine::E58549530A18BC6B_AAD1F36E292A1878**)Il2CppClass::FromTypeDefinitionIndex(E58549530A18BC6B_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::E58549530A18BC6B_AC1D0E20201A2755** StaticGet_F0D493720D3E824F()
		{
			return (::UnityEngine::E58549530A18BC6B_AC1D0E20201A2755**)Il2CppClass::FromTypeDefinitionIndex(E58549530A18BC6B_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void F7B976125F73675B(::UnityEngine::TerrainData* FC041CDE503C256C, ::System::String* F5B0B069E93658C9, ::UnityEngine::E79D6DCE4DE1BCF3 BE848780048DEBA8, ::System::Boolean F2BD4BA571E58658)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*, ::System::String*, ::UnityEngine::E79D6DCE4DE1BCF3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_E58549530A18BC6B_F7B976125F73675B_OFFSET))(FC041CDE503C256C, F5B0B069E93658C9, BE848780048DEBA8, F2BD4BA571E58658);
		}

		static ::System::Void BB74758EA592C7F1(::UnityEngine::TerrainData* FC041CDE503C256C, ::UnityEngine::E79D6DCE4DE1BCF3 B3E0BACC4E9250E7, ::System::Boolean F2BD4BA571E58658)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*, ::UnityEngine::E79D6DCE4DE1BCF3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_E58549530A18BC6B_BB74758EA592C7F1_OFFSET))(FC041CDE503C256C, B3E0BACC4E9250E7, F2BD4BA571E58658);
		}
	};
}
