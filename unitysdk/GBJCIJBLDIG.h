#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define GBJCIJBLDIG_CTOR_OFFSET UNITYSDK_OFFSET(0x159513B0)

	class GBJCIJBLDIG : public ::System::Object
	{
	public:
		::UnityEngine::Transform* KAMHKPALGEG; // 0x10
		::UnityEngine::Animation* FOPCFKFAGPM; // 0x18
		::System::String* CONJJBPOJEE; // 0x20
		::System::String* CNJCEOEHOIP; // 0x28
		::System::Boolean NFNOPGABILG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJCIJBLDIG_CTOR_OFFSET))(this);
		}

	};
