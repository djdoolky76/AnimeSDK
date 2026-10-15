#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeObject.h"
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder; }
namespace UnityEngine::Formats::Alembic::Util { class ComponentCapturer; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_COMPONENTCAPTURER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F186210)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_COMPONENTCAPTURER_MARKFORCEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1F186190)

namespace UnityEngine::Formats::Alembic::Util
{
	class ComponentCapturer : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Util::AlembicRecorder* recorder; // 0x10
		::UnityEngine::Formats::Alembic::Util::ComponentCapturer* parent; // 0x18
		::System::Int32 timeSamplingIndex; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Formats::Alembic::Sdk::aeObject abcObject; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_COMPONENTCAPTURER_CTOR_OFFSET))(this);
		}

		::System::Void MarkForceInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_COMPONENTCAPTURER_MARKFORCEINVISIBLE_OFFSET))(this);
		}

	};
}
