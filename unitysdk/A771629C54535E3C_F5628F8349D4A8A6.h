#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF9914625B6F8A9E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/A771629C54535E3C_F944290608359D3F.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define A771629C54535E3C_F5628F8349D4A8A6_AA14B96E355A82C4_OFFSET UNITYSDK_OFFSET(0x38F43B0)
#define A771629C54535E3C_F5628F8349D4A8A6_E994864E0A96DBCA_OFFSET UNITYSDK_OFFSET(0x38F4310)
#define A771629C54535E3C_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x38F5BC0)
#define A771629C54535E3C_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A771629C54535E3C_F5628F8349D4A8A6_TypeDefinitionIndex = 11801;

class A771629C54535E3C_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A771629C54535E3C_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A771629C54535E3C_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A771629C54535E3C_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Object*, ::EF9914625B6F8A9E>** StaticGet_FB5E19DD986E8C90()
	{
		return (::System::Func_2<::System::Object*, ::EF9914625B6F8A9E>**)Il2CppClass::FromTypeDefinitionIndex(A771629C54535E3C_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_B9C99C1760FBB291()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(A771629C54535E3C_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A771629C54535E3C_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A771629C54535E3C_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::EF9914625B6F8A9E AA14B96E355A82C4(::A771629C54535E3C_F944290608359D3F BBCFEC7DB309E927)
	{
		return ((::EF9914625B6F8A9E(*)(::PVOID, ::A771629C54535E3C_F944290608359D3F))((::PBYTE)hIl2Cpp + A771629C54535E3C_F5628F8349D4A8A6_AA14B96E355A82C4_OFFSET))(this, BBCFEC7DB309E927);
	}

	::System::Void E994864E0A96DBCA(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A771629C54535E3C_F5628F8349D4A8A6_E994864E0A96DBCA_OFFSET))(this, A6CAE7339066B0FB);
	}
};
