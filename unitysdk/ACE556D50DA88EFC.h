#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A6E622D86E71410F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACE556D50DA88EFC_E3C153D76AD460AA_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define ACE556D50DA88EFC_EF8B6FC15B54B534_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define ACE556D50DA88EFC_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23E41D0)
#define ACE556D50DA88EFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ACE556D50DA88EFC_TypeDefinitionIndex = 3924;

class ACE556D50DA88EFC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::A6E622D86E71410F, ::System::UInt32>* F99B56D334C82BB6; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::ACE556D50DA88EFC*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::ACE556D50DA88EFC*&))((::PBYTE)hIl2Cpp + ACE556D50DA88EFC_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::A6E622D86E71410F, ::System::UInt32>* EF8B6FC15B54B534()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::A6E622D86E71410F, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACE556D50DA88EFC_EF8B6FC15B54B534_OFFSET))(this);
	}

	::System::Void E3C153D76AD460AA(::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::A6E622D86E71410F, ::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::A6E622D86E71410F, ::System::UInt32>*))((::PBYTE)hIl2Cpp + ACE556D50DA88EFC_E3C153D76AD460AA_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACE556D50DA88EFC__CTOR_OFFSET))(this);
	}
};
