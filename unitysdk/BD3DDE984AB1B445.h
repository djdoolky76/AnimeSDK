#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F56CA29F3A09FAE4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BD3DDE984AB1B445_E53C8562574D9F32_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BD3DDE984AB1B445_F1B2F7ED6BA74FCF_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define BD3DDE984AB1B445_F4328A17777B8E59_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BD3DDE984AB1B445_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25EC090)
#define BD3DDE984AB1B445__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD3DDE984AB1B445_TypeDefinitionIndex = 5689;

class BD3DDE984AB1B445 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F56CA29F3A09FAE4*>* A7AB9EB7F5B396A0; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F56CA29F3A09FAE4*>* E53C8562574D9F32()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F56CA29F3A09FAE4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BD3DDE984AB1B445_E53C8562574D9F32_OFFSET))(this);
	}

	static ::System::UInt32 F1B2F7ED6BA74FCF(::F56CA29F3A09FAE4* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F56CA29F3A09FAE4*))((::PBYTE)hIl2Cpp + BD3DDE984AB1B445_F1B2F7ED6BA74FCF_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void F4328A17777B8E59(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F56CA29F3A09FAE4*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F56CA29F3A09FAE4*>*))((::PBYTE)hIl2Cpp + BD3DDE984AB1B445_F4328A17777B8E59_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BD3DDE984AB1B445*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BD3DDE984AB1B445*&))((::PBYTE)hIl2Cpp + BD3DDE984AB1B445_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD3DDE984AB1B445__CTOR_OFFSET))(this);
	}
};
