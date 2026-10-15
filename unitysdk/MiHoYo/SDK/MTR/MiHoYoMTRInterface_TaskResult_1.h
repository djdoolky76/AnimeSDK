#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_TaskResult_1_TypeDefinitionIndex = 46680;

	template <typename T>
	class MiHoYoMTRInterface_TaskResult_1 : public ::System::Object
	{
	public:
		::System::Int32 m_nTaskID; // 0x0
		::System::String* m_strResult; // 0x0
		T m_callback; // 0x0
	};
}
