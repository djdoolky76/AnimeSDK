#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FA942FEBDF63D532_F031BC839D53B0D7_AF28EA4224EF69AB_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3E2D690)
#define FA942FEBDF63D532_F031BC839D53B0D7_AF28EA4224EF69AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E2D710)

inline static constexpr unsigned int FA942FEBDF63D532_F031BC839D53B0D7_AF28EA4224EF69AB_TypeDefinitionIndex = 15300;

class FA942FEBDF63D532_F031BC839D53B0D7_AF28EA4224EF69AB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_FC5418FD0EB538F9()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FA942FEBDF63D532_F031BC839D53B0D7_AF28EA4224EF69AB_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* EA28CF291EBB2931(::System::Int32 EB211B01816ACA79)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FA942FEBDF63D532_F031BC839D53B0D7_AF28EA4224EF69AB_EA28CF291EBB2931_OFFSET))(EB211B01816ACA79);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FA942FEBDF63D532_F031BC839D53B0D7_AF28EA4224EF69AB__CCTOR_OFFSET))();
	}
};
