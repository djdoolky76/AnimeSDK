#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E6AAA942D47EE6CB.h"

namespace System { class String; }

#define B41CE35496FBC5CA_A0AE35FFF6B83762_OFFSET UNITYSDK_OFFSET(0x1678550)
#define B41CE35496FBC5CA_A2FB7BDB44D070A5_OFFSET UNITYSDK_OFFSET(0x1678550)
#define B41CE35496FBC5CA_EAE41585CEDA7352_OFFSET UNITYSDK_OFFSET(0x1F80490)
#define B41CE35496FBC5CA_F6E4B4138BBC4C01_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define B41CE35496FBC5CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F80480)

inline static constexpr unsigned int B41CE35496FBC5CA_TypeDefinitionIndex = 7848;

class B41CE35496FBC5CA : public ::E6AAA942D47EE6CB
{
public:
	::System::String* EAE41585CEDA7352()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B41CE35496FBC5CA_EAE41585CEDA7352_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B41CE35496FBC5CA__CTOR_OFFSET))(this);
	}

	::System::Boolean A2FB7BDB44D070A5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B41CE35496FBC5CA_A2FB7BDB44D070A5_OFFSET))(this);
	}

	::System::Boolean F6E4B4138BBC4C01()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B41CE35496FBC5CA_F6E4B4138BBC4C01_OFFSET))(this);
	}

	::System::Boolean A0AE35FFF6B83762()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B41CE35496FBC5CA_A0AE35FFF6B83762_OFFSET))(this);
	}
};
