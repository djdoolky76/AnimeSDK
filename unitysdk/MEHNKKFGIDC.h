#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define MEHNKKFGIDC_BBJALJPFGBG_OFFSET UNITYSDK_OFFSET(0x1F7D8B80)
#define MEHNKKFGIDC_DILABNGJPMN_OFFSET UNITYSDK_OFFSET(0x1F7D8B20)
#define MEHNKKFGIDC_INJIKLJKAKK_OFFSET UNITYSDK_OFFSET(0x1F7D8B30)
#define MEHNKKFGIDC_IODBDPOLPKA_OFFSET UNITYSDK_OFFSET(0x1F7D8AE0)

inline static constexpr unsigned int MEHNKKFGIDC_TypeDefinitionIndex = 8311;

class MEHNKKFGIDC : public ::System::Object
{
public:
	static ::System::Void IODBDPOLPKA(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MEHNKKFGIDC_IODBDPOLPKA_OFFSET))(NAPFALLANDL);
	}

	static ::System::Void INJIKLJKAKK(::System::String* NAPFALLANDL, ::System::Exception* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + MEHNKKFGIDC_INJIKLJKAKK_OFFSET))(NAPFALLANDL, BLLNHDIDKPA);
	}

	static ::System::Void BBJALJPFGBG(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MEHNKKFGIDC_BBJALJPFGBG_OFFSET))(NAPFALLANDL);
	}

	static ::System::Boolean DILABNGJPMN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEHNKKFGIDC_DILABNGJPMN_OFFSET))();
	}
};
