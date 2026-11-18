#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OOKPBLKKGIP_EFIOIKNOJKK_OFFSET UNITYSDK_OFFSET(0x16C49850)
#define OOKPBLKKGIP_HIGLKDADBFH_OFFSET UNITYSDK_OFFSET(0x16C49D80)
#define OOKPBLKKGIP_LCCDBCABGED_OFFSET UNITYSDK_OFFSET(0x16C49B10)
#define OOKPBLKKGIP_MADIFAENDGA_OFFSET UNITYSDK_OFFSET(0x16C49890)

inline static constexpr unsigned int OOKPBLKKGIP_TypeDefinitionIndex = 52794;

class OOKPBLKKGIP : public ::System::Object
{
public:
	// static const ::System::String* KNEILIDLNFJ; // 0x0

	static ::System::String* EFIOIKNOJKK()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + OOKPBLKKGIP_EFIOIKNOJKK_OFFSET))();
	}

	static ::System::Void LCCDBCABGED()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOKPBLKKGIP_LCCDBCABGED_OFFSET))();
	}

	static ::System::String* MADIFAENDGA()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + OOKPBLKKGIP_MADIFAENDGA_OFFSET))();
	}

	static ::System::String* HIGLKDADBFH(::System::String* MGMDLMBEDJF)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + OOKPBLKKGIP_HIGLKDADBFH_OFFSET))(MGMDLMBEDJF);
	}
};
