#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ECNIINBHMGN_KACAGCHCGLH;

#define ECNIINBHMGN_KDLEAGCIEHJ_FEBELEDMBOD_OFFSET UNITYSDK_OFFSET(0x1548FD50)
#define ECNIINBHMGN_KDLEAGCIEHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1548FD40)

inline static constexpr unsigned int ECNIINBHMGN_KDLEAGCIEHJ_TypeDefinitionIndex = 45469;

class ECNIINBHMGN_KDLEAGCIEHJ : public ::System::Object
{
public:
	::ECNIINBHMGN_KACAGCHCGLH* PMBFOBOPBLM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIINBHMGN_KDLEAGCIEHJ__CTOR_OFFSET))(this);
	}

	::System::Void FEBELEDMBOD(::System::Int64 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ECNIINBHMGN_KDLEAGCIEHJ_FEBELEDMBOD_OFFSET))(this, ACHBBPJIBIE);
	}
};
