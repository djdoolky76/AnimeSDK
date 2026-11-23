#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF52BA61B7503140.h"
#include "unitysdk/System/Nullable_1.h"

class EA4DA51FCD8EC092;
class F9199225A2EB5F55;
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define B4F2F9DFF61235FE_F7C8818F76B86631_OFFSET UNITYSDK_OFFSET(0x4428000)
#define B4F2F9DFF61235FE_FAFD9147E8DFEE74_OFFSET UNITYSDK_OFFSET(0x4427F20)
#define B4F2F9DFF61235FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x44275A0)
#define B4F2F9DFF61235FE__CTOR_OFFSET UNITYSDK_OFFSET(0x4427CB0)

inline static constexpr unsigned int B4F2F9DFF61235FE_TypeDefinitionIndex = 18947;

class B4F2F9DFF61235FE : public ::BF52BA61B7503140
{
public:
	static ::System::Int32* StaticGet_FB66DE31DA0BFB03()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(B4F2F9DFF61235FE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_FF8D91CB165EB9E5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(B4F2F9DFF61235FE_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_E42462F537025EC8()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B4F2F9DFF61235FE_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_AFBB2BD9762EDC99()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B4F2F9DFF61235FE_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_E37749C62506AA56()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B4F2F9DFF61235FE_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_A37D68C338E13059()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(B4F2F9DFF61235FE_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_AB92DC248108D5A1()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(B4F2F9DFF61235FE_TypeDefinitionIndex)->GetStaticField(0x28);
	}
	::System::Text::StringBuilder* FFA0F075F741CDDB; // 0x10
	::F9199225A2EB5F55* BB14FCA24F6A7D1B; // 0x18
	::EA4DA51FCD8EC092* F519F2EC823FE519; // 0x20

	static ::System::Nullable_1<::System::Int32> F7C8818F76B86631(::System::String* B9AEC57275825552)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + B4F2F9DFF61235FE_F7C8818F76B86631_OFFSET))(B9AEC57275825552);
	}

	static ::System::Boolean FAFD9147E8DFEE74(::System::String* B9AEC57275825552)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + B4F2F9DFF61235FE_FAFD9147E8DFEE74_OFFSET))(B9AEC57275825552);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B4F2F9DFF61235FE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F2F9DFF61235FE__CTOR_OFFSET))(this);
	}
};
