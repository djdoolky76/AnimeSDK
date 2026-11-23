#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

class E129C0BBF699E635;
class FA68FAC2AF91A623;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define F2B4720FA9B2ABE3_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x28F33C0)
#define F2B4720FA9B2ABE3_E8AF1E0387A100FA_1_OFFSET UNITYSDK_OFFSET(0x3EEDC70)
#define F2B4720FA9B2ABE3_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3EEDC00)
#define F2B4720FA9B2ABE3_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3EEDF90)
#define F2B4720FA9B2ABE3_EEAD68FDFBCBF52C_OFFSET UNITYSDK_OFFSET(0x3EEDED0)
#define F2B4720FA9B2ABE3_F7954180A615732F_OFFSET UNITYSDK_OFFSET(0x3EEE160)
#define F2B4720FA9B2ABE3__CCTOR_OFFSET UNITYSDK_OFFSET(0x3EEE0F0)
#define F2B4720FA9B2ABE3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F2B4720FA9B2ABE3_TypeDefinitionIndex = 15258;

class F2B4720FA9B2ABE3 : public ::System::MarshalByRefObject
{
public:
	static ::System::Object** StaticGet_BBCDDF8F2DAD32ED()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(F2B4720FA9B2ABE3_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::FA68FAC2AF91A623* BB7B6380AFA22324; // 0x18
	::E129C0BBF699E635* AA1B23DE73E471D5; // 0x20

	::System::Object* EEAD68FDFBCBF52C(::System::Type* F1777FCC724BA59A)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + F2B4720FA9B2ABE3_EEAD68FDFBCBF52C_OFFSET))(this, F1777FCC724BA59A);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2B4720FA9B2ABE3_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2B4720FA9B2ABE3_E6A4EDFB781D1DCC_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2B4720FA9B2ABE3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F2B4720FA9B2ABE3__CCTOR_OFFSET))();
	}

	::System::Boolean F7954180A615732F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F2B4720FA9B2ABE3_F7954180A615732F_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA_1(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F2B4720FA9B2ABE3_E8AF1E0387A100FA_1_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F2B4720FA9B2ABE3_EA28CF291EBB2931_OFFSET))(this);
	}
};
