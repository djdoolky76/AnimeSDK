#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OGHNNGDLCDO;
namespace System { template <typename T> class Action_1; }

#define IJKNIOIPNFD___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0xF876B70)
#define IJKNIOIPNFD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF876B20)
#define IJKNIOIPNFD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF876B60)

inline static constexpr unsigned int IJKNIOIPNFD___c_TypeDefinitionIndex = 79949;

class IJKNIOIPNFD___c : public ::System::Object
{
public:
	static ::System::Action_1<::OGHNNGDLCDO*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::OGHNNGDLCDO*>**)Il2CppClass::FromTypeDefinitionIndex(IJKNIOIPNFD___c_TypeDefinitionIndex)->GetStaticField(0x480F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IJKNIOIPNFD___c_TypeDefinitionIndex)->GetStaticField(0x480F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKNIOIPNFD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKNIOIPNFD___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::OGHNNGDLCDO* HBJIPFCEKCJ)
	{
		return ((::System::Void(*)(::PVOID, ::OGHNNGDLCDO*))((::PBYTE)hIl2Cpp + IJKNIOIPNFD___C_AIKNDJKJEKN_OFFSET))(this, HBJIPFCEKCJ);
	}
};
