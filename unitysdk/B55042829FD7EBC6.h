#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/BD7D9CB727F92D8C.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/FB15B066A5E7656D.h"

#define B55042829FD7EBC6__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B55042829FD7EBC6_TypeDefinitionIndex = 9137;

class B55042829FD7EBC6 : public ::E379DE61A548837D
{
public:
	::FB15B066A5E7656D A81F7151FC46C7F0; // 0x38
	::E0B58AD87D1F143C::BD7D9CB727F92D8C B3C03A753F48CDBB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B55042829FD7EBC6__CTOR_OFFSET))(this);
	}
};
