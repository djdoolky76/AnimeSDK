#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4F2F9DFF61235FE.h"

namespace System { class String; }

#define AF24208928385AF6_F8C2DB344E749F01_OFFSET UNITYSDK_OFFSET(0x4428470)
#define AF24208928385AF6__CCTOR_OFFSET UNITYSDK_OFFSET(0x4428250)
#define AF24208928385AF6__CTOR_OFFSET UNITYSDK_OFFSET(0x44283F0)

inline static constexpr unsigned int AF24208928385AF6_TypeDefinitionIndex = 18930;

class AF24208928385AF6 : public ::B4F2F9DFF61235FE
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_F3A95131273D0AAC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AF24208928385AF6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_EFC955F276A84679()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AF24208928385AF6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::Il2CppArray<::System::Int32>* BA0F2AC82C3269D4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF24208928385AF6__CTOR_OFFSET))(this);
	}

	static ::System::String* F8C2DB344E749F01(::System::String* F4E8F02AAE88348C)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AF24208928385AF6_F8C2DB344E749F01_OFFSET))(F4E8F02AAE88348C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AF24208928385AF6__CCTOR_OFFSET))();
	}
};
