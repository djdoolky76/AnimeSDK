#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJLCMNDPAJB.h"
#include "unitysdk/LCLEFIKOCII.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBPDAIPENKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E630800)
#define MBPDAIPENKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6307F0)

inline static constexpr unsigned int MBPDAIPENKN_TypeDefinitionIndex = 94793;

class MBPDAIPENKN : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::DJLCMNDPAJB, ::LCLEFIKOCII>** StaticGet_AMJENOCBPLD()
	{
		return (::System::Collections::Generic::Dictionary_2<::DJLCMNDPAJB, ::LCLEFIKOCII>**)Il2CppClass::FromTypeDefinitionIndex(MBPDAIPENKN_TypeDefinitionIndex)->GetStaticField(0x52810);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDAIPENKN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPDAIPENKN__CCTOR_OFFSET))();
	}
};
