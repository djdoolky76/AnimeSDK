#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BPCBGBDIFDE_NMLNLHNBFJF_NFJNDEOCHOA_OFFSET UNITYSDK_OFFSET(0x18DB15C0)
#define BPCBGBDIFDE_NMLNLHNBFJF__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB15B0)

inline static constexpr unsigned int BPCBGBDIFDE_NMLNLHNBFJF_TypeDefinitionIndex = 78654;

class BPCBGBDIFDE_NMLNLHNBFJF : public ::System::Object
{
public:
	::System::String* LIFIDOINPKP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NMLNLHNBFJF__CTOR_OFFSET))(this);
	}

	::System::Void NFJNDEOCHOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NMLNLHNBFJF_NFJNDEOCHOA_OFFSET))(this);
	}
};
