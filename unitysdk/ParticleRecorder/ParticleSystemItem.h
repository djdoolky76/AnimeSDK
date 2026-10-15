#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ParticleRecorder { class ParticleClip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARTICLERECORDER_PARTICLESYSTEMITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEAB80)

namespace ParticleRecorder
{
	class ParticleSystemItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ParticleRecorder::ParticleClip*>* clips0; // 0x10
		::System::Collections::Generic::List_1<::ParticleRecorder::ParticleClip*>* clips1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLERECORDER_PARTICLESYSTEMITEM_CTOR_OFFSET))(this);
		}

	};
}
