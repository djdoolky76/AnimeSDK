#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define SR_713DC5CDD546C50C_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1ED88300)
#define SR_713DC5CDD546C50C_FORMAT_2_OFFSET UNITYSDK_OFFSET(0x1ED88360)
#define SR_713DC5CDD546C50C_FORMAT_OFFSET UNITYSDK_OFFSET(0x1ED882B0)
#define SR_713DC5CDD546C50C_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1ED882A0)

inline static constexpr unsigned int SR_713DC5CDD546C50C_TypeDefinitionIndex = 3094;

	class SR_713DC5CDD546C50C : public ::System::Object
	{
	public:
		static ::System::String* GetString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SR_713DC5CDD546C50C_GETSTRING_OFFSET))(a1);
		}

		static ::System::String* Format(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_713DC5CDD546C50C_FORMAT_OFFSET))(a1, a2);
		}

		static ::System::String* Format_1(::System::String* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_713DC5CDD546C50C_FORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Format_2(::System::String* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_713DC5CDD546C50C_FORMAT_2_OFFSET))(a1, a2, a3, a4);
		}

	};
