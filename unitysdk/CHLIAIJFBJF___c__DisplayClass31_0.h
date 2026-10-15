#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHLIAIJFBJF;
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CHLIAIJFBJF___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF5BCE0)
#define CHLIAIJFBJF___C__DISPLAYCLASS31_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xCF5F530)

inline static constexpr unsigned int CHLIAIJFBJF___c__DisplayClass31_0_TypeDefinitionIndex = 73894;

	class CHLIAIJFBJF___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* parent; // 0x10
		::CHLIAIJFBJF* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoad_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF___C__DISPLAYCLASS31_0__ASYNCLOAD_B__0_OFFSET))(this, a1);
		}

	};
