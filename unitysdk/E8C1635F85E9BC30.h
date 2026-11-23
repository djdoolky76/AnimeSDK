#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define E8C1635F85E9BC30__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D03740)
#define E8C1635F85E9BC30__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8060)

inline static constexpr unsigned int E8C1635F85E9BC30_TypeDefinitionIndex = 10815;

class E8C1635F85E9BC30 : public ::System::Object
{
public:
	static ::E8C1635F85E9BC30** StaticGet_BDC1E8E781853683()
	{
		return (::E8C1635F85E9BC30**)Il2CppClass::FromTypeDefinitionIndex(E8C1635F85E9BC30_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C1635F85E9BC30__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8C1635F85E9BC30__CCTOR_OFFSET))();
	}
};
