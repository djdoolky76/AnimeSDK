#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_TranslateErrorCode_TypeDefinitionIndex = 35282;

	class MHYSDKC_TranslateErrorCode : public ::System::Object
	{
	public:
		// static const ::System::Int32 RET_SUCCESS = 0x0; // 0x0
		// static const ::System::Int32 RET_FAILED_THIRD_PARTY_ERROR = -0x1; // 0x0
		// static const ::System::Int32 RET_FAILED_SERVER_ERROR = -0xA; // 0x0
		// static const ::System::Int32 RET_FAILED_PARAM_INVALID = -0xB; // 0x0
		// static const ::System::Int32 RET_FAILED_EXCEPTION = -0xD; // 0x0
		// static const ::System::Int32 RET_FAILED_NOT_INITIALIZED = -0xE; // 0x0
		// static const ::System::Int32 RET_FAILED_CONTEXT_NOT_FOUND = -0x11; // 0x0
		// static const ::System::Int32 RET_FAILED_TIMEOUT = -0x12; // 0x0
	};
}
