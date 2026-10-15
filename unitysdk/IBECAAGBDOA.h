#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAHOFEAIMFO.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define IBECAAGBDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15E2C5C0)
#define IBECAAGBDOA_ELINOHABNCJ_OFFSET UNITYSDK_OFFSET(0x15E2C5D0)

	class IBECAAGBDOA : public ::AAHOFEAIMFO
	{
	public:
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IBECAAGBDOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ELINOHABNCJ(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + IBECAAGBDOA_ELINOHABNCJ_OFFSET))(this, a1);
		}

	};
