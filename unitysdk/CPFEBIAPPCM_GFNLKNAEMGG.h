#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPFEBIAPPCM_GFNLKNAEMGG__CTOR_OFFSET UNITYSDK_OFFSET(0x13277EA0)

inline static constexpr unsigned int CPFEBIAPPCM_GFNLKNAEMGG_TypeDefinitionIndex = 76953;

class CPFEBIAPPCM_GFNLKNAEMGG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* CHNHEAPGMJD; // 0x10
	::System::Boolean PFNDLMLAEHH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEBIAPPCM_GFNLKNAEMGG__CTOR_OFFSET))(this);
	}
};
