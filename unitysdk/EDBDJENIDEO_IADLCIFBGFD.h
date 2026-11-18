#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define EDBDJENIDEO_IADLCIFBGFD_JIBAKKNBNAN_OFFSET UNITYSDK_OFFSET(0x14142670)
#define EDBDJENIDEO_IADLCIFBGFD__CTOR_OFFSET UNITYSDK_OFFSET(0x14142660)

inline static constexpr unsigned int EDBDJENIDEO_IADLCIFBGFD_TypeDefinitionIndex = 90350;

class EDBDJENIDEO_IADLCIFBGFD : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* KFKLBNDJHFF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_IADLCIFBGFD__CTOR_OFFSET))(this);
	}

	::System::Void JIBAKKNBNAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_IADLCIFBGFD_JIBAKKNBNAN_OFFSET))(this);
	}
};
