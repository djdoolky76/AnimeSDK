#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EE3C58598F874886_BBCE09BC636059C9_OFFSET UNITYSDK_OFFSET(0x3E2CF10)
#define EE3C58598F874886_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x3E2CEA0)
#define EE3C58598F874886_E8AF1E0387A100FA_1_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define EE3C58598F874886_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3E2CE30)
#define EE3C58598F874886__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EE3C58598F874886_TypeDefinitionIndex = 14753;

class EE3C58598F874886 : public ::System::Object
{
public:
	::System::Void BBCE09BC636059C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE3C58598F874886_BBCE09BC636059C9_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE3C58598F874886__CTOR_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE3C58598F874886_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE3C58598F874886_E6A4EDFB781D1DCC_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA_1(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EE3C58598F874886_E8AF1E0387A100FA_1_OFFSET))(this, FB4A1BD5C4242BE9);
	}
};
