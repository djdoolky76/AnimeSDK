#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define ALMDGBBABEC_GDCHNIFFAEC_ADKINEJJCKL_OFFSET UNITYSDK_OFFSET(0x145163D0)
#define ALMDGBBABEC_GDCHNIFFAEC_FPPBBDDLKIG_OFFSET UNITYSDK_OFFSET(0x145163E0)
#define ALMDGBBABEC_GDCHNIFFAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x145163C0)

inline static constexpr unsigned int ALMDGBBABEC_GDCHNIFFAEC_TypeDefinitionIndex = 48964;

class ALMDGBBABEC_GDCHNIFFAEC : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action_1<::System::Int32>* AFKOOINGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMDGBBABEC_GDCHNIFFAEC__CTOR_OFFSET))(this);
	}

	::System::Void ADKINEJJCKL(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ALMDGBBABEC_GDCHNIFFAEC_ADKINEJJCKL_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void FPPBBDDLKIG(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ALMDGBBABEC_GDCHNIFFAEC_FPPBBDDLKIG_OFFSET))(this, JMFEPDAHBED);
	}
};
