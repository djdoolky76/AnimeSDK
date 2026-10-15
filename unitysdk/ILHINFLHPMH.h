#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }

#define ILHINFLHPMH_AJBOCDAFALJ_1_OFFSET UNITYSDK_OFFSET(0x1EBC70B0)
#define ILHINFLHPMH_AJBOCDAFALJ_2_OFFSET UNITYSDK_OFFSET(0x1EBC7500)
#define ILHINFLHPMH_AJBOCDAFALJ_3_OFFSET UNITYSDK_OFFSET(0x1EBC78D0)
#define ILHINFLHPMH_AJBOCDAFALJ_OFFSET UNITYSDK_OFFSET(0x1EBC6DD0)
#define ILHINFLHPMH_BMJDDDPKOGN_OFFSET UNITYSDK_OFFSET(0x1EBC6DC0)

inline static constexpr unsigned int ILHINFLHPMH_TypeDefinitionIndex = 44016;

	class ILHINFLHPMH : public ::System::Object
	{
	public:
		static ::System::Void BMJDDDPKOGN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILHINFLHPMH_BMJDDDPKOGN_OFFSET))();
		}

		static ::UnityEngine::Texture2D* AJBOCDAFALJ(::UnityEngine::Color a1, ::UnityEngine::Texture2D* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Color, ::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + ILHINFLHPMH_AJBOCDAFALJ_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Texture2D* AJBOCDAFALJ_1(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::UnityEngine::Texture2D* a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + ILHINFLHPMH_AJBOCDAFALJ_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Texture2D* AJBOCDAFALJ_2(::UnityEngine::Gradient* a1, ::UnityEngine::Texture2D* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Gradient*, ::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + ILHINFLHPMH_AJBOCDAFALJ_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Texture2D* AJBOCDAFALJ_3(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2, ::UnityEngine::Texture2D* a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + ILHINFLHPMH_AJBOCDAFALJ_3_OFFSET))(a1, a2, a3, a4);
		}

	};
