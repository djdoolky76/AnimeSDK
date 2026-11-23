#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BA9A38D10A85ED1C_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x261D7D0)
#define BA9A38D10A85ED1C_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x261D790)
#define BA9A38D10A85ED1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA9A38D10A85ED1C_TypeDefinitionIndex = 5910;

class BA9A38D10A85ED1C : public ::System::Object
{
public:
	static ::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BA9A38D10A85ED1C_A1E97155B145443C_OFFSET))();
	}

	static ::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BA9A38D10A85ED1C_FCC7443573DD0222_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA9A38D10A85ED1C__CTOR_OFFSET))(this);
	}
};
