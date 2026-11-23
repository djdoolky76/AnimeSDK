#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define F839A943030DD183_ACB03FCD97A562E8_1_OFFSET UNITYSDK_OFFSET(0x415FBA0)
#define F839A943030DD183_ACB03FCD97A562E8_OFFSET UNITYSDK_OFFSET(0x415FB30)
#define F839A943030DD183_B201DD09DDF57516_1_OFFSET UNITYSDK_OFFSET(0x415FA90)
#define F839A943030DD183_B2A7A454ACA3B6C3_OFFSET UNITYSDK_OFFSET(0x415F7D0)
#define F839A943030DD183_E3CF4C1444B70AD2_OFFSET UNITYSDK_OFFSET(0x415F980)
#define F839A943030DD183_F236C41A0FF5DAC5_2_OFFSET UNITYSDK_OFFSET(0x415F9F0)
#define F839A943030DD183_FF5C7DEF914CF9B5_1_OFFSET UNITYSDK_OFFSET(0x415F720)
#define F839A943030DD183_FF5C7DEF914CF9B5_OFFSET UNITYSDK_OFFSET(0x415F6B0)
#define F839A943030DD183__CCTOR_OFFSET UNITYSDK_OFFSET(0x415FC30)

inline static constexpr unsigned int F839A943030DD183_TypeDefinitionIndex = 17509;

class F839A943030DD183 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_A1605EC19CE3F6E5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(F839A943030DD183_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void B2A7A454ACA3B6C3(::System::String* B083BE7841B347C4, ::System::String* B6A68089052E3785)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + F839A943030DD183_B2A7A454ACA3B6C3_OFFSET))(B083BE7841B347C4, B6A68089052E3785);
	}

	static ::System::Void FF5C7DEF914CF9B5(::System::Int32 A1D4FD4AAC085C34, ::System::Int32 F1CF27F1BC2B053A)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + F839A943030DD183_FF5C7DEF914CF9B5_OFFSET))(A1D4FD4AAC085C34, F1CF27F1BC2B053A);
	}

	static ::System::Void E3CF4C1444B70AD2(::System::Boolean B37E8E89CDAB6CFC, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + F839A943030DD183_E3CF4C1444B70AD2_OFFSET))(B37E8E89CDAB6CFC, B083BE7841B347C4);
	}

	static ::System::Void ACB03FCD97A562E8(::System::Boolean B37E8E89CDAB6CFC, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + F839A943030DD183_ACB03FCD97A562E8_OFFSET))(B37E8E89CDAB6CFC, B083BE7841B347C4);
	}

	static ::System::Void ACB03FCD97A562E8_1(::System::Boolean B37E8E89CDAB6CFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + F839A943030DD183_ACB03FCD97A562E8_1_OFFSET))(B37E8E89CDAB6CFC);
	}

	static ::System::Void FF5C7DEF914CF9B5_1(::UnityEngine::Object* A1D4FD4AAC085C34, ::UnityEngine::Object* F1CF27F1BC2B053A, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + F839A943030DD183_FF5C7DEF914CF9B5_1_OFFSET))(A1D4FD4AAC085C34, F1CF27F1BC2B053A, B083BE7841B347C4);
	}

	static ::System::Void F236C41A0FF5DAC5_2(::UnityEngine::Object* E937D4885DAA1AE8, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + F839A943030DD183_F236C41A0FF5DAC5_2_OFFSET))(E937D4885DAA1AE8, B083BE7841B347C4);
	}

	static ::System::Void B201DD09DDF57516_1(::UnityEngine::Object* E937D4885DAA1AE8, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + F839A943030DD183_B201DD09DDF57516_1_OFFSET))(E937D4885DAA1AE8, B083BE7841B347C4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F839A943030DD183__CCTOR_OFFSET))();
	}
};
