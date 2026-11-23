#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E8801FDA352594C7_A94C0BCA0F0AF335_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define E8801FDA352594C7_AD55FC94E481B6CC_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define E8801FDA352594C7_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E8801FDA352594C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x441D890)
#define E8801FDA352594C7__CTOR_OFFSET UNITYSDK_OFFSET(0x441DBA0)

inline static constexpr unsigned int E8801FDA352594C7_TypeDefinitionIndex = 18943;

class E8801FDA352594C7 : public ::System::Object
{
public:
	static ::E8801FDA352594C7** StaticGet_BE4B85B0A6F8E999()
	{
		return (::E8801FDA352594C7**)Il2CppClass::FromTypeDefinitionIndex(E8801FDA352594C7_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::E8801FDA352594C7** StaticGet_F620C2DBB7259ADB()
	{
		return (::E8801FDA352594C7**)Il2CppClass::FromTypeDefinitionIndex(E8801FDA352594C7_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::E8801FDA352594C7** StaticGet_BF79293AB32A8500()
	{
		return (::E8801FDA352594C7**)Il2CppClass::FromTypeDefinitionIndex(E8801FDA352594C7_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::E8801FDA352594C7** StaticGet_EC4D496F12F8EE11()
	{
		return (::E8801FDA352594C7**)Il2CppClass::FromTypeDefinitionIndex(E8801FDA352594C7_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::Il2CppArray<::E8801FDA352594C7*>** StaticGet_E5D7FC638BF46154()
	{
		return (::Il2CppArray<::E8801FDA352594C7*>**)Il2CppClass::FromTypeDefinitionIndex(E8801FDA352594C7_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	::System::Int32 F78F95399FFB61DC; // 0x10
	::System::Int32 FB12E3E88D963275; // 0x14
	::System::String* F79B4D487F303AB2; // 0x18

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8801FDA352594C7_EA28CF291EBB2931_OFFSET))(this);
	}

	::System::Void _ctor(::System::Int32 A94C0BCA0F0AF335, ::System::Int32 F78F95399FFB61DC, ::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + E8801FDA352594C7__CTOR_OFFSET))(this, A94C0BCA0F0AF335, F78F95399FFB61DC, F79B4D487F303AB2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8801FDA352594C7__CCTOR_OFFSET))();
	}

	::System::Int32 A94C0BCA0F0AF335()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E8801FDA352594C7_A94C0BCA0F0AF335_OFFSET))(this);
	}

	::System::Int32 AD55FC94E481B6CC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E8801FDA352594C7_AD55FC94E481B6CC_OFFSET))(this);
	}
};
