#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class POODDBJFAPA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POODDBJFAPA_ODAKLCFJINH_OEJAMHEHGPL_OFFSET UNITYSDK_OFFSET(0x1C1E5B60)
#define POODDBJFAPA_ODAKLCFJINH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E5B50)

inline static constexpr unsigned int POODDBJFAPA_ODAKLCFJINH_TypeDefinitionIndex = 90263;

class POODDBJFAPA_ODAKLCFJINH : public ::System::Object
{
public:
	::POODDBJFAPA* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* AKLLPHFMJGN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_ODAKLCFJINH__CTOR_OFFSET))(this);
	}

	::System::Void OEJAMHEHGPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_ODAKLCFJINH_OEJAMHEHGPL_OFFSET))(this);
	}
};
