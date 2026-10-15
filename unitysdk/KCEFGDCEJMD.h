#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KCEFGDCEJMD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB82B80)
#define KCEFGDCEJMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB82C40)
#define KCEFGDCEJMD_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CB82BC0)
#define KCEFGDCEJMD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CB82C00)

inline static constexpr unsigned int KCEFGDCEJMD_TypeDefinitionIndex = 43516;

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
