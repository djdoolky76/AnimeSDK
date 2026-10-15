#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class LOIPKPKDGGD;
class NAIMBODMJNH;

#define PIPJHDOKNEE_CTOR_OFFSET UNITYSDK_OFFSET(0xC26E780)
#define PIPJHDOKNEE__ONBIND_OFFSET UNITYSDK_OFFSET(0xC26E700)

inline static constexpr unsigned int PIPJHDOKNEE_TypeDefinitionIndex = 71854;

	class PIPJHDOKNEE : public ::FMPCODLIOLG
	{
	public:
		::NAIMBODMJNH* OFFIAEFGBOB; // 0x60
		::LOIPKPKDGGD* HNPONLDLJIL; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPJHDOKNEE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPJHDOKNEE__ONBIND_OFFSET))(this);
		}

	};
