#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A52E48DB36AA70E3.h"

#define B60EE3CF516D3C88_B0ADF617FFC2081B_OFFSET UNITYSDK_OFFSET(0x22C5E00)
#define B60EE3CF516D3C88_F288427D1FDC2891_OFFSET UNITYSDK_OFFSET(0x22C5D40)
#define B60EE3CF516D3C88__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B60EE3CF516D3C88_TypeDefinitionIndex = 7254;

class B60EE3CF516D3C88 : public ::A52E48DB36AA70E3
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B60EE3CF516D3C88__CTOR_OFFSET))(this);
	}

	::System::Void B0ADF617FFC2081B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B60EE3CF516D3C88_B0ADF617FFC2081B_OFFSET))(this);
	}

	::System::Void F288427D1FDC2891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B60EE3CF516D3C88_F288427D1FDC2891_OFFSET))(this);
	}
};
