#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define SR_FAE8451854D89B61_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EFD3DC0)
#define SR_FAE8451854D89B61_FORMAT_OFFSET UNITYSDK_OFFSET(0x1EFD3D70)
#define SR_FAE8451854D89B61_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1EFD3CC0)
#define SR_FAE8451854D89B61_GETSTRING_2_OFFSET UNITYSDK_OFFSET(0x1EFD3D60)
#define SR_FAE8451854D89B61_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1EFD3C10)

inline static constexpr unsigned int SR_FAE8451854D89B61_TypeDefinitionIndex = 2345;

	class SR_FAE8451854D89B61 : public ::System::Object
	{
	public:
		static ::System::String* GetString(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SR_FAE8451854D89B61_GETSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* GetString_1(::System::Globalization::CultureInfo* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::String*(*)(::System::Globalization::CultureInfo*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SR_FAE8451854D89B61_GETSTRING_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetString_2(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SR_FAE8451854D89B61_GETSTRING_2_OFFSET))(a1);
		}

		static ::System::String* Format(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_FAE8451854D89B61_FORMAT_OFFSET))(a1, a2);
		}

		static ::System::String* Format_1(::System::String* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_FAE8451854D89B61_FORMAT_1_OFFSET))(a1, a2, a3);
		}

	};
