#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class NJCGGJODIDB;

#define NJCGGJODIDB_NIEILFFLOMH_FBJFJMNDMIM_OFFSET UNITYSDK_OFFSET(0x1149FBE0)
#define NJCGGJODIDB_NIEILFFLOMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1149A770)

inline static constexpr unsigned int NJCGGJODIDB_NIEILFFLOMH_TypeDefinitionIndex = 54980;

class NJCGGJODIDB_NIEILFFLOMH : public ::System::Object
{
public:
	::NJCGGJODIDB* KLHPEBKNIFB; // 0x10
	::FBHPDPBIGPK* JDPKJJCKJLG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCGGJODIDB_NIEILFFLOMH__CTOR_OFFSET))(this);
	}

	::System::Void FBJFJMNDMIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCGGJODIDB_NIEILFFLOMH_FBJFJMNDMIM_OFFSET))(this);
	}
};
