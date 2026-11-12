#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class LOIPKPKDGGD;
class NAIMBODMJNH;

#define PIPJHDOKNEE_CTOR_OFFSET UNITYSDK_OFFSET(0xCB9E2B0)
#define PIPJHDOKNEE__ONBIND_OFFSET UNITYSDK_OFFSET(0xCB9E230)

inline static constexpr unsigned int PIPJHDOKNEE_TypeDefinitionIndex = 73876;

	class PIPJHDOKNEE : public ::FMPCODLIOLG
	{
	public:
		::LOIPKPKDGGD* HNPONLDLJIL; // 0x60
		::NAIMBODMJNH* OFFIAEFGBOB; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPJHDOKNEE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPJHDOKNEE__ONBIND_OFFSET))(this);
		}

	};
