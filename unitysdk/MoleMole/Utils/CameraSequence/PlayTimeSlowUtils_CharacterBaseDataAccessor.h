#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class DIAEPBNFKBO;
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CHARACTERBASEDATAACCESSOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x6CEBA0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CHARACTERBASEDATAACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int PlayTimeSlowUtils_CharacterBaseDataAccessor_TypeDefinitionIndex = 92808;

	struct alignas(8) PlayTimeSlowUtils_CharacterBaseDataAccessor
	{
		::System::String* Result; // 0x10
		::System::String* _animationEventId; // 0x18

		::System::Void _ctor(::System::String* fallback, ::System::String* animationEventId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CHARACTERBASEDATAACCESSOR__CTOR_OFFSET))(this, fallback, animationEventId);
		}

		::System::Void Invoke(::DIAEPBNFKBO* component)
		{
			return ((::System::Void(*)(::PVOID, ::DIAEPBNFKBO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CHARACTERBASEDATAACCESSOR_INVOKE_OFFSET))(this, component);
		}
	};
}
