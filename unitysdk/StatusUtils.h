#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/AI/PathQueryStatus.h"

#define STATUSUTILS_ISFAILURE_OFFSET UNITYSDK_OFFSET(0x1EBC6370)
#define STATUSUTILS_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1EBC63B0)
#define STATUSUTILS_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1EBC6320)

inline static constexpr unsigned int StatusUtils_TypeDefinitionIndex = 67555;

class StatusUtils : public ::System::Object
{
public:
	static ::System::Boolean IsSuccess(::UnityEngine::Experimental::AI::PathQueryStatus status)
	{
		return ((::System::Boolean(*)(::UnityEngine::Experimental::AI::PathQueryStatus))((::PBYTE)hIl2Cpp + STATUSUTILS_ISSUCCESS_OFFSET))(status);
	}

	static ::System::Boolean IsFailure(::UnityEngine::Experimental::AI::PathQueryStatus status)
	{
		return ((::System::Boolean(*)(::UnityEngine::Experimental::AI::PathQueryStatus))((::PBYTE)hIl2Cpp + STATUSUTILS_ISFAILURE_OFFSET))(status);
	}

	static ::System::Boolean IsInProgress(::UnityEngine::Experimental::AI::PathQueryStatus status)
	{
		return ((::System::Boolean(*)(::UnityEngine::Experimental::AI::PathQueryStatus))((::PBYTE)hIl2Cpp + STATUSUTILS_ISINPROGRESS_OFFSET))(status);
	}
};
