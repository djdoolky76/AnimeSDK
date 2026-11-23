#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AA69C91B936BE213;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FE98B9A86D003F9A_A2DD6D74CF9E01AE_OFFSET UNITYSDK_OFFSET(0x1BBF700)
#define FE98B9A86D003F9A_A301ADA50F6773E2_OFFSET UNITYSDK_OFFSET(0x1BBF780)
#define FE98B9A86D003F9A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF8E0)

inline static constexpr unsigned int FE98B9A86D003F9A_TypeDefinitionIndex = 245;

class FE98B9A86D003F9A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA69C91B936BE213*>* FC2CD67600ED78DA; // 0x10

	::System::Boolean A301ADA50F6773E2(::System::UInt32 E9E0616314D6E00C, ::System::Int64 A9F1FC72FFF04DFD, ::System::Int64 ABB1B362E5F5726D)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FE98B9A86D003F9A_A301ADA50F6773E2_OFFSET))(this, E9E0616314D6E00C, A9F1FC72FFF04DFD, ABB1B362E5F5726D);
	}

	::System::Void A2DD6D74CF9E01AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE98B9A86D003F9A_A2DD6D74CF9E01AE_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE98B9A86D003F9A__CTOR_OFFSET))(this);
	}
};
