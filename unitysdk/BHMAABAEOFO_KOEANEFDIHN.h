#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BHMAABAEOFO_KOEANEFDIHN_ACMAOPNJLFD_OFFSET UNITYSDK_OFFSET(0x1E7A7A80)
#define BHMAABAEOFO_KOEANEFDIHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A7A70)

inline static constexpr unsigned int BHMAABAEOFO_KOEANEFDIHN_TypeDefinitionIndex = 30147;

class BHMAABAEOFO_KOEANEFDIHN : public ::System::Object
{
public:
	::System::Func_2<::System::Type*, ::System::Boolean>* FFMGICPLKFB; // 0x10
	::System::Boolean BJDPHMBJHIJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMAABAEOFO_KOEANEFDIHN__CTOR_OFFSET))(this);
	}

	::System::Boolean ACMAOPNJLFD(::System::Type* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BHMAABAEOFO_KOEANEFDIHN_ACMAOPNJLFD_OFFSET))(this, IMLLDOHDCNC);
	}
};
