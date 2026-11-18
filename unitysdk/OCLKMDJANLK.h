#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Action; }
namespace System { class String; }

#define OCLKMDJANLK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C09C800)
#define OCLKMDJANLK_JEJDKEOGNIN_OFFSET UNITYSDK_OFFSET(0x1C09C780)
#define OCLKMDJANLK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C09C7C0)
#define OCLKMDJANLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C09C8A0)

inline static constexpr unsigned int OCLKMDJANLK_TypeDefinitionIndex = 10756;

class OCLKMDJANLK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKMDJANLK__CTOR_OFFSET))(this);
	}

	::System::String* JEJDKEOGNIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKMDJANLK_JEJDKEOGNIN_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKMDJANLK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OCLKMDJANLK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}
};
