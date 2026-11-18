#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FGHKNPHEBAG_HBPFBENKPEA_OFFSET UNITYSDK_OFFSET(0xBB41D50)
#define FGHKNPHEBAG_LAJMGIAOHKO_OFFSET UNITYSDK_OFFSET(0xBB41CF0)
#define FGHKNPHEBAG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB41CE0)

inline static constexpr unsigned int FGHKNPHEBAG_TypeDefinitionIndex = 84371;

class FGHKNPHEBAG : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* CCDGMINLFLJ; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* JMFPFLAELCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHKNPHEBAG__CTOR_OFFSET))(this);
	}

	::System::Boolean LAJMGIAOHKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHKNPHEBAG_LAJMGIAOHKO_OFFSET))(this);
	}

	::System::Boolean HBPFBENKPEA(::System::String* EGHDEGLFOBN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FGHKNPHEBAG_HBPFBENKPEA_OFFSET))(this, EGHDEGLFOBN);
	}
};
