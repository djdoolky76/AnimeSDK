#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LINIEKANIJG_EFMAILMBJGN_OFFSET UNITYSDK_OFFSET(0x12567FD0)
#define LINIEKANIJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12567DF0)

inline static constexpr unsigned int LINIEKANIJG_TypeDefinitionIndex = 90322;

class LINIEKANIJG : public ::System::Object
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LINIEKANIJG__CCTOR_OFFSET))();
	}

	static ::System::Void EFMAILMBJGN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LINIEKANIJG_EFMAILMBJGN_OFFSET))();
	}
};
