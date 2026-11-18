#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGOGFACOMBJ;
namespace System { template <typename T> class Action_1; }

#define GCKKNDKPIEN___C_EMHAOCBGPNG_OFFSET UNITYSDK_OFFSET(0x15707D80)
#define GCKKNDKPIEN___C_FHAJDOLFAAJ_OFFSET UNITYSDK_OFFSET(0x15707A90)
#define GCKKNDKPIEN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15707A40)
#define GCKKNDKPIEN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15707A80)

inline static constexpr unsigned int GCKKNDKPIEN___c_TypeDefinitionIndex = 69793;

class GCKKNDKPIEN___c : public ::System::Object
{
public:
	static ::System::Action_1<::DGOGFACOMBJ*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::DGOGFACOMBJ*>**)Il2CppClass::FromTypeDefinitionIndex(GCKKNDKPIEN___c_TypeDefinitionIndex)->GetStaticField(0x435E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GCKKNDKPIEN___c_TypeDefinitionIndex)->GetStaticField(0x435E8);
	}
	static ::System::Action_1<::DGOGFACOMBJ*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::DGOGFACOMBJ*>**)Il2CppClass::FromTypeDefinitionIndex(GCKKNDKPIEN___c_TypeDefinitionIndex)->GetStaticField(0x435F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCKKNDKPIEN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN___C__CTOR_OFFSET))(this);
	}

	::System::Void FHAJDOLFAAJ(::DGOGFACOMBJ* PILKCHMDBOO)
	{
		return ((::System::Void(*)(::PVOID, ::DGOGFACOMBJ*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN___C_FHAJDOLFAAJ_OFFSET))(this, PILKCHMDBOO);
	}

	::System::Void EMHAOCBGPNG(::DGOGFACOMBJ* MBKOJAMIJJB)
	{
		return ((::System::Void(*)(::PVOID, ::DGOGFACOMBJ*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN___C_EMHAOCBGPNG_OFFSET))(this, MBKOJAMIJJB);
	}
};
