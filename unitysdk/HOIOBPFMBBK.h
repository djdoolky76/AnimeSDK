#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define HOIOBPFMBBK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CECFB10)
#define HOIOBPFMBBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CECFBF0)
#define HOIOBPFMBBK_EBBGNFPNGFE_OFFSET UNITYSDK_OFFSET(0x1CECFB20)
#define HOIOBPFMBBK_EFBEDKJGDII_OFFSET UNITYSDK_OFFSET(0x1CECFB60)

	class HOIOBPFMBBK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIOBPFMBBK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIOBPFMBBK_CLEAR_OFFSET))(this);
		}

		::System::Void EBBGNFPNGFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIOBPFMBBK_EBBGNFPNGFE_OFFSET))(this);
		}

		::System::Object* EFBEDKJGDII()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIOBPFMBBK_EFBEDKJGDII_OFFSET))(this);
		}

	};
