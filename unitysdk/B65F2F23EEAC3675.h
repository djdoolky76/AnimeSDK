#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AC53E891708F142C;
namespace System { class String; }

#define B65F2F23EEAC3675_AC426665FBDDCF70_1_OFFSET UNITYSDK_OFFSET(0x44436A0)
#define B65F2F23EEAC3675_AC426665FBDDCF70_OFFSET UNITYSDK_OFFSET(0x4443720)
#define B65F2F23EEAC3675_E7E18D09829482BB_OFFSET UNITYSDK_OFFSET(0x4443D40)
#define B65F2F23EEAC3675__CCTOR_OFFSET UNITYSDK_OFFSET(0x4442ED0)

inline static constexpr unsigned int B65F2F23EEAC3675_TypeDefinitionIndex = 19035;

class B65F2F23EEAC3675 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_F045C5D6ED0AE0A0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B65F2F23EEAC3675_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_BEF20C9949E2DA3F()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(B65F2F23EEAC3675_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_E4F8AEB6E196618E()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B65F2F23EEAC3675_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_F8A2A8D83E897006()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B65F2F23EEAC3675_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B65F2F23EEAC3675__CCTOR_OFFSET))();
	}

	static ::System::String* AC426665FBDDCF70(::System::String* B8144BB7BA74843B, ::System::Int32 BC37316376A565D9, ::System::Int32 F2E014F34A4A1D04, ::System::Int32 F18C506CE24B0B34)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + B65F2F23EEAC3675_AC426665FBDDCF70_OFFSET))(B8144BB7BA74843B, BC37316376A565D9, F2E014F34A4A1D04, F18C506CE24B0B34);
	}

	static ::System::String* AC426665FBDDCF70_1(::System::String* B8144BB7BA74843B, ::System::Int32 F18C506CE24B0B34)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + B65F2F23EEAC3675_AC426665FBDDCF70_1_OFFSET))(B8144BB7BA74843B, F18C506CE24B0B34);
	}

	static ::System::String* E7E18D09829482BB(::System::String* B8144BB7BA74843B, ::AC53E891708F142C* F5E22A80B76BFEC7)
	{
		return ((::System::String*(*)(::System::String*, ::AC53E891708F142C*))((::PBYTE)hIl2Cpp + B65F2F23EEAC3675_E7E18D09829482BB_OFFSET))(B8144BB7BA74843B, F5E22A80B76BFEC7);
	}
};
