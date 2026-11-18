#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"

class ADEFGFOLCNC;

#define CAKCIIFLNDK___C_GHIDMJBANNB_OFFSET UNITYSDK_OFFSET(0x1399A630)
#define CAKCIIFLNDK___C_KKKDGMKMGNO_OFFSET UNITYSDK_OFFSET(0x1399A6F0)
#define CAKCIIFLNDK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1399A5E0)
#define CAKCIIFLNDK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1399A620)

inline static constexpr unsigned int CAKCIIFLNDK___c_TypeDefinitionIndex = 76209;

class CAKCIIFLNDK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CAKCIIFLNDK___c_TypeDefinitionIndex)->GetStaticField(0x497D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAKCIIFLNDK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK___C__CTOR_OFFSET))(this);
	}

	::System::Void GHIDMJBANNB(::ADEFGFOLCNC*& EGEGIMGMJHN, ::Foundation::ViewObject::Container::SparseElementHandle_1<::ADEFGFOLCNC*> PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::ADEFGFOLCNC*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::ADEFGFOLCNC*>))((::PBYTE)hIl2Cpp + CAKCIIFLNDK___C_GHIDMJBANNB_OFFSET))(this, EGEGIMGMJHN, PHHDHIBOCKA);
	}

	::System::Void KKKDGMKMGNO(::ADEFGFOLCNC*& EGEGIMGMJHN, ::Foundation::ViewObject::Container::SparseElementHandle_1<::ADEFGFOLCNC*> PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::ADEFGFOLCNC*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::ADEFGFOLCNC*>))((::PBYTE)hIl2Cpp + CAKCIIFLNDK___C_KKKDGMKMGNO_OFFSET))(this, EGEGIMGMJHN, PHHDHIBOCKA);
	}
};
