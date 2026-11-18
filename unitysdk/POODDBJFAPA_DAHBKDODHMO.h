#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class POODDBJFAPA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POODDBJFAPA_DAHBKDODHMO_BENEMKMIMAE_OFFSET UNITYSDK_OFFSET(0x1C671840)
#define POODDBJFAPA_DAHBKDODHMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C671830)

inline static constexpr unsigned int POODDBJFAPA_DAHBKDODHMO_TypeDefinitionIndex = 90271;

class POODDBJFAPA_DAHBKDODHMO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AKLLPHFMJGN; // 0x10
	::POODDBJFAPA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_DAHBKDODHMO__CTOR_OFFSET))(this);
	}

	::System::Void BENEMKMIMAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_DAHBKDODHMO_BENEMKMIMAE_OFFSET))(this);
	}
};
