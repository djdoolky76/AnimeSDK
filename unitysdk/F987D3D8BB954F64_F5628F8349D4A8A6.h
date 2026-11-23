#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define F987D3D8BB954F64_F5628F8349D4A8A6_BDECD928F3DAE356_OFFSET UNITYSDK_OFFSET(0x2637D50)
#define F987D3D8BB954F64_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2637E20)
#define F987D3D8BB954F64_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F987D3D8BB954F64_F5628F8349D4A8A6_TypeDefinitionIndex = 6064;

class F987D3D8BB954F64_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F987D3D8BB954F64_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F987D3D8BB954F64_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F987D3D8BB954F64_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::Object*>** StaticGet_EB0986F4A705A2F5()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F987D3D8BB954F64_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F987D3D8BB954F64_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F987D3D8BB954F64_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void BDECD928F3DAE356(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F987D3D8BB954F64_F5628F8349D4A8A6_BDECD928F3DAE356_OFFSET))(this, E5EB06E4FD2C32F7);
	}
};
