#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOPFDKJOBIO;
namespace System { class String; }

#define HPHEFKBGFOF_PCAHDDGPMOA_OFFSET UNITYSDK_OFFSET(0x15DC7C50)

inline static constexpr unsigned int HPHEFKBGFOF_TypeDefinitionIndex = 81091;

	class HPHEFKBGFOF : public ::System::Object
	{
	public:
		static ::System::String* PCAHDDGPMOA(::EOPFDKJOBIO* a1)
		{
			return ((::System::String*(*)(::EOPFDKJOBIO*))((::PBYTE)hIl2Cpp + HPHEFKBGFOF_PCAHDDGPMOA_OFFSET))(a1);
		}

	};
