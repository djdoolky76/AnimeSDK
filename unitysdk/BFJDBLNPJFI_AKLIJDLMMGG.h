#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BFJDBLNPJFI_AKLIJDLMMGG__CTOR_OFFSET UNITYSDK_OFFSET(0x18550440)

inline static constexpr unsigned int BFJDBLNPJFI_AKLIJDLMMGG_TypeDefinitionIndex = 74920;

class BFJDBLNPJFI_AKLIJDLMMGG : public ::System::Object
{
public:
	static ::System::Int64* StaticGet_BIJIPJPJJPJ()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(BFJDBLNPJFI_AKLIJDLMMGG_TypeDefinitionIndex)->GetStaticField(0xC480);
	}
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Boolean OAADOHGJOMI; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single FNIOPKPHDEH; // 0x1C
	::System::Int64 ACHBBPJIBIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJDBLNPJFI_AKLIJDLMMGG__CTOR_OFFSET))(this);
	}
};
