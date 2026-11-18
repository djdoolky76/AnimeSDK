#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODGJLEDJBJI;
namespace System { class Action; }

#define ODGJLEDJBJI_DFONDINEOAH_ICJJPJKNFKJ_OFFSET UNITYSDK_OFFSET(0x16BFCBC0)
#define ODGJLEDJBJI_DFONDINEOAH_INAFNFPKHEC_OFFSET UNITYSDK_OFFSET(0x16BFCDE0)
#define ODGJLEDJBJI_DFONDINEOAH__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFCBB0)

inline static constexpr unsigned int ODGJLEDJBJI_DFONDINEOAH_TypeDefinitionIndex = 73474;

class ODGJLEDJBJI_DFONDINEOAH : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::ODGJLEDJBJI* KLHPEBKNIFB; // 0x18
	::System::Action* BLLNHDIDKPA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_DFONDINEOAH__CTOR_OFFSET))(this);
	}

	::System::Void ICJJPJKNFKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_DFONDINEOAH_ICJJPJKNFKJ_OFFSET))(this);
	}

	::System::Void INAFNFPKHEC(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_DFONDINEOAH_INAFNFPKHEC_OFFSET))(this, DJCNCELJPOM);
	}
};
