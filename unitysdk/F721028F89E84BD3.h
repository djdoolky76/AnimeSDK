#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECE5A2D68BA46DAB.h"

class E5933D89D4AB3527;
namespace System { class String; }

#define F721028F89E84BD3_ABC14E8DCBFDFA28_OFFSET UNITYSDK_OFFSET(0x3E8A980)
#define F721028F89E84BD3_FA714D6F6F98A59F_OFFSET UNITYSDK_OFFSET(0x27F4F40)
#define F721028F89E84BD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E8A770)
#define F721028F89E84BD3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E8A880)
#define F721028F89E84BD3__CTOR_OFFSET UNITYSDK_OFFSET(0x3E8A8B0)

inline static constexpr unsigned int F721028F89E84BD3_TypeDefinitionIndex = 14966;

class F721028F89E84BD3 : public ::ECE5A2D68BA46DAB
{
public:
	static ::F721028F89E84BD3** StaticGet_A60D7C7C7FF61A83()
	{
		return (::F721028F89E84BD3**)Il2CppClass::FromTypeDefinitionIndex(F721028F89E84BD3_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<::System::Int32>* A0A828F52A89AE8A; // 0x20
	::System::Int32 FC8FCD6954394746; // 0x28
	::System::Byte _padding0[0x4];
	::E5933D89D4AB3527* AC047266C86D2D96; // 0x30
	::System::String* A9DFDE835E8FE4EF; // 0x38

	::E5933D89D4AB3527* ABC14E8DCBFDFA28()
	{
		return ((::E5933D89D4AB3527*(*)(::PVOID))((::PBYTE)hIl2Cpp + F721028F89E84BD3_ABC14E8DCBFDFA28_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F721028F89E84BD3__CCTOR_OFFSET))();
	}

	::System::Boolean FA714D6F6F98A59F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F721028F89E84BD3_FA714D6F6F98A59F_OFFSET))(this);
	}

	::System::Void _ctor(::System::String* E97E8D008427A296, ::Il2CppArray<::System::Int32>* BD8B09E824741283, ::System::Int32 BEAB56739AB1FAED, ::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + F721028F89E84BD3__CTOR_OFFSET))(this, E97E8D008427A296, BD8B09E824741283, BEAB56739AB1FAED, F79B4D487F303AB2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F721028F89E84BD3__CTOR_1_OFFSET))(this);
	}
};
