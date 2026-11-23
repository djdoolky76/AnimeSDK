#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define EED9489A90033EAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1677AC0)

inline static constexpr unsigned int EED9489A90033EAC_TypeDefinitionIndex = 878;

class EED9489A90033EAC : public ::E379DE61A548837D
{
public:
	::System::Boolean B6EA5D042006FB95; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EED9489A90033EAC__CTOR_OFFSET))(this);
	}
};
