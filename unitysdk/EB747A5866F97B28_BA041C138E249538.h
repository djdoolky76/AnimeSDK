#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/SafeHandle.h"

#define EB747A5866F97B28_BA041C138E249538_A3345B9AC9D75C45_OFFSET UNITYSDK_OFFSET(0x3ECA5E0)
#define EB747A5866F97B28_BA041C138E249538_A4555184A1656FFE_OFFSET UNITYSDK_OFFSET(0x3ECA610)
#define EB747A5866F97B28_BA041C138E249538__CTOR_OFFSET UNITYSDK_OFFSET(0x3ECA600)

inline static constexpr unsigned int EB747A5866F97B28_BA041C138E249538_TypeDefinitionIndex = 15092;

class EB747A5866F97B28_BA041C138E249538 : public ::System::Runtime::InteropServices::SafeHandle
{
public:
	::System::Boolean A4555184A1656FFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EB747A5866F97B28_BA041C138E249538_A4555184A1656FFE_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB747A5866F97B28_BA041C138E249538__CTOR_OFFSET))(this);
	}

	::System::Boolean A3345B9AC9D75C45()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EB747A5866F97B28_BA041C138E249538_A3345B9AC9D75C45_OFFSET))(this);
	}
};
