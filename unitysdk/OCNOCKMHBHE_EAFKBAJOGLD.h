#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OCNOCKMHBHE_EAFKBAJOGLD_EIPKBPONKCB_OFFSET UNITYSDK_OFFSET(0x1005BC10)
#define OCNOCKMHBHE_EAFKBAJOGLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1005BC00)

inline static constexpr unsigned int OCNOCKMHBHE_EAFKBAJOGLD_TypeDefinitionIndex = 89190;

class OCNOCKMHBHE_EAFKBAJOGLD : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_EAFKBAJOGLD__CTOR_OFFSET))(this);
	}

	::System::Void EIPKBPONKCB(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_EAFKBAJOGLD_EIPKBPONKCB_OFFSET))(this, DKPGLAFDLBC);
	}
};
