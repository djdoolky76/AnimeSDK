#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJIEOECLNOM;
namespace System { class String; }

#define PCMENEMPLGF_JHCOBPJHPCG_CDDGDAMHGGC_OFFSET UNITYSDK_OFFSET(0x16F9DB70)
#define PCMENEMPLGF_JHCOBPJHPCG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9DB60)

inline static constexpr unsigned int PCMENEMPLGF_JHCOBPJHPCG_TypeDefinitionIndex = 62876;

class PCMENEMPLGF_JHCOBPJHPCG : public ::System::Object
{
public:
	::NJIEOECLNOM* FJHIDNECMIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_JHCOBPJHPCG__CTOR_OFFSET))(this);
	}

	::System::String* CDDGDAMHGGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_JHCOBPJHPCG_CDDGDAMHGGC_OFFSET))(this);
	}
};
