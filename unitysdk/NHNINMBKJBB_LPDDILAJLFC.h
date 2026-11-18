#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGLMNBCBJGJ;
class NHNINMBKJBB;
namespace System { class Action; }

#define NHNINMBKJBB_LPDDILAJLFC_AOLOOHKBJGL_OFFSET UNITYSDK_OFFSET(0x13759F10)
#define NHNINMBKJBB_LPDDILAJLFC_KOKGDFMBJMD_OFFSET UNITYSDK_OFFSET(0x1375A230)
#define NHNINMBKJBB_LPDDILAJLFC_MIGFBGELBAL_OFFSET UNITYSDK_OFFSET(0x1375A010)
#define NHNINMBKJBB_LPDDILAJLFC_OKLLCBNJGEN_OFFSET UNITYSDK_OFFSET(0x13759F20)
#define NHNINMBKJBB_LPDDILAJLFC__CTOR_OFFSET UNITYSDK_OFFSET(0x13759F00)

inline static constexpr unsigned int NHNINMBKJBB_LPDDILAJLFC_TypeDefinitionIndex = 90319;

class NHNINMBKJBB_LPDDILAJLFC : public ::System::Object
{
public:
	::NHNINMBKJBB* KLHPEBKNIFB; // 0x10
	::GGLMNBCBJGJ* DFMKILICPFB; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::Boolean NGLPLNECMCL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNINMBKJBB_LPDDILAJLFC__CTOR_OFFSET))(this);
	}

	::System::Void AOLOOHKBJGL(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 MLIGANAEDBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NHNINMBKJBB_LPDDILAJLFC_AOLOOHKBJGL_OFFSET))(this, GFOPLDDFDIA, MLIGANAEDBC);
	}

	::System::Void MIGFBGELBAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNINMBKJBB_LPDDILAJLFC_MIGFBGELBAL_OFFSET))(this);
	}

	::System::Void KOKGDFMBJMD(::System::UInt32 NAKGONOOIPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHNINMBKJBB_LPDDILAJLFC_KOKGDFMBJMD_OFFSET))(this, NAKGONOOIPB);
	}

	::System::Void OKLLCBNJGEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNINMBKJBB_LPDDILAJLFC_OKLLCBNJGEN_OFFSET))(this);
	}
};
