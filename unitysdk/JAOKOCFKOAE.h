#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELJNJDACAEE.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JAOKOCFKOAE__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABF000)

inline static constexpr unsigned int JAOKOCFKOAE_TypeDefinitionIndex = 82290;

class JAOKOCFKOAE : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_BIJIPJPJJPJ()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(JAOKOCFKOAE_TypeDefinitionIndex)->GetStaticField(0x14480);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ELJNJDACAEE>* OOBOMJFEMEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOKOCFKOAE__CTOR_OFFSET))(this);
	}
};
