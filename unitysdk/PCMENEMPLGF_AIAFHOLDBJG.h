#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJIEOECLNOM;
namespace System { class String; }

#define PCMENEMPLGF_AIAFHOLDBJG_OGKMOIEJBEL_OFFSET UNITYSDK_OFFSET(0x155334C0)
#define PCMENEMPLGF_AIAFHOLDBJG__CTOR_OFFSET UNITYSDK_OFFSET(0x155334B0)

inline static constexpr unsigned int PCMENEMPLGF_AIAFHOLDBJG_TypeDefinitionIndex = 62879;

class PCMENEMPLGF_AIAFHOLDBJG : public ::System::Object
{
public:
	::NJIEOECLNOM* FJHIDNECMIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_AIAFHOLDBJG__CTOR_OFFSET))(this);
	}

	::System::String* OGKMOIEJBEL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_AIAFHOLDBJG_OGKMOIEJBEL_OFFSET))(this);
	}
};
