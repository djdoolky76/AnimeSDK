#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/System/Nullable_1.h"

#define ACCEBD377F76D4A1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ACCEBD377F76D4A1_TypeDefinitionIndex = 7333;

class ACCEBD377F76D4A1 : public ::E379DE61A548837D
{
public:
	::System::Nullable_1<::System::UInt32> A15C0C459D11FF49; // 0x38
	::System::Nullable_1<::System::UInt32> B38B643A39354C7A; // 0x40
	::System::Boolean BF6D9001BF61B4BB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCEBD377F76D4A1__CTOR_OFFSET))(this);
	}
};
