#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define A2849034074A6DB4_F5628F8349D4A8A6_F8CC7014E17F7592_OFFSET UNITYSDK_OFFSET(0x3AC6080)
#define A2849034074A6DB4_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AC9ED0)
#define A2849034074A6DB4_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2849034074A6DB4_F5628F8349D4A8A6_TypeDefinitionIndex = 12119;

class A2849034074A6DB4_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A2849034074A6DB4_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A2849034074A6DB4_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A2849034074A6DB4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_BFC2B29B610F5A11()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(A2849034074A6DB4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A2849034074A6DB4_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2849034074A6DB4_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F8CC7014E17F7592()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2849034074A6DB4_F5628F8349D4A8A6_F8CC7014E17F7592_OFFSET))(this);
	}
};
