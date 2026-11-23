#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A89B0F7E84FF9B4B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B169B7E5CD01C1F9_B0B780979BCE6E2A_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B169B7E5CD01C1F9_EF6D1A3E4891C798_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B169B7E5CD01C1F9_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x247E800)
#define B169B7E5CD01C1F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B169B7E5CD01C1F9_TypeDefinitionIndex = 4537;

class B169B7E5CD01C1F9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::A89B0F7E84FF9B4B*>* BE1E41D1B5A1BC8C; // 0x10

	::System::Void EF6D1A3E4891C798(::System::Collections::Generic::Dictionary_2<::System::String*, ::A89B0F7E84FF9B4B*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::A89B0F7E84FF9B4B*>*))((::PBYTE)hIl2Cpp + B169B7E5CD01C1F9_EF6D1A3E4891C798_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B169B7E5CD01C1F9*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B169B7E5CD01C1F9*&))((::PBYTE)hIl2Cpp + B169B7E5CD01C1F9_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::A89B0F7E84FF9B4B*>* B0B780979BCE6E2A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::A89B0F7E84FF9B4B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B169B7E5CD01C1F9_B0B780979BCE6E2A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B169B7E5CD01C1F9__CTOR_OFFSET))(this);
	}
};
