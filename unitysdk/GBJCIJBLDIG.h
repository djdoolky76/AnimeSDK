#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define GBJCIJBLDIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15946420)

inline static constexpr unsigned int GBJCIJBLDIG_TypeDefinitionIndex = 59912;

	class GBJCIJBLDIG : public ::System::Object
	{
	public:
		::System::String* CONJJBPOJEE; // 0x10
		::UnityEngine::Transform* KAMHKPALGEG; // 0x18
		::UnityEngine::Animation* FOPCFKFAGPM; // 0x20
		::System::String* CNJCEOEHOIP; // 0x28
		::System::Boolean NFNOPGABILG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJCIJBLDIG_CTOR_OFFSET))(this);
		}

	};
