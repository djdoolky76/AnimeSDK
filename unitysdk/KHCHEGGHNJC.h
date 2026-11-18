#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KHCHEGGHNJC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1994F890)

inline static constexpr unsigned int KHCHEGGHNJC_TypeDefinitionIndex = 65087;

class KHCHEGGHNJC : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_LDNJABJCFPA()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KHCHEGGHNJC_TypeDefinitionIndex)->GetStaticField(0x44560);
	}
	static ::System::Collections::Generic::HashSet_1<::Share::EItemType>** StaticGet_GNMLPKPOGAC()
	{
		return (::System::Collections::Generic::HashSet_1<::Share::EItemType>**)Il2CppClass::FromTypeDefinitionIndex(KHCHEGGHNJC_TypeDefinitionIndex)->GetStaticField(0x44568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHCHEGGHNJC__CCTOR_OFFSET))();
	}
};
