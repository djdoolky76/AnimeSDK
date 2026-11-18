#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define ALIIEMMEMAO_JNKCBNMFFBN_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x134E1720)
#define ALIIEMMEMAO_JNKCBNMFFBN__CTOR_OFFSET UNITYSDK_OFFSET(0x134E17A0)

inline static constexpr unsigned int ALIIEMMEMAO_JNKCBNMFFBN_TypeDefinitionIndex = 93262;

class ALIIEMMEMAO_JNKCBNMFFBN : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* JAFMBBHMAFN; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_JNKCBNMFFBN__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_JNKCBNMFFBN_ONCREATEPROPERTY_OFFSET))(this);
	}
};
