#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PNIPNLIDAEA_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1F6993A0)
#define PNIPNLIDAEA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F699320)
#define PNIPNLIDAEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F699310)

inline static constexpr unsigned int PNIPNLIDAEA_TypeDefinitionIndex = 95013;

class PNIPNLIDAEA : public ::System::Object
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIPNLIDAEA__CCTOR_OFFSET))();
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIPNLIDAEA_PHOADBJGFBE_OFFSET))();
	}

	static ::System::Void KKFNPONHGEM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIPNLIDAEA_KKFNPONHGEM_OFFSET))();
	}
};
