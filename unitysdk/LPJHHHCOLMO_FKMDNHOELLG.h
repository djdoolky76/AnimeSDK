#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEBGHKGCDGE;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_FKMDNHOELLG_APGOMCAHMFB_OFFSET UNITYSDK_OFFSET(0xD43FB90)
#define LPJHHHCOLMO_FKMDNHOELLG_DHAIADJODCN_OFFSET UNITYSDK_OFFSET(0xD43FBE0)
#define LPJHHHCOLMO_FKMDNHOELLG__CTOR_OFFSET UNITYSDK_OFFSET(0xD43FB80)

inline static constexpr unsigned int LPJHHHCOLMO_FKMDNHOELLG_TypeDefinitionIndex = 46655;

class LPJHHHCOLMO_FKMDNHOELLG : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::GEBGHKGCDGE*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_FKMDNHOELLG__CTOR_OFFSET))(this);
	}

	::System::Void APGOMCAHMFB(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_FKMDNHOELLG_APGOMCAHMFB_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void DHAIADJODCN(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_FKMDNHOELLG_DHAIADJODCN_OFFSET))(this, DJCNCELJPOM);
	}
};
