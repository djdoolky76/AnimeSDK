#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define B799B71659E43D70_F5628F8349D4A8A6_E231533CE2ACCBEF_OFFSET UNITYSDK_OFFSET(0x3F2DFB0)
#define B799B71659E43D70_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F2E5F0)
#define B799B71659E43D70_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B799B71659E43D70_F5628F8349D4A8A6_TypeDefinitionIndex = 19958;

class B799B71659E43D70_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B799B71659E43D70_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B799B71659E43D70_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B799B71659E43D70_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet_F4EB4229F3368E16()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(B799B71659E43D70_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B799B71659E43D70_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B799B71659E43D70_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void E231533CE2ACCBEF(::System::Exception* A4E4D73B752E2373)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + B799B71659E43D70_F5628F8349D4A8A6_E231533CE2ACCBEF_OFFSET))(this, A4E4D73B752E2373);
	}
};
