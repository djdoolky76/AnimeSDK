#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E1AB41D83D7E81CB;
namespace System { class String; }

#define FC74A2BD9002E088_AD55FC94E481B6CC_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define FC74A2BD9002E088_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define FC74A2BD9002E088_FF1F721681561554_OFFSET UNITYSDK_OFFSET(0x44545A0)
#define FC74A2BD9002E088__CCTOR_OFFSET UNITYSDK_OFFSET(0x4453F70)
#define FC74A2BD9002E088__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65400)

inline static constexpr unsigned int FC74A2BD9002E088_TypeDefinitionIndex = 19048;

class FC74A2BD9002E088 : public ::System::Object
{
public:
	static ::FC74A2BD9002E088** StaticGet_B0763DD8A09B342C()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::FC74A2BD9002E088** StaticGet_B839E4253092F8CA()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::FC74A2BD9002E088** StaticGet_A0C2AB01B4816856()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::FC74A2BD9002E088** StaticGet_A879C44FDD2C2F6D()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::FC74A2BD9002E088** StaticGet_F3F03266A3ABFEA4()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::FC74A2BD9002E088** StaticGet_AF479F91095A294D()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x28);
	}
	static ::FC74A2BD9002E088** StaticGet_F96786994FBD5CEC()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x30);
	}
	static ::FC74A2BD9002E088** StaticGet_EB9CCA6946E87D1E()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x38);
	}
	static ::FC74A2BD9002E088** StaticGet_A9F02C7339525AE7()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x40);
	}
	static ::FC74A2BD9002E088** StaticGet_B6F540E28E77653B()
	{
		return (::FC74A2BD9002E088**)Il2CppClass::FromTypeDefinitionIndex(FC74A2BD9002E088_TypeDefinitionIndex)->GetStaticField(0x48);
	}
	::Il2CppArray<::System::Int32>* ECA7CF60F9B5EA15; // 0x10
	::System::Int32 F78F95399FFB61DC; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* F79B4D487F303AB2; // 0x20

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FC74A2BD9002E088_EA28CF291EBB2931_OFFSET))(this);
	}

	::System::Void _ctor(::Il2CppArray<::System::Int32>* ECA7CF60F9B5EA15, ::System::Int32 F78F95399FFB61DC, ::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FC74A2BD9002E088__CTOR_OFFSET))(this, ECA7CF60F9B5EA15, F78F95399FFB61DC, F79B4D487F303AB2);
	}

	::System::Int32 FF1F721681561554(::E1AB41D83D7E81CB* EBDD08B044E6BE63)
	{
		return ((::System::Int32(*)(::PVOID, ::E1AB41D83D7E81CB*))((::PBYTE)hIl2Cpp + FC74A2BD9002E088_FF1F721681561554_OFFSET))(this, EBDD08B044E6BE63);
	}

	::System::Int32 AD55FC94E481B6CC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FC74A2BD9002E088_AD55FC94E481B6CC_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FC74A2BD9002E088__CCTOR_OFFSET))();
	}
};
