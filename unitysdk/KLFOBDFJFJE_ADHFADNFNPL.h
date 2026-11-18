#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

namespace System { class Action; }

#define KLFOBDFJFJE_ADHFADNFNPL_FNBKPMBIKEA_OFFSET UNITYSDK_OFFSET(0x17721B10)
#define KLFOBDFJFJE_ADHFADNFNPL_JLDIMCDJDKO_OFFSET UNITYSDK_OFFSET(0x17721B00)
#define KLFOBDFJFJE_ADHFADNFNPL__CTOR_OFFSET UNITYSDK_OFFSET(0x17721AF0)

inline static constexpr unsigned int KLFOBDFJFJE_ADHFADNFNPL_TypeDefinitionIndex = 58484;

class KLFOBDFJFJE_ADHFADNFNPL : public ::System::Object
{
public:
	::System::Action* NHIJMEGJIAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ADHFADNFNPL__CTOR_OFFSET))(this);
	}

	::System::Void JLDIMCDJDKO(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ADHFADNFNPL_JLDIMCDJDKO_OFFSET))(this, DMIAICJPPDL);
	}

	::System::Void FNBKPMBIKEA(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ADHFADNFNPL_FNBKPMBIKEA_OFFSET))(this, DMIAICJPPDL);
	}
};
