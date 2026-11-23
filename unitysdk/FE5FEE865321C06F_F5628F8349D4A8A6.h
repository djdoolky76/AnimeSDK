#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
namespace System { template <typename T> class Action_1; }

#define FE5FEE865321C06F_F5628F8349D4A8A6_FD93E2D434B7A910_OFFSET UNITYSDK_OFFSET(0x16F6D30)
#define FE5FEE865321C06F_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F6DE0)
#define FE5FEE865321C06F_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE5FEE865321C06F_F5628F8349D4A8A6_TypeDefinitionIndex = 584;

class FE5FEE865321C06F_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FE5FEE865321C06F_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FE5FEE865321C06F_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FE5FEE865321C06F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::A04FB906869DCF3A*>** StaticGet_E354E9AE74DDD48C()
	{
		return (::System::Action_1<::A04FB906869DCF3A*>**)Il2CppClass::FromTypeDefinitionIndex(FE5FEE865321C06F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FE5FEE865321C06F_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE5FEE865321C06F_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void FD93E2D434B7A910(::A04FB906869DCF3A* F9ADA718944F49ED)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + FE5FEE865321C06F_F5628F8349D4A8A6_FD93E2D434B7A910_OFFSET))(this, F9ADA718944F49ED);
	}
};
