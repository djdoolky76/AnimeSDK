#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace System { template <typename T> class Action_1; }

#define ED94B80582615104_F5628F8349D4A8A6_A912826519ACB8B0_OFFSET UNITYSDK_OFFSET(0x186A0E0)
#define ED94B80582615104_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x186A140)
#define ED94B80582615104_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ED94B80582615104_F5628F8349D4A8A6_TypeDefinitionIndex = 1248;

class ED94B80582615104_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::ED94B80582615104_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::ED94B80582615104_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ED94B80582615104_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::AB642D1382756991*>** StaticGet_BD38FA80B668E0D5()
	{
		return (::System::Action_1<::AB642D1382756991*>**)Il2CppClass::FromTypeDefinitionIndex(ED94B80582615104_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ED94B80582615104_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED94B80582615104_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void A912826519ACB8B0(::AB642D1382756991* E38FD399E4DFEF27)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + ED94B80582615104_F5628F8349D4A8A6_A912826519ACB8B0_OFFSET))(this, E38FD399E4DFEF27);
	}
};
