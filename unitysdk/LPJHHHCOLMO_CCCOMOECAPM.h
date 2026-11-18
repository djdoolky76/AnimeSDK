#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFDKLLMDMNF;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_CCCOMOECAPM_KOKGCNLPMNI_OFFSET UNITYSDK_OFFSET(0x14D55300)
#define LPJHHHCOLMO_CCCOMOECAPM_LJJDBHFDHAG_OFFSET UNITYSDK_OFFSET(0x14D55290)
#define LPJHHHCOLMO_CCCOMOECAPM__CTOR_OFFSET UNITYSDK_OFFSET(0x14D55280)

inline static constexpr unsigned int LPJHHHCOLMO_CCCOMOECAPM_TypeDefinitionIndex = 46634;

class LPJHHHCOLMO_CCCOMOECAPM : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::BFDKLLMDMNF*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_CCCOMOECAPM__CTOR_OFFSET))(this);
	}

	::System::Void LJJDBHFDHAG(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_CCCOMOECAPM_LJJDBHFDHAG_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void KOKGCNLPMNI(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_CCCOMOECAPM_KOKGCNLPMNI_OFFSET))(this, DJCNCELJPOM);
	}
};
