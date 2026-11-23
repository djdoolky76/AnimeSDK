#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E8E89A4C07E71CAC.h"

namespace System { class String; }

#define EAFCA084378A7E16_AD2DDDADA6A88C27_OFFSET UNITYSDK_OFFSET(0x22BD650)
#define EAFCA084378A7E16_EAE41585CEDA7352_OFFSET UNITYSDK_OFFSET(0x22BD740)
#define EAFCA084378A7E16_ED60801BD13C377C_OFFSET UNITYSDK_OFFSET(0x22BD600)
#define EAFCA084378A7E16_F9A88469D2B68324_OFFSET UNITYSDK_OFFSET(0x22BD6A0)
#define EAFCA084378A7E16__CTOR_OFFSET UNITYSDK_OFFSET(0x1655F80)

inline static constexpr unsigned int EAFCA084378A7E16_TypeDefinitionIndex = 7214;

class EAFCA084378A7E16 : public ::E8E89A4C07E71CAC
{
public:
	::System::Void F9A88469D2B68324()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFCA084378A7E16_F9A88469D2B68324_OFFSET))(this);
	}

	::System::Boolean ED60801BD13C377C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFCA084378A7E16_ED60801BD13C377C_OFFSET))(this);
	}

	::System::Void AD2DDDADA6A88C27()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFCA084378A7E16_AD2DDDADA6A88C27_OFFSET))(this);
	}

	::System::String* EAE41585CEDA7352()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFCA084378A7E16_EAE41585CEDA7352_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFCA084378A7E16__CTOR_OFFSET))(this);
	}
};
