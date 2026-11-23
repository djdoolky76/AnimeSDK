#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class A88B292D144E3748; }

#define FCF0D1E65E0610A4_F5628F8349D4A8A6_BF771B590FE2E1EE_OFFSET UNITYSDK_OFFSET(0x38BF060)
#define FCF0D1E65E0610A4_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x38BF250)
#define FCF0D1E65E0610A4_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCF0D1E65E0610A4_F5628F8349D4A8A6_TypeDefinitionIndex = 20319;

class FCF0D1E65E0610A4_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FCF0D1E65E0610A4_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FCF0D1E65E0610A4_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FCF0D1E65E0610A4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Reflection::A88B292D144E3748*, ::System::Type*>** StaticGet_F96CC1DE2E7B6F41()
	{
		return (::System::Func_2<::System::Reflection::A88B292D144E3748*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(FCF0D1E65E0610A4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Type* BF771B590FE2E1EE(::System::Reflection::A88B292D144E3748* B5459FABA90E20BD)
	{
		return ((::System::Type*(*)(::PVOID, ::System::Reflection::A88B292D144E3748*))((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4_F5628F8349D4A8A6_BF771B590FE2E1EE_OFFSET))(this, B5459FABA90E20BD);
	}
};
