#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGKIKKOLLFA;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define JLLLBIBKBHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB24FB00)

	class JLLLBIBKBHJ : public ::System::Object
	{
	public:
		::UnityEngine::Transform* MJPMAPNJMNE; // 0x10
		::HGKIKKOLLFA* IDJEEOFELEJ; // 0x18
		::UnityEngine::UI::Text* IABIKOKLBLJ; // 0x20
		::System::Boolean LMJDNIGEHCO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLLBIBKBHJ_CTOR_OFFSET))(this);
		}

	};
