#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
namespace System { template <typename T> class Action_1; }

#define AA67A18276F369B4_F5628F8349D4A8A6_E9E5D151EC0A5D8D_OFFSET UNITYSDK_OFFSET(0x1E21040)
#define AA67A18276F369B4_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E215B0)
#define AA67A18276F369B4_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA67A18276F369B4_F5628F8349D4A8A6_TypeDefinitionIndex = 9454;

class AA67A18276F369B4_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::AA67A18276F369B4_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::AA67A18276F369B4_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AA67A18276F369B4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::A04FB906869DCF3A*>** StaticGet_BCB5776C6392BCE4()
	{
		return (::System::Action_1<::A04FB906869DCF3A*>**)Il2CppClass::FromTypeDefinitionIndex(AA67A18276F369B4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AA67A18276F369B4_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA67A18276F369B4_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void E9E5D151EC0A5D8D(::A04FB906869DCF3A* EFC4AA7B99320D01)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + AA67A18276F369B4_F5628F8349D4A8A6_E9E5D151EC0A5D8D_OFFSET))(this, EFC4AA7B99320D01);
	}
};
