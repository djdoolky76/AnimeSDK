#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BINGPDLFKIK_FEMLHFGOKKC.h"

namespace System { class String; }

#define GDMJEOIHECL_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x1324F710)
#define GDMJEOIHECL_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x1324F6C0)
#define GDMJEOIHECL_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1324F740)
#define GDMJEOIHECL_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1324F720)
#define GDMJEOIHECL_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x1324F730)
#define GDMJEOIHECL_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1324F130)
#define GDMJEOIHECL_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1324F5E0)
#define GDMJEOIHECL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1324F4B0)
#define GDMJEOIHECL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1324F2B0)
#define GDMJEOIHECL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1324F660)
#define GDMJEOIHECL__CTOR_OFFSET UNITYSDK_OFFSET(0x1324F620)

inline static constexpr unsigned int GDMJEOIHECL_TypeDefinitionIndex = 69528;

class GDMJEOIHECL
{
public:
	static ::System::String** StaticGet_PLCBEALBJDL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GDMJEOIHECL_TypeDefinitionIndex)->GetStaticField(0x31BF0);
	}
	static ::System::String** StaticGet_LFADPNLJJMI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GDMJEOIHECL_TypeDefinitionIndex)->GetStaticField(0x31BF8);
	}
	static ::System::String** StaticGet_DGNDMHFDBAJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GDMJEOIHECL_TypeDefinitionIndex)->GetStaticField(0x31C00);
	}
	::BINGPDLFKIK_FEMLHFGOKKC OFAJAJOFGNC; // 0x28
	::System::String* LMJJHBBKLHL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJEOIHECL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDMJEOIHECL__CCTOR_OFFSET))();
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJEOIHECL_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJEOIHECL_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJEOIHECL_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJEOIHECL_ONDETACH_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::System::String* KDGEDPMJADN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDMJEOIHECL_AMEGHCHMIOD_OFFSET))(this, KDGEDPMJADN);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJEOIHECL_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJEOIHECL_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJEOIHECL_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMJEOIHECL_ILHIIDBCNEC_OFFSET))(this);
	}
};
