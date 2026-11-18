#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ExitPerform/ExitPerformEvent.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODFIHLFDPCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB30F840)

inline static constexpr unsigned int ODFIHLFDPCE_TypeDefinitionIndex = 81563;

class ODFIHLFDPCE : public ::MoleMole::ExitPerform::ExitPerformEvent
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ExitPerform::ExitPerformEvent*>* IONJOCILBNO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFIHLFDPCE__CTOR_OFFSET))(this);
	}
};
