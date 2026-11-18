#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAANJDOHHOO_ABLHGFHEIBO_OFFSET UNITYSDK_OFFSET(0xFD52E30)
#define OAANJDOHHOO_LKPEJJALFBO_OFFSET UNITYSDK_OFFSET(0xFD52D20)
#define OAANJDOHHOO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFD52CF0)
#define OAANJDOHHOO__CTOR_OFFSET UNITYSDK_OFFSET(0xFD52CE0)

inline static constexpr unsigned int OAANJDOHHOO_TypeDefinitionIndex = 64326;

class OAANJDOHHOO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::OAANJDOHHOO*>* HGPIDBKKCCJ; // 0x10
	::OAANJDOHHOO* KJGJOLHCGDO; // 0x18
	::System::Int32 IKNOCMOCLIL; // 0x20

	::System::Void _ctor(::System::Int32 IKNOCMOCLIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAANJDOHHOO__CTOR_OFFSET))(this, IKNOCMOCLIL);
	}

	::System::Void _ctor_1(::OAANJDOHHOO* HBCBNAFKJAM)
	{
		return ((::System::Void(*)(::PVOID, ::OAANJDOHHOO*))((::PBYTE)hIl2Cpp + OAANJDOHHOO__CTOR_1_OFFSET))(this, HBCBNAFKJAM);
	}

	::System::Void LKPEJJALFBO(::OAANJDOHHOO* COAEBNALABE)
	{
		return ((::System::Void(*)(::PVOID, ::OAANJDOHHOO*))((::PBYTE)hIl2Cpp + OAANJDOHHOO_LKPEJJALFBO_OFFSET))(this, COAEBNALABE);
	}

	::System::Void ABLHGFHEIBO(::OAANJDOHHOO* NMPEBEECJEK)
	{
		return ((::System::Void(*)(::PVOID, ::OAANJDOHHOO*))((::PBYTE)hIl2Cpp + OAANJDOHHOO_ABLHGFHEIBO_OFFSET))(this, NMPEBEECJEK);
	}
};
