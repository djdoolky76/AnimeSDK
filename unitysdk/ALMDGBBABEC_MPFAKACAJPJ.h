#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define ALMDGBBABEC_MPFAKACAJPJ_EFAFGICBFFE_OFFSET UNITYSDK_OFFSET(0x17CE1290)
#define ALMDGBBABEC_MPFAKACAJPJ_KIFIENBNPGG_OFFSET UNITYSDK_OFFSET(0x17CE1380)
#define ALMDGBBABEC_MPFAKACAJPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE1280)

inline static constexpr unsigned int ALMDGBBABEC_MPFAKACAJPJ_TypeDefinitionIndex = 48962;

class ALMDGBBABEC_MPFAKACAJPJ : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* AFKOOINGNAK; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMDGBBABEC_MPFAKACAJPJ__CTOR_OFFSET))(this);
	}

	::System::Void EFAFGICBFFE(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ALMDGBBABEC_MPFAKACAJPJ_EFAFGICBFFE_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void KIFIENBNPGG(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ALMDGBBABEC_MPFAKACAJPJ_KIFIENBNPGG_OFFSET))(this, DJCNCELJPOM);
	}
};
