#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF52BA61B7503140.h"

namespace System::Text { class StringBuilder; }

#define F9737AE175471166_A87235F495CFB5DE_OFFSET UNITYSDK_OFFSET(0x4417650)
#define F9737AE175471166__CCTOR_OFFSET UNITYSDK_OFFSET(0x44173C0)
#define F9737AE175471166__CTOR_OFFSET UNITYSDK_OFFSET(0x4417580)

inline static constexpr unsigned int F9737AE175471166_TypeDefinitionIndex = 18929;

class F9737AE175471166 : public ::BF52BA61B7503140
{
public:
	static ::System::Int32* StaticGet_E84F0AAEA54AD759()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(F9737AE175471166_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_FB3B548923A2891F()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(F9737AE175471166_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_F059BE88A95C853F()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(F9737AE175471166_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_ABDD78D8C2155ABB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(F9737AE175471166_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_E787D583563A3F46()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(F9737AE175471166_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	::System::Text::StringBuilder* A7DD4522BD8BCD3F; // 0x10
	::Il2CppArray<::System::Int32>* B994D05068DA1A02; // 0x18
	::System::Int32 BB860689F7A72786; // 0x20

	static ::System::Boolean A87235F495CFB5DE(::Il2CppArray<::System::Char>* EDF8D5B13A3EE433, ::System::Char A5C299C395D3E1B2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::Char>*, ::System::Char))((::PBYTE)hIl2Cpp + F9737AE175471166_A87235F495CFB5DE_OFFSET))(EDF8D5B13A3EE433, A5C299C395D3E1B2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F9737AE175471166__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9737AE175471166__CTOR_OFFSET))(this);
	}
};
