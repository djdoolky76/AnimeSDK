#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KCEFGDCEJMD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CBB0EA0)
#define KCEFGDCEJMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB0F60)
#define KCEFGDCEJMD_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CBB0EE0)
#define KCEFGDCEJMD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CBB0F20)

	class KCEFGDCEJMD : public ::System::Object
	{
	public:
		::System::String* DGFLDNACOFI; // 0x10
		::System::Boolean IPKICAFDKEP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGDCEJMD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGDCEJMD_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGDCEJMD_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEFGDCEJMD_ONRECYCLE_OFFSET))(this);
		}

	};
