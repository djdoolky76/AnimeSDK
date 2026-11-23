#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E254E20CEF2E5D8E;
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FC54536DDA7C9686_A9EC9E92938E1401_E5A2D21A4A42EB03_OFFSET UNITYSDK_OFFSET(0x3B5F630)
#define FC54536DDA7C9686_A9EC9E92938E1401__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B5FB90)
#define FC54536DDA7C9686_A9EC9E92938E1401__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC54536DDA7C9686_A9EC9E92938E1401_TypeDefinitionIndex = 10256;

class FC54536DDA7C9686_A9EC9E92938E1401 : public ::System::Object
{
public:
	static ::FC54536DDA7C9686_A9EC9E92938E1401** StaticGet_FB0A7EB463FA294A()
	{
		return (::FC54536DDA7C9686_A9EC9E92938E1401**)Il2CppClass::FromTypeDefinitionIndex(FC54536DDA7C9686_A9EC9E92938E1401_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Type*, ::E254E20CEF2E5D8E*>** StaticGet_BDE2EF235B5E9F6F()
	{
		return (::System::Func_2<::System::Type*, ::E254E20CEF2E5D8E*>**)Il2CppClass::FromTypeDefinitionIndex(FC54536DDA7C9686_A9EC9E92938E1401_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FC54536DDA7C9686_A9EC9E92938E1401__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC54536DDA7C9686_A9EC9E92938E1401__CTOR_OFFSET))(this);
	}

	::E254E20CEF2E5D8E* E5A2D21A4A42EB03(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::E254E20CEF2E5D8E*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FC54536DDA7C9686_A9EC9E92938E1401_E5A2D21A4A42EB03_OFFSET))(this, A288CB28FC2A6DA3);
	}
};
