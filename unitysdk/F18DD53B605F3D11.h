#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/EBC89909DEDD34E3.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/A38BBECA83D53446.h"

#define F18DD53B605F3D11__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F18DD53B605F3D11_TypeDefinitionIndex = 1880;

class F18DD53B605F3D11 : public ::E379DE61A548837D
{
public:
	::System::UInt32 EE9FC264C7152CBD; // 0x38
	::E68AA4EB51923C98::A38BBECA83D53446 A1F5403C70D888A0; // 0x3C
	::B39AAAD1233537D7::EBC89909DEDD34E3 E3FF45AA12B0D16D; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F18DD53B605F3D11__CTOR_OFFSET))(this);
	}
};
