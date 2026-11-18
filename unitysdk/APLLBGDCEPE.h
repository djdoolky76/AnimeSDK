#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDJAILOIBIM.h"

namespace System { class String; }

#define APLLBGDCEPE_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x18544860)
#define APLLBGDCEPE_EGFJBNHOKHG_OFFSET UNITYSDK_OFFSET(0x18544870)
#define APLLBGDCEPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18544A70)

inline static constexpr unsigned int APLLBGDCEPE_TypeDefinitionIndex = 85000;

class APLLBGDCEPE : public ::GDJAILOIBIM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLLBGDCEPE__CTOR_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APLLBGDCEPE_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Boolean EGFJBNHOKHG(::System::String*& MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + APLLBGDCEPE_EGFJBNHOKHG_OFFSET))(this, MCOHLHMKLIP);
	}
};
