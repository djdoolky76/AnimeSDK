#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePointsData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1F184930)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F184CC0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F184C80)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1F184820)

namespace UnityEngine::Formats::Alembic::Util
{
	class AlembicRecorder_ParticleCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::Il2CppArray<::System::Object*>* m_bufParticles; // 0x30
		::UnityEngine::ParticleSystem* m_target; // 0x38
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* m_bufPoints; // 0x40
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Quaternion>* m_bufRotations; // 0x48
		::UnityEngine::Formats::Alembic::Sdk::aePointsData m_data; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_CTOR_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_SETUP_OFFSET))(this, a1);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_CAPTURE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_DISPOSE_OFFSET))(this);
		}

	};
}
