#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FD7EBCE4E3686016__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FD7EBCE4E3686016_TypeDefinitionIndex = 158;

class FD7EBCE4E3686016 : public ::E379DE61A548837D
{
public:
	::System::Boolean B87C161E516BB985; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD7EBCE4E3686016__CTOR_OFFSET))(this);
	}
};
