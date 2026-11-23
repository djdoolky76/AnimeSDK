#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BD290FEF030BF2E1_FB7841ED9C595492_OFFSET UNITYSDK_OFFSET(0x3C00690)
#define BD290FEF030BF2E1_FF0997C535275E60_OFFSET UNITYSDK_OFFSET(0x3C006A0)
#define BD290FEF030BF2E1__CTOR_OFFSET UNITYSDK_OFFSET(0x3C006B0)

inline static constexpr unsigned int BD290FEF030BF2E1_TypeDefinitionIndex = 11358;

class BD290FEF030BF2E1 : public ::System::Object
{
public:
	::System::Object* A584125BBEB208BD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD290FEF030BF2E1__CTOR_OFFSET))(this);
	}

	::System::Void FF0997C535275E60()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD290FEF030BF2E1_FF0997C535275E60_OFFSET))(this);
	}

	::System::Void FB7841ED9C595492()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD290FEF030BF2E1_FB7841ED9C595492_OFFSET))(this);
	}
};
