#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/F140AB59DDFE659D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define F3BFF26D9BBD6271_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x267CA30)
#define F3BFF26D9BBD6271__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3BFF26D9BBD6271_TypeDefinitionIndex = 6396;

class F3BFF26D9BBD6271 : public ::System::Object
{
public:
	::System::Boolean EE96845B64F9A94A; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* ABFA455043953683; // 0x18
	::E68AA4EB51923C98::F140AB59DDFE659D E2FD51EF7DD24E38; // 0x20

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F3BFF26D9BBD6271*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F3BFF26D9BBD6271*&))((::PBYTE)hIl2Cpp + F3BFF26D9BBD6271_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3BFF26D9BBD6271__CTOR_OFFSET))(this);
	}
};
