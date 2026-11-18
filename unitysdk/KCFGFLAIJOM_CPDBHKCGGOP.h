#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCFGFLAIJOM;
class KCFGFLAIJOM_FNAIBJLBGJG;
namespace System { class String; }

#define KCFGFLAIJOM_CPDBHKCGGOP_DAFOFKEBPAA_OFFSET UNITYSDK_OFFSET(0x176F3FA0)
#define KCFGFLAIJOM_CPDBHKCGGOP__CTOR_OFFSET UNITYSDK_OFFSET(0x176F3F90)

inline static constexpr unsigned int KCFGFLAIJOM_CPDBHKCGGOP_TypeDefinitionIndex = 67816;

class KCFGFLAIJOM_CPDBHKCGGOP : public ::System::Object
{
public:
	::KCFGFLAIJOM_FNAIBJLBGJG* FMPLFAMBEEL; // 0x10
	::KCFGFLAIJOM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFGFLAIJOM_CPDBHKCGGOP__CTOR_OFFSET))(this);
	}

	::System::Void DAFOFKEBPAA(::System::String* EMIKCAHJLGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KCFGFLAIJOM_CPDBHKCGGOP_DAFOFKEBPAA_OFFSET))(this, EMIKCAHJLGB);
	}
};
