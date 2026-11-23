#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B916BB7AD5B79707;
namespace System { template <typename T> class Action_1; }

#define BE0558FD40A994B0_F5628F8349D4A8A6_FE72E88999C3D59F_OFFSET UNITYSDK_OFFSET(0x1A7A300)
#define BE0558FD40A994B0_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7A740)
#define BE0558FD40A994B0_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BE0558FD40A994B0_F5628F8349D4A8A6_TypeDefinitionIndex = 1815;

class BE0558FD40A994B0_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::BE0558FD40A994B0_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::BE0558FD40A994B0_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BE0558FD40A994B0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::B916BB7AD5B79707*>** StaticGet_E3CEE43317B9E051()
	{
		return (::System::Action_1<::B916BB7AD5B79707*>**)Il2CppClass::FromTypeDefinitionIndex(BE0558FD40A994B0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BE0558FD40A994B0_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE0558FD40A994B0_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void FE72E88999C3D59F(::B916BB7AD5B79707* BB2E1543C8559C1A)
	{
		return ((::System::Void(*)(::PVOID, ::B916BB7AD5B79707*))((::PBYTE)hIl2Cpp + BE0558FD40A994B0_F5628F8349D4A8A6_FE72E88999C3D59F_OFFSET))(this, BB2E1543C8559C1A);
	}
};
