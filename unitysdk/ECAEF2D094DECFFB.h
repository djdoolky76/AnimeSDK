#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/BE6C748EBD5FE8BD.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B18A7C775EC8EA26.h"

#define ECAEF2D094DECFFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ECAEF2D094DECFFB_TypeDefinitionIndex = 8362;

class ECAEF2D094DECFFB : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::B18A7C775EC8EA26 B7C0F487D7A1305F; // 0x38
	::System::UInt32 A82520811A877BD1; // 0x3C
	::E0B58AD87D1F143C::BE6C748EBD5FE8BD E5BAACFC5D7A0841; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAEF2D094DECFFB__CTOR_OFFSET))(this);
	}
};
