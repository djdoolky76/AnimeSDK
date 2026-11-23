#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9F68A58DDE88B4D.h"

#define EDC95819763AF3BD_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x208D650)
#define EDC95819763AF3BD__CTOR_OFFSET UNITYSDK_OFFSET(0x17086F0)

inline static constexpr unsigned int EDC95819763AF3BD_TypeDefinitionIndex = 8562;

class EDC95819763AF3BD : public ::E9F68A58DDE88B4D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDC95819763AF3BD__CTOR_OFFSET))(this);
	}

	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDC95819763AF3BD_FEBA495D7EBB1A54_OFFSET))(this);
	}
};
