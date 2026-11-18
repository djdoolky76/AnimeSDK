#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEST_MATH_EMPTYLOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x2006C2A0)
#define DEST_MATH_EMPTYLOGGER_LOGINFO_OFFSET UNITYSDK_OFFSET(0x2006C280)
#define DEST_MATH_EMPTYLOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x2006C290)
#define DEST_MATH_EMPTYLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x2006C2B0)

namespace Dest::Math
{
	inline static constexpr unsigned int EmptyLogger_TypeDefinitionIndex = 34970;

	class EmptyLogger : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_EMPTYLOGGER__CTOR_OFFSET))(this);
		}

		::System::Void LogInfo(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_EMPTYLOGGER_LOGINFO_OFFSET))(this, value);
		}

		::System::Void LogWarning(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_EMPTYLOGGER_LOGWARNING_OFFSET))(this, value);
		}

		::System::Void LogError(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_EMPTYLOGGER_LOGERROR_OFFSET))(this, value);
		}
	};
}
