#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOHHIICFBPC;
class PNJDGHBEMLK;

#define AENDIENHBKL_AJDKIGOKOFF_OFFSET UNITYSDK_OFFSET(0x144CE890)
#define AENDIENHBKL_BEPAECKDPEM_OFFSET UNITYSDK_OFFSET(0x144CE780)
#define AENDIENHBKL_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x144CE820)
#define AENDIENHBKL_CIIABIDGBHJ_OFFSET UNITYSDK_OFFSET(0x144CE7D0)
#define AENDIENHBKL__CCTOR_OFFSET UNITYSDK_OFFSET(0x144CE880)
#define AENDIENHBKL__CTOR_OFFSET UNITYSDK_OFFSET(0x144CE870)

inline static constexpr unsigned int AENDIENHBKL_TypeDefinitionIndex = 90651;

class AENDIENHBKL : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_BHNDLLGLHEE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AENDIENHBKL_TypeDefinitionIndex)->GetStaticField(0xF370);
	}
	::FOHHIICFBPC* KOGOHFLCJLC; // 0x10
	::PNJDGHBEMLK* EBOBJCACBAB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENDIENHBKL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AENDIENHBKL__CCTOR_OFFSET))();
	}

	::System::Void BEPAECKDPEM(::FOHHIICFBPC* EGILIDBIJOB)
	{
		return ((::System::Void(*)(::PVOID, ::FOHHIICFBPC*))((::PBYTE)hIl2Cpp + AENDIENHBKL_BEPAECKDPEM_OFFSET))(this, EGILIDBIJOB);
	}

	::System::Void CIIABIDGBHJ(::FOHHIICFBPC* EGILIDBIJOB)
	{
		return ((::System::Void(*)(::PVOID, ::FOHHIICFBPC*))((::PBYTE)hIl2Cpp + AENDIENHBKL_CIIABIDGBHJ_OFFSET))(this, EGILIDBIJOB);
	}

	::System::Void CHCGMACMJLD(::FOHHIICFBPC* EGILIDBIJOB, ::System::Boolean AEBGBPDHAAJ)
	{
		return ((::System::Void(*)(::PVOID, ::FOHHIICFBPC*, ::System::Boolean))((::PBYTE)hIl2Cpp + AENDIENHBKL_CHCGMACMJLD_OFFSET))(this, EGILIDBIJOB, AEBGBPDHAAJ);
	}

	::System::Void AJDKIGOKOFF(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + AENDIENHBKL_AJDKIGOKOFF_OFFSET))(this, CDKCJAKODPN);
	}
};
