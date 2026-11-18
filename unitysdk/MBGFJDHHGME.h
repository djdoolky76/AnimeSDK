#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBPDOLCMLDP.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MBGFJDHHGME__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D138C0)

inline static constexpr unsigned int MBGFJDHHGME_TypeDefinitionIndex = 41474;

class MBGFJDHHGME : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::DBPDOLCMLDP>** StaticGet_IMNOJIODPKM()
	{
		return (::System::Collections::Generic::HashSet_1<::DBPDOLCMLDP>**)Il2CppClass::FromTypeDefinitionIndex(MBGFJDHHGME_TypeDefinitionIndex)->GetStaticField(0x454C0);
	}
	static ::System::Collections::Generic::HashSet_1<::DBPDOLCMLDP>** StaticGet_KDOOBAOEHKE()
	{
		return (::System::Collections::Generic::HashSet_1<::DBPDOLCMLDP>**)Il2CppClass::FromTypeDefinitionIndex(MBGFJDHHGME_TypeDefinitionIndex)->GetStaticField(0x454C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBGFJDHHGME__CCTOR_OFFSET))();
	}
};
