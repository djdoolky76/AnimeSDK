#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5F5FB0FFBDC346.h"

#define FE6F1F7AB80A91F3_A3345B9AC9D75C45_OFFSET UNITYSDK_OFFSET(0x3BA0D30)
#define FE6F1F7AB80A91F3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B5AEC0)
#define FE6F1F7AB80A91F3__CTOR_OFFSET UNITYSDK_OFFSET(0x3B5AED0)

inline static constexpr unsigned int FE6F1F7AB80A91F3_TypeDefinitionIndex = 11127;

class FE6F1F7AB80A91F3 : public ::AC5F5FB0FFBDC346
{
public:
	::System::Boolean A3345B9AC9D75C45()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FE6F1F7AB80A91F3_A3345B9AC9D75C45_OFFSET))(this);
	}

	::System::Void _ctor(::System::IntPtr B2EA8C7C3E0F82E9, ::System::Boolean F61E953F737E3C7A)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + FE6F1F7AB80A91F3__CTOR_OFFSET))(this, B2EA8C7C3E0F82E9, F61E953F737E3C7A);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE6F1F7AB80A91F3__CTOR_1_OFFSET))(this);
	}
};
