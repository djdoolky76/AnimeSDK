#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFDIEEHGJED.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGBKFNLMGI_OOCDPIEGGEA_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC9B90)

inline static constexpr unsigned int AKGBKFNLMGI_OOCDPIEGGEA_TypeDefinitionIndex = 77482;

	class AKGBKFNLMGI_OOCDPIEGGEA : public ::DFDIEEHGJED
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* DOPPOJEBJGI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGBKFNLMGI_OOCDPIEGGEA_CTOR_OFFSET))(this);
		}

	};
