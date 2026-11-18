#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDJAILOIBIM.h"

namespace System { class String; }

#define AIHCDFMMLAD_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x143A56F0)
#define AIHCDFMMLAD_EGFJBNHOKHG_OFFSET UNITYSDK_OFFSET(0x143A5700)
#define AIHCDFMMLAD__CTOR_OFFSET UNITYSDK_OFFSET(0x143A5900)

inline static constexpr unsigned int AIHCDFMMLAD_TypeDefinitionIndex = 65950;

class AIHCDFMMLAD : public ::GDJAILOIBIM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHCDFMMLAD__CTOR_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIHCDFMMLAD_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Boolean EGFJBNHOKHG(::System::String*& MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + AIHCDFMMLAD_EGFJBNHOKHG_OFFSET))(this, MCOHLHMKLIP);
	}
};
