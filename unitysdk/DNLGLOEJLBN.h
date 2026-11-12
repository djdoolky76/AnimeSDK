#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADDNEJFFFJB;
namespace UnityEngine { class RectTransform; }

#define DNLGLOEJLBN_CFEEHOEFHHO_OFFSET UNITYSDK_OFFSET(0x12DD0C90)
#define DNLGLOEJLBN_IKNMBGBHGIJ_OFFSET UNITYSDK_OFFSET(0x12DD0DE0)

inline static constexpr unsigned int DNLGLOEJLBN_TypeDefinitionIndex = 70939;

	class DNLGLOEJLBN : public ::System::Object
	{
	public:
		static ::System::Boolean CFEEHOEFHHO(::ADDNEJFFFJB* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Boolean(*)(::ADDNEJFFFJB*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DNLGLOEJLBN_CFEEHOEFHHO_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IKNMBGBHGIJ(::ADDNEJFFFJB* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Boolean(*)(::ADDNEJFFFJB*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DNLGLOEJLBN_IKNMBGBHGIJ_OFFSET))(a1, a2, a3);
		}

	};
