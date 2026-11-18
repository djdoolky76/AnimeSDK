#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKOEJOKOAEC.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CMBFIGBAENC_KJDDAHNOEJP_OFFSET UNITYSDK_OFFSET(0x1696AAB0)
#define CMBFIGBAENC_NLCENALKCKM_OFFSET UNITYSDK_OFFSET(0x1696AAA0)
#define CMBFIGBAENC__CTOR_OFFSET UNITYSDK_OFFSET(0x1696AB00)

inline static constexpr unsigned int CMBFIGBAENC_TypeDefinitionIndex = 49630;

class CMBFIGBAENC : public ::System::Object
{
public:
	::System::Action* NBCEOMOEKDL; // 0x10
	::EKOEJOKOAEC JFLBHBLBMNG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBFIGBAENC__CTOR_OFFSET))(this);
	}

	::EKOEJOKOAEC NLCENALKCKM()
	{
		return ((::EKOEJOKOAEC(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBFIGBAENC_NLCENALKCKM_OFFSET))(this);
	}

	::System::Void KJDDAHNOEJP(::System::Action* NBCEOMOEKDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CMBFIGBAENC_KJDDAHNOEJP_OFFSET))(this, NBCEOMOEKDL);
	}
};
