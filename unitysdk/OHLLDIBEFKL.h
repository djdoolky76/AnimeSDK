#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OHLLDIBEFKL__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FE28D0)
#define OHLLDIBEFKL__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE28C0)

inline static constexpr unsigned int OHLLDIBEFKL_TypeDefinitionIndex = 62913;

class OHLLDIBEFKL : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_CGIAMFCBFOP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OHLLDIBEFKL_TypeDefinitionIndex)->GetStaticField(0x143F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLLDIBEFKL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHLLDIBEFKL__CCTOR_OFFSET))();
	}
};
