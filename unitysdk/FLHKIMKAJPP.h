#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLHKIMKAJPP__CTOR_OFFSET UNITYSDK_OFFSET(0x116BB880)

inline static constexpr unsigned int FLHKIMKAJPP_TypeDefinitionIndex = 83125;

class FLHKIMKAJPP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::BubbleGraphStruct>* EPNGBLKMKAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHKIMKAJPP__CTOR_OFFSET))(this);
	}
};
