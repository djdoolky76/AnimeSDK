#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define SR_0223C77B87887F9F_FORMAT_OFFSET UNITYSDK_OFFSET(0x1EE695B0)

inline static constexpr unsigned int SR_0223C77B87887F9F_TypeDefinitionIndex = 3834;

	class SR_0223C77B87887F9F : public ::System::Object
	{
	public:
		static ::System::String* Format(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_0223C77B87887F9F_FORMAT_OFFSET))(a1, a2);
		}

	};
