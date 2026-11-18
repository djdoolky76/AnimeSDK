#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFKLIFHDOID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGFCMJBJGLG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16478D40)
#define AGFCMJBJGLG__CTOR_OFFSET UNITYSDK_OFFSET(0x16478D30)

inline static constexpr unsigned int AGFCMJBJGLG_TypeDefinitionIndex = 88551;

class AGFCMJBJGLG : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::OFKLIFHDOID>** StaticGet_IPOOJFJLHEB()
	{
		return (::System::Collections::Generic::List_1<::OFKLIFHDOID>**)Il2CppClass::FromTypeDefinitionIndex(AGFCMJBJGLG_TypeDefinitionIndex)->GetStaticField(0x3B350);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFCMJBJGLG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGFCMJBJGLG__CCTOR_OFFSET))();
	}
};
