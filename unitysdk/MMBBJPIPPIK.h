#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }

#define MMBBJPIPPIK_EKHJFAFHLCE_OFFSET UNITYSDK_OFFSET(0x14D8ECB0)

inline static constexpr unsigned int MMBBJPIPPIK_TypeDefinitionIndex = 59339;

class MMBBJPIPPIK : public ::System::Object
{
public:
	static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* EKHJFAFHLCE()
	{
		return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MMBBJPIPPIK_EKHJFAFHLCE_OFFSET))();
	}
};
