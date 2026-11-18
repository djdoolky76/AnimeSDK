#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNCILNLFEE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define JDHGBLHJPDF_PIDGPOFEEDP_EBNKAFAABEB_OFFSET UNITYSDK_OFFSET(0x14FA88F0)
#define JDHGBLHJPDF_PIDGPOFEEDP_KKPCPFEJFEC_OFFSET UNITYSDK_OFFSET(0x14FA8900)
#define JDHGBLHJPDF_PIDGPOFEEDP__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA88E0)

inline static constexpr unsigned int JDHGBLHJPDF_PIDGPOFEEDP_TypeDefinitionIndex = 50914;

class JDHGBLHJPDF_PIDGPOFEEDP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_PIDGPOFEEDP__CTOR_OFFSET))(this);
	}

	::System::Void EBNKAFAABEB(::JGNCILNLFEE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_PIDGPOFEEDP_EBNKAFAABEB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KKPCPFEJFEC(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_PIDGPOFEEDP_KKPCPFEJFEC_OFFSET))(this, BLLNHDIDKPA);
	}
};
