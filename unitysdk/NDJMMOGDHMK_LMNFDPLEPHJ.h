#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MIHMBLFBJAL;
class OAEFGCLEHHO;
namespace System { class Action; }

#define NDJMMOGDHMK_LMNFDPLEPHJ_CCPGICOGGPN_OFFSET UNITYSDK_OFFSET(0xE18F0E0)
#define NDJMMOGDHMK_LMNFDPLEPHJ_NAOALENGMOG_OFFSET UNITYSDK_OFFSET(0xE18F0F0)
#define NDJMMOGDHMK_LMNFDPLEPHJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE18F0D0)

inline static constexpr unsigned int NDJMMOGDHMK_LMNFDPLEPHJ_TypeDefinitionIndex = 51327;

class NDJMMOGDHMK_LMNFDPLEPHJ : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJMMOGDHMK_LMNFDPLEPHJ__CTOR_OFFSET))(this);
	}

	::System::Void CCPGICOGGPN(::MIHMBLFBJAL* AEPOAEDIFKP)
	{
		return ((::System::Void(*)(::PVOID, ::MIHMBLFBJAL*))((::PBYTE)hIl2Cpp + NDJMMOGDHMK_LMNFDPLEPHJ_CCPGICOGGPN_OFFSET))(this, AEPOAEDIFKP);
	}

	::System::Void NAOALENGMOG(::OAEFGCLEHHO* EEOGNEDJCPO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NDJMMOGDHMK_LMNFDPLEPHJ_NAOALENGMOG_OFFSET))(this, EEOGNEDJCPO);
	}
};
