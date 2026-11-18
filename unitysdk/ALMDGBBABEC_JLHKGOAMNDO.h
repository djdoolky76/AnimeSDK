#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GJNPLMEELKG;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define ALMDGBBABEC_JLHKGOAMNDO_FHBNKDEAGHK_OFFSET UNITYSDK_OFFSET(0x17CE1210)
#define ALMDGBBABEC_JLHKGOAMNDO__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE1200)

inline static constexpr unsigned int ALMDGBBABEC_JLHKGOAMNDO_TypeDefinitionIndex = 48960;

class ALMDGBBABEC_JLHKGOAMNDO : public ::System::Object
{
public:
	::System::Action_1<::GJNPLMEELKG*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMDGBBABEC_JLHKGOAMNDO__CTOR_OFFSET))(this);
	}

	::System::Void FHBNKDEAGHK(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ALMDGBBABEC_JLHKGOAMNDO_FHBNKDEAGHK_OFFSET))(this, DJCNCELJPOM);
	}
};
