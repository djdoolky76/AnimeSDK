#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace System { template <typename T> class Action_1; }

#define E960271C4657BA85_F5628F8349D4A8A6_E7F5A50CDFA02975_OFFSET UNITYSDK_OFFSET(0x16ACCE0)
#define E960271C4657BA85_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AD050)
#define E960271C4657BA85_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E960271C4657BA85_F5628F8349D4A8A6_TypeDefinitionIndex = 461;

class E960271C4657BA85_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E960271C4657BA85_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E960271C4657BA85_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E960271C4657BA85_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::AB642D1382756991*>** StaticGet_E3CEE43317B9E051()
	{
		return (::System::Action_1<::AB642D1382756991*>**)Il2CppClass::FromTypeDefinitionIndex(E960271C4657BA85_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E960271C4657BA85_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E960271C4657BA85_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void E7F5A50CDFA02975(::AB642D1382756991* E38FD399E4DFEF27)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + E960271C4657BA85_F5628F8349D4A8A6_E7F5A50CDFA02975_OFFSET))(this, E38FD399E4DFEF27);
	}
};
