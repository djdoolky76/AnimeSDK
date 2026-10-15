#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAHOFEAIMFO.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MLBIMOIEBGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A51E0)
#define MLBIMOIEBGC_ELINOHABNCJ_OFFSET UNITYSDK_OFFSET(0xB9A51F0)

	class MLBIMOIEBGC : public ::AAHOFEAIMFO
	{
	public:
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MLBIMOIEBGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ELINOHABNCJ(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MLBIMOIEBGC_ELINOHABNCJ_OFFSET))(this, a1);
		}

	};
