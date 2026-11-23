#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FA0FB4840586622A { class B22CF861E0E47718; }
namespace System { class String; }

#define B389999868134B96_F5628F8349D4A8A6_E9AE8DB0C4DE8FFF_OFFSET UNITYSDK_OFFSET(0x1EC4BD0)
#define B389999868134B96_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC5150)
#define B389999868134B96_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B389999868134B96_F5628F8349D4A8A6_TypeDefinitionIndex = 6793;

class B389999868134B96_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B389999868134B96_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B389999868134B96_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B389999868134B96_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::FA0FB4840586622A::B22CF861E0E47718** StaticGet_B61CC0AF0D30B87F()
	{
		return (::FA0FB4840586622A::B22CF861E0E47718**)Il2CppClass::FromTypeDefinitionIndex(B389999868134B96_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B389999868134B96_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B389999868134B96_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void E9AE8DB0C4DE8FFF(::System::Boolean AABBF25BE83BED76, ::System::String* BAF8A3E3C5E8EAEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + B389999868134B96_F5628F8349D4A8A6_E9AE8DB0C4DE8FFF_OFFSET))(this, AABBF25BE83BED76, BAF8A3E3C5E8EAEF);
	}
};
