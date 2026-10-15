#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define NEHKGIOLIFA_CNPGFLLNLNK_OFFSET UNITYSDK_OFFSET(0x1DD7EDA0)
#define NEHKGIOLIFA_JJPEKBAJKEL_OFFSET UNITYSDK_OFFSET(0x1DD7EDF0)
#define NEHKGIOLIFA_JNBKLKCHKIG_OFFSET UNITYSDK_OFFSET(0x1DD7ED20)
#define NEHKGIOLIFA_JNDOGMFFOIM_1_OFFSET UNITYSDK_OFFSET(0x1DD7EF30)
#define NEHKGIOLIFA_JNDOGMFFOIM_OFFSET UNITYSDK_OFFSET(0x1DD7EE20)
#define NEHKGIOLIFA_LIJEDGNCNMM_1_OFFSET UNITYSDK_OFFSET(0x1DD7F1D0)
#define NEHKGIOLIFA_LIJEDGNCNMM_OFFSET UNITYSDK_OFFSET(0x1DD7F030)

inline static constexpr unsigned int NEHKGIOLIFA_TypeDefinitionIndex = 6322;

	class NEHKGIOLIFA : public ::System::Object
	{
	public:
		static ::UnityEngine::Rect JNBKLKCHKIG(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NEHKGIOLIFA_JNBKLKCHKIG_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 CNPGFLLNLNK(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NEHKGIOLIFA_CNPGFLLNLNK_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect JJPEKBAJKEL(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NEHKGIOLIFA_JJPEKBAJKEL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Rect JNDOGMFFOIM(::UnityEngine::Rect a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + NEHKGIOLIFA_JNDOGMFFOIM_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect JNDOGMFFOIM_1(::UnityEngine::Rect a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NEHKGIOLIFA_JNDOGMFFOIM_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect LIJEDGNCNMM(::UnityEngine::Rect a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + NEHKGIOLIFA_LIJEDGNCNMM_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect LIJEDGNCNMM_1(::UnityEngine::Rect a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NEHKGIOLIFA_LIJEDGNCNMM_1_OFFSET))(a1, a2);
		}

	};
