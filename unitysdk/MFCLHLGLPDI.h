#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Action; }
namespace System { class String; }

#define MFCLHLGLPDI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C178680)
#define MFCLHLGLPDI_JEJDKEOGNIN_OFFSET UNITYSDK_OFFSET(0x1C178600)
#define MFCLHLGLPDI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C178640)
#define MFCLHLGLPDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C178720)

inline static constexpr unsigned int MFCLHLGLPDI_TypeDefinitionIndex = 12229;

class MFCLHLGLPDI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLHLGLPDI__CTOR_OFFSET))(this);
	}

	::System::String* JEJDKEOGNIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLHLGLPDI_JEJDKEOGNIN_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLHLGLPDI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFCLHLGLPDI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}
};
