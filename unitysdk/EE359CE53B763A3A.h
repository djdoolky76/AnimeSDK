#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5F5FB0FFBDC346.h"

#define EE359CE53B763A3A_A3345B9AC9D75C45_OFFSET UNITYSDK_OFFSET(0x3B5AE50)
#define EE359CE53B763A3A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B5AED0)
#define EE359CE53B763A3A__CTOR_OFFSET UNITYSDK_OFFSET(0x3B5AEC0)

inline static constexpr unsigned int EE359CE53B763A3A_TypeDefinitionIndex = 10295;

class EE359CE53B763A3A : public ::AC5F5FB0FFBDC346
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE359CE53B763A3A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::IntPtr B2EA8C7C3E0F82E9, ::System::Boolean F61E953F737E3C7A)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + EE359CE53B763A3A__CTOR_1_OFFSET))(this, B2EA8C7C3E0F82E9, F61E953F737E3C7A);
	}

	::System::Boolean A3345B9AC9D75C45()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EE359CE53B763A3A_A3345B9AC9D75C45_OFFSET))(this);
	}
};
