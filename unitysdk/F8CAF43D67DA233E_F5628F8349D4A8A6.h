#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define F8CAF43D67DA233E_F5628F8349D4A8A6_B08369D7E805737E_OFFSET UNITYSDK_OFFSET(0x3ADF590)
#define F8CAF43D67DA233E_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AE01B0)
#define F8CAF43D67DA233E_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F8CAF43D67DA233E_F5628F8349D4A8A6_TypeDefinitionIndex = 12152;

class F8CAF43D67DA233E_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F8CAF43D67DA233E_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F8CAF43D67DA233E_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F8CAF43D67DA233E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet_F4EB4229F3368E16()
	{
		return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(F8CAF43D67DA233E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F8CAF43D67DA233E_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8CAF43D67DA233E_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B08369D7E805737E(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F8CAF43D67DA233E_F5628F8349D4A8A6_B08369D7E805737E_OFFSET))(this, F220A2D27F7C6B6C);
	}
};
