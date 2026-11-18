#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAGNNPDEODI__CCTOR_OFFSET UNITYSDK_OFFSET(0x145230B0)
#define CAGNNPDEODI__CTOR_OFFSET UNITYSDK_OFFSET(0x145230A0)

inline static constexpr unsigned int CAGNNPDEODI_TypeDefinitionIndex = 44441;

class CAGNNPDEODI : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MIKOMFIBMBN>** StaticGet_MIOEKEJGOFB()
	{
		return (::System::Collections::Generic::List_1<::MIKOMFIBMBN>**)Il2CppClass::FromTypeDefinitionIndex(CAGNNPDEODI_TypeDefinitionIndex)->GetStaticField(0x34AE0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGNNPDEODI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAGNNPDEODI__CCTOR_OFFSET))();
	}
};
