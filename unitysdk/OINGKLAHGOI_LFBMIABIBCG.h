#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHCAHMCCPML.h"
#include "unitysdk/System/Object.h"

class OINGKLAHGOI;

#define OINGKLAHGOI_LFBMIABIBCG_EFBJMNFDIGF_OFFSET UNITYSDK_OFFSET(0x10076D60)
#define OINGKLAHGOI_LFBMIABIBCG__CTOR_OFFSET UNITYSDK_OFFSET(0x10075FB0)

inline static constexpr unsigned int OINGKLAHGOI_LFBMIABIBCG_TypeDefinitionIndex = 65244;

class OINGKLAHGOI_LFBMIABIBCG : public ::System::Object
{
public:
	::OINGKLAHGOI* KLHPEBKNIFB; // 0x10
	::GHCAHMCCPML FKMHMOELCIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_LFBMIABIBCG__CTOR_OFFSET))(this);
	}

	::System::Void EFBJMNFDIGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_LFBMIABIBCG_EFBJMNFDIGF_OFFSET))(this);
	}
};
