#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DPJKIHNHLNO_AEBCGOOEMLG_OFFSET UNITYSDK_OFFSET(0x1DD38220)
#define DPJKIHNHLNO_GCPFJFHGCJA_OFFSET UNITYSDK_OFFSET(0x1DD37A80)
#define DPJKIHNHLNO_JNDOGMFFOIM_OFFSET UNITYSDK_OFFSET(0x1DD37BC0)
#define DPJKIHNHLNO_MKBMMDGMLGF_OFFSET UNITYSDK_OFFSET(0x1DD38280)

inline static constexpr unsigned int DPJKIHNHLNO_TypeDefinitionIndex = 6409;

	class DPJKIHNHLNO : public ::System::Object
	{
	public:
		static ::System::Void GCPFJFHGCJA(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DPJKIHNHLNO_GCPFJFHGCJA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::UnityEngine::Bounds JNDOGMFFOIM(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + DPJKIHNHLNO_JNDOGMFFOIM_OFFSET))(a1, a2);
		}

		static ::System::Boolean AEBCGOOEMLG(::UnityEngine::Bounds a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + DPJKIHNHLNO_AEBCGOOEMLG_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect MKBMMDGMLGF(::UnityEngine::Bounds a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + DPJKIHNHLNO_MKBMMDGMLGF_OFFSET))(a1);
		}

	};
