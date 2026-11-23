#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class FC937C9469EEFEC4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A715029F51C65845_A128704D66959006_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A715029F51C65845_F22C8CF1457D7355_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A715029F51C65845_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23F3CE0)
#define A715029F51C65845__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A715029F51C65845_TypeDefinitionIndex = 3977;

class A715029F51C65845 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC937C9469EEFEC4*>* A41D0F70DDF731E8; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A715029F51C65845__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC937C9469EEFEC4*>* A128704D66959006()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC937C9469EEFEC4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A715029F51C65845_A128704D66959006_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A715029F51C65845*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A715029F51C65845*&))((::PBYTE)hIl2Cpp + A715029F51C65845_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F22C8CF1457D7355(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC937C9469EEFEC4*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC937C9469EEFEC4*>*))((::PBYTE)hIl2Cpp + A715029F51C65845_F22C8CF1457D7355_OFFSET))(this, E937D4885DAA1AE8);
	}
};
