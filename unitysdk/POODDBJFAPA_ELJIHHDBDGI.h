#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class POODDBJFAPA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POODDBJFAPA_ELJIHHDBDGI_INKMNEAOJLF_OFFSET UNITYSDK_OFFSET(0x119A6310)
#define POODDBJFAPA_ELJIHHDBDGI__CTOR_OFFSET UNITYSDK_OFFSET(0x119A6300)

inline static constexpr unsigned int POODDBJFAPA_ELJIHHDBDGI_TypeDefinitionIndex = 90275;

class POODDBJFAPA_ELJIHHDBDGI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AKLLPHFMJGN; // 0x10
	::POODDBJFAPA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_ELJIHHDBDGI__CTOR_OFFSET))(this);
	}

	::System::Void INKMNEAOJLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_ELJIHHDBDGI_INKMNEAOJLF_OFFSET))(this);
	}
};
