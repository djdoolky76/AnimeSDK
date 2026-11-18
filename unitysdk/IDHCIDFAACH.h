#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IDHCIDFAACH_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x15EA6BE0)
#define IDHCIDFAACH__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA6BD0)

inline static constexpr unsigned int IDHCIDFAACH_TypeDefinitionIndex = 56007;

class IDHCIDFAACH : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* NOIBHFKNEON; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHCIDFAACH__CTOR_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHCIDFAACH_JDAPDDEOCEA_OFFSET))(this);
	}
};
