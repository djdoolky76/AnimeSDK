#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class FF3F067D8706B740;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F0911971A9B0DBED_E53C8562574D9F32_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F0911971A9B0DBED_F1B2F7ED6BA74FCF_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F0911971A9B0DBED_F4328A17777B8E59_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F0911971A9B0DBED_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23A6970)
#define F0911971A9B0DBED__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0911971A9B0DBED_TypeDefinitionIndex = 3539;

class F0911971A9B0DBED : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF3F067D8706B740*>* A7AB9EB7F5B396A0; // 0x10

	static ::System::UInt32 F1B2F7ED6BA74FCF(::FF3F067D8706B740* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::FF3F067D8706B740*))((::PBYTE)hIl2Cpp + F0911971A9B0DBED_F1B2F7ED6BA74FCF_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void F4328A17777B8E59(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF3F067D8706B740*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF3F067D8706B740*>*))((::PBYTE)hIl2Cpp + F0911971A9B0DBED_F4328A17777B8E59_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0911971A9B0DBED__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF3F067D8706B740*>* E53C8562574D9F32()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FF3F067D8706B740*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F0911971A9B0DBED_E53C8562574D9F32_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F0911971A9B0DBED*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F0911971A9B0DBED*&))((::PBYTE)hIl2Cpp + F0911971A9B0DBED_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
