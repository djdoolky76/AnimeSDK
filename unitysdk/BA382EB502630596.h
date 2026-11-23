#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/E79314451A0AE1F7.h"

class E4865BD1ABDB24A4;
namespace System { class Action; }
namespace System::Reflection { class MethodInfo; }

#define BA382EB502630596_A89EFB0DE763EBDB_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define BA382EB502630596_B04E68667E68339B_OFFSET UNITYSDK_OFFSET(0x3F38580)
#define BA382EB502630596_BEB1F38D07F44529_OFFSET UNITYSDK_OFFSET(0x3F39020)
#define BA382EB502630596_E0084D5F21691362_OFFSET UNITYSDK_OFFSET(0x3F38720)
#define BA382EB502630596_E4B51086C3652C04_OFFSET UNITYSDK_OFFSET(0x3F38DD0)
#define BA382EB502630596__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F38F10)

inline static constexpr unsigned int BA382EB502630596_TypeDefinitionIndex = 20985;

class BA382EB502630596 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_BE42247D5AEF4A05()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BA382EB502630596_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::E4865BD1ABDB24A4** StaticGet_EBC3A7D0D11E198E()
	{
		return (::E4865BD1ABDB24A4**)Il2CppClass::FromTypeDefinitionIndex(BA382EB502630596_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action** StaticGet_A3087A6EDA2A6E42()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BA382EB502630596_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Reflection::MethodInfo** StaticGet_FED60CC06A18CDFA()
	{
		return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(BA382EB502630596_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::IntPtr B04E68667E68339B(::E79314451A0AE1F7 B6F31EDF57B77221)
	{
		return ((::System::IntPtr(*)(::E79314451A0AE1F7))((::PBYTE)hIl2Cpp + BA382EB502630596_B04E68667E68339B_OFFSET))(B6F31EDF57B77221);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BA382EB502630596__CCTOR_OFFSET))();
	}

	static ::PVOID E4B51086C3652C04(::System::IntPtr FC1B0A35166862A2, ::E79314451A0AE1F7 A39972A7F8678037, ::E2DE926113CB084F BAA757A4C1854DDA)
	{
		return ((::PVOID(*)(::System::IntPtr, ::E79314451A0AE1F7, ::E2DE926113CB084F))((::PBYTE)hIl2Cpp + BA382EB502630596_E4B51086C3652C04_OFFSET))(FC1B0A35166862A2, A39972A7F8678037, BAA757A4C1854DDA);
	}

	static ::PVOID E0084D5F21691362(::System::Object* A505D3CD7E5532D7, ::System::Reflection::MethodInfo* B5A4CBA64799CE07, ::System::Boolean E55B2562DB8B5BDB, ::System::Boolean B88ABD458DAC777B)
	{
		return ((::PVOID(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BA382EB502630596_E0084D5F21691362_OFFSET))(A505D3CD7E5532D7, B5A4CBA64799CE07, E55B2562DB8B5BDB, B88ABD458DAC777B);
	}

	static ::System::Boolean BEB1F38D07F44529()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BA382EB502630596_BEB1F38D07F44529_OFFSET))();
	}

	static ::System::Void A89EFB0DE763EBDB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BA382EB502630596_A89EFB0DE763EBDB_OFFSET))();
	}
};
