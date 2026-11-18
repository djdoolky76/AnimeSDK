#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODGJLEDJBJI;
namespace System { class Action; }

#define ODGJLEDJBJI_GAKKGJCOGNP_GIIHIOHMCLJ_OFFSET UNITYSDK_OFFSET(0xFD65110)
#define ODGJLEDJBJI_GAKKGJCOGNP_KFHMJOJIDOH_OFFSET UNITYSDK_OFFSET(0xFD65150)
#define ODGJLEDJBJI_GAKKGJCOGNP__CTOR_OFFSET UNITYSDK_OFFSET(0xFD65100)

inline static constexpr unsigned int ODGJLEDJBJI_GAKKGJCOGNP_TypeDefinitionIndex = 73476;

class ODGJLEDJBJI_GAKKGJCOGNP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::ODGJLEDJBJI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_GAKKGJCOGNP__CTOR_OFFSET))(this);
	}

	::System::Void GIIHIOHMCLJ(::System::UInt64 JGFGBMHHGFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_GAKKGJCOGNP_GIIHIOHMCLJ_OFFSET))(this, JGFGBMHHGFA);
	}

	::System::Void KFHMJOJIDOH(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_GAKKGJCOGNP_KFHMJOJIDOH_OFFSET))(this, DJCNCELJPOM);
	}
};
