#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AGJFJGEMIPB;
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_LEVELDATAACCESSOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x71E860)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_LEVELDATAACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int PlayTimeSlowUtils_LevelDataAccessor_TypeDefinitionIndex = 92809;

	struct alignas(8) PlayTimeSlowUtils_LevelDataAccessor
	{
		::System::String* Result; // 0x10

		::System::Void _ctor(::System::String* fallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_LEVELDATAACCESSOR__CTOR_OFFSET))(this, fallback);
		}

		::System::Void Invoke(::AGJFJGEMIPB* levelDataComponent)
		{
			return ((::System::Void(*)(::PVOID, ::AGJFJGEMIPB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_LEVELDATAACCESSOR_INVOKE_OFFSET))(this, levelDataComponent);
		}
	};
}
