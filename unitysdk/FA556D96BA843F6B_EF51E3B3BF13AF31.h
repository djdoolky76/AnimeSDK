#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F27C671C4D25A95E.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define FA556D96BA843F6B_EF51E3B3BF13AF31_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3D3B130)
#define FA556D96BA843F6B_EF51E3B3BF13AF31__CTOR_OFFSET UNITYSDK_OFFSET(0x27592A0)

inline static constexpr unsigned int FA556D96BA843F6B_EF51E3B3BF13AF31_TypeDefinitionIndex = 10929;

class FA556D96BA843F6B_EF51E3B3BF13AF31 : public ::F27C671C4D25A95E
{
public:
	::System::String* BDAFB95F691BF736; // 0x10
	::Il2CppArray<::System::Object*>* A4D1D7D05FD8C312; // 0x18

	::System::Void _ctor(::System::String* F1B74DA73881CF9B, ::Il2CppArray<::System::Object*>* AD6CC0F8A05090D3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FA556D96BA843F6B_EF51E3B3BF13AF31__CTOR_OFFSET))(this, F1B74DA73881CF9B, AD6CC0F8A05090D3);
	}

	::System::String* EA28CF291EBB2931(::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
	{
		return ((::System::String*(*)(::PVOID, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + FA556D96BA843F6B_EF51E3B3BF13AF31_EA28CF291EBB2931_OFFSET))(this, F8DAD9E0E63F5FE9);
	}
};
