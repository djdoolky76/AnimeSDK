#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Action; }
namespace System { class String; }

#define JKHIFDONDBI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1935D150)
#define JKHIFDONDBI_JEJDKEOGNIN_OFFSET UNITYSDK_OFFSET(0x1935D0D0)
#define JKHIFDONDBI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1935D110)
#define JKHIFDONDBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1935D1F0)

inline static constexpr unsigned int JKHIFDONDBI_TypeDefinitionIndex = 11643;

class JKHIFDONDBI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIFDONDBI__CTOR_OFFSET))(this);
	}

	::System::String* JEJDKEOGNIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIFDONDBI_JEJDKEOGNIN_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIFDONDBI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JKHIFDONDBI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}
};
