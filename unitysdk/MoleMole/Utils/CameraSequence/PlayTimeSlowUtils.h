#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJNMJAPABKB;
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CLEARTIMESLOWKEY_OFFSET UNITYSDK_OFFSET(0x13C0EC10)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_GETTIMESLOWKEY_OFFSET UNITYSDK_OFFSET(0x13C0ED40)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_INVOKETIMESLOWKEY_OFFSET UNITYSDK_OFFSET(0x13C0E330)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_PROCESSMAXSTARTTIME_OFFSET UNITYSDK_OFFSET(0x13C0E520)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int PlayTimeSlowUtils_TypeDefinitionIndex = 92807;

	class PlayTimeSlowUtils : public ::System::Object
	{
	public:
		static ::System::Void InvokeTimeSlowKey(::System::String* timeSlowKey, ::System::Single minStartTime, ::System::Single maxStartTime)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_INVOKETIMESLOWKEY_OFFSET))(timeSlowKey, minStartTime, maxStartTime);
		}

		static ::System::Void ProcessMaxStartTime(::NJNMJAPABKB* timeSlowData, ::System::Single minStartTime, ::System::Single maxStartTime)
		{
			return ((::System::Void(*)(::NJNMJAPABKB*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_PROCESSMAXSTARTTIME_OFFSET))(timeSlowData, minStartTime, maxStartTime);
		}

		static ::System::Void ClearTimeSlowKey(::System::String* timeSlowKey)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CLEARTIMESLOWKEY_OFFSET))(timeSlowKey);
		}

		static ::System::Boolean GetTimeSlowKey(::System::String*& timeSlowKey)
		{
			return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_GETTIMESLOWKEY_OFFSET))(timeSlowKey);
		}
	};
}
