#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMPPOPMFAEI.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AudioClip; }

#define MOLEMOLE_NOTESFX__CTOR_OFFSET UNITYSDK_OFFSET(0x13112D70)

namespace MoleMole
{
	inline static constexpr unsigned int NoteSfx_TypeDefinitionIndex = 69393;

	class NoteSfx : public ::System::Object
	{
	public:
		::HMPPOPMFAEI Type; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::AudioClip* Clip; // 0x18
		::UnityEngine::AudioClip* UpClip; // 0x20
		::UnityEngine::AudioClip* DownClip; // 0x28
		::System::Single Volume; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTESFX__CTOR_OFFSET))(this);
		}
	};
}
