#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFA87AE3DE305D4C;
namespace System { template <typename T> class Action_1; }

#define B8B105338DA9815D_F5628F8349D4A8A6_FE5733630F0A8195_OFFSET UNITYSDK_OFFSET(0x1B70C10)
#define B8B105338DA9815D_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B71CA0)
#define B8B105338DA9815D_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8B105338DA9815D_F5628F8349D4A8A6_TypeDefinitionIndex = 2210;

class B8B105338DA9815D_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B8B105338DA9815D_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B8B105338DA9815D_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B8B105338DA9815D_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::AFA87AE3DE305D4C*>** StaticGet_E335C5689DB80A30()
	{
		return (::System::Action_1<::AFA87AE3DE305D4C*>**)Il2CppClass::FromTypeDefinitionIndex(B8B105338DA9815D_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B8B105338DA9815D_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8B105338DA9815D_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void FE5733630F0A8195(::AFA87AE3DE305D4C* EC35F88C87A83BEB)
	{
		return ((::System::Void(*)(::PVOID, ::AFA87AE3DE305D4C*))((::PBYTE)hIl2Cpp + B8B105338DA9815D_F5628F8349D4A8A6_FE5733630F0A8195_OFFSET))(this, EC35F88C87A83BEB);
	}
};
