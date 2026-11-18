#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class POODDBJFAPA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POODDBJFAPA_FGHNDGIKBLG_EGDFMBLJNIE_OFFSET UNITYSDK_OFFSET(0x1D6392A0)
#define POODDBJFAPA_FGHNDGIKBLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D639290)

inline static constexpr unsigned int POODDBJFAPA_FGHNDGIKBLG_TypeDefinitionIndex = 90273;

class POODDBJFAPA_FGHNDGIKBLG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AKLLPHFMJGN; // 0x10
	::POODDBJFAPA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_FGHNDGIKBLG__CTOR_OFFSET))(this);
	}

	::System::Void EGDFMBLJNIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_FGHNDGIKBLG_EGDFMBLJNIE_OFFSET))(this);
	}
};
