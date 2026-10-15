#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNDJBGAGHLD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C973550)
#define NNDJBGAGHLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C973610)
#define NNDJBGAGHLD_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C973590)
#define NNDJBGAGHLD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C9735D0)

	class NNDJBGAGHLD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDJBGAGHLD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDJBGAGHLD_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDJBGAGHLD_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDJBGAGHLD_ONRECYCLE_OFFSET))(this);
		}

	};
