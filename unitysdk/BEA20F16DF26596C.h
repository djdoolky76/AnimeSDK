#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A1F207C38387B1AD.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEA20F16DF26596C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BEA20F16DF26596C_TypeDefinitionIndex = 7487;

class BEA20F16DF26596C : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::A1F207C38387B1AD>* EBC3A7D0D11E198E; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEA20F16DF26596C__CTOR_OFFSET))(this);
	}
};
