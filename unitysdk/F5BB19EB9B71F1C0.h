#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B7D87165C2B5D55C;
class B7D87165C2B5D55C_B919D52AD3384469;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F5BB19EB9B71F1C0_A011E6163D4C2C4B_OFFSET UNITYSDK_OFFSET(0x3A70000)
#define F5BB19EB9B71F1C0_A33BF170D28A8958_OFFSET UNITYSDK_OFFSET(0x3A6FC40)
#define F5BB19EB9B71F1C0_B0A96230FC5C79CF_OFFSET UNITYSDK_OFFSET(0x3A70250)
#define F5BB19EB9B71F1C0_B8F0BB94B56B6FF9_OFFSET UNITYSDK_OFFSET(0x3A701F0)
#define F5BB19EB9B71F1C0_E943356A50E98733_OFFSET UNITYSDK_OFFSET(0x3A702B0)
#define F5BB19EB9B71F1C0_F382C44A9C43FB71_OFFSET UNITYSDK_OFFSET(0x3A6FA40)
#define F5BB19EB9B71F1C0__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A70660)
#define F5BB19EB9B71F1C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F5BB19EB9B71F1C0_TypeDefinitionIndex = 12004;

class F5BB19EB9B71F1C0 : public ::System::Object
{
public:
	static ::B7D87165C2B5D55C** StaticGet_E37074E5878FD5A0()
	{
		return (::B7D87165C2B5D55C**)Il2CppClass::FromTypeDefinitionIndex(F5BB19EB9B71F1C0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::String*>** StaticGet_B4C22D2EBC1813AF()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F5BB19EB9B71F1C0_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::B7D87165C2B5D55C_B919D52AD3384469** StaticGet_AEDE25C916593482()
	{
		return (::B7D87165C2B5D55C_B919D52AD3384469**)Il2CppClass::FromTypeDefinitionIndex(F5BB19EB9B71F1C0_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Boolean B0A96230FC5C79CF(::System::String* B083BE7841B347C4)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_B0A96230FC5C79CF_OFFSET))(B083BE7841B347C4);
	}

	static ::System::Boolean B8F0BB94B56B6FF9(::System::String* B083BE7841B347C4)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_B8F0BB94B56B6FF9_OFFSET))(B083BE7841B347C4);
	}

	static ::System::Void A33BF170D28A8958(::System::IntPtr E11726DF89A23608, ::System::Int32 F54AF627638DE3C9)
	{
		return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_A33BF170D28A8958_OFFSET))(E11726DF89A23608, F54AF627638DE3C9);
	}

	static ::System::Boolean F382C44A9C43FB71()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_F382C44A9C43FB71_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0__CCTOR_OFFSET))();
	}

	static ::System::Boolean E943356A50E98733(::System::String* EE6EC85AFB1283FE)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_E943356A50E98733_OFFSET))(EE6EC85AFB1283FE);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0__CTOR_OFFSET))(this);
	}

	static ::System::Boolean A011E6163D4C2C4B(::System::String* A288CB28FC2A6DA3, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_A011E6163D4C2C4B_OFFSET))(A288CB28FC2A6DA3, B083BE7841B347C4);
	}
};
