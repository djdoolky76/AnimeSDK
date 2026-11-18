#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHMPFHBIECA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x10F31080)
#define EHMPFHBIECA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F31030)

inline static constexpr unsigned int EHMPFHBIECA_TypeDefinitionIndex = 46573;

class EHMPFHBIECA : public ::System::EventArgs
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JAFFBFBHMKJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMPFHBIECA__CTOR_OFFSET))(this);
	}

	static ::EHMPFHBIECA* COKNIICCODC(::System::Collections::Generic::List_1<::System::Int32>* JMLGBMMDDFM)
	{
		return ((::EHMPFHBIECA*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + EHMPFHBIECA_COKNIICCODC_OFFSET))(JMLGBMMDDFM);
	}
};
