#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B1E57C9A4D4A8946;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B202A504244EBA47_E82668F9A203F849_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B202A504244EBA47_F67E6F450488D522_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B202A504244EBA47_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2441E80)
#define B202A504244EBA47__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B202A504244EBA47_TypeDefinitionIndex = 2459;

class B202A504244EBA47 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B1E57C9A4D4A8946*>* FD9B4AE4A44220F2; // 0x10

	::System::Void F67E6F450488D522(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B1E57C9A4D4A8946*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B1E57C9A4D4A8946*>*))((::PBYTE)hIl2Cpp + B202A504244EBA47_F67E6F450488D522_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B202A504244EBA47__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B202A504244EBA47*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B202A504244EBA47*&))((::PBYTE)hIl2Cpp + B202A504244EBA47_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B1E57C9A4D4A8946*>* E82668F9A203F849()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B1E57C9A4D4A8946*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B202A504244EBA47_E82668F9A203F849_OFFSET))(this);
	}
};
