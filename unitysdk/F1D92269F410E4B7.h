#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F0B7308F82C75F59;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F1D92269F410E4B7_BFD25A74DAC9A6F5_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F1D92269F410E4B7_E747EA42379FAEA8_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F1D92269F410E4B7_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F1D92269F410E4B7_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x267B500)
#define F1D92269F410E4B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F1D92269F410E4B7_TypeDefinitionIndex = 6395;

class F1D92269F410E4B7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B7308F82C75F59*>* AE51755443D6D2C1; // 0x10

	::System::Void E747EA42379FAEA8(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B7308F82C75F59*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B7308F82C75F59*>*))((::PBYTE)hIl2Cpp + F1D92269F410E4B7_E747EA42379FAEA8_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B7308F82C75F59*>* BFD25A74DAC9A6F5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B7308F82C75F59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F1D92269F410E4B7_BFD25A74DAC9A6F5_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F1D92269F410E4B7*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F1D92269F410E4B7*&))((::PBYTE)hIl2Cpp + F1D92269F410E4B7_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1D92269F410E4B7__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::F0B7308F82C75F59* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F0B7308F82C75F59*))((::PBYTE)hIl2Cpp + F1D92269F410E4B7_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}
};
