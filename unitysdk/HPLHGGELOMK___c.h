#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HPLHGGELOMK;

#define HPLHGGELOMK___C_PHBPOFCIOMJ_OFFSET UNITYSDK_OFFSET(0x1F850F60)
#define HPLHGGELOMK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F850F10)
#define HPLHGGELOMK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F850F50)

inline static constexpr unsigned int HPLHGGELOMK___c_TypeDefinitionIndex = 18143;

class HPLHGGELOMK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HPLHGGELOMK___c_TypeDefinitionIndex)->GetStaticField(0x7D00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPLHGGELOMK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHGGELOMK___C__CTOR_OFFSET))(this);
	}

	::HPLHGGELOMK* PHBPOFCIOMJ()
	{
		return ((::HPLHGGELOMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHGGELOMK___C_PHBPOFCIOMJ_OFFSET))(this);
	}
};
