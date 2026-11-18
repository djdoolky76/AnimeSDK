#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJDMJCABCMM;
namespace System { class Action; }

#define BJDMJCABCMM_LHJLBJDDONH_IDAHHHHAFKN_OFFSET UNITYSDK_OFFSET(0x10E06B70)
#define BJDMJCABCMM_LHJLBJDDONH__CTOR_OFFSET UNITYSDK_OFFSET(0x10E06B60)

inline static constexpr unsigned int BJDMJCABCMM_LHJLBJDDONH_TypeDefinitionIndex = 70653;

class BJDMJCABCMM_LHJLBJDDONH : public ::System::Object
{
public:
	::BJDMJCABCMM* KLHPEBKNIFB; // 0x10
	::System::Action* IHINCDLPPBD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDMJCABCMM_LHJLBJDDONH__CTOR_OFFSET))(this);
	}

	::System::Void IDAHHHHAFKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDMJCABCMM_LHJLBJDDONH_IDAHHHHAFKN_OFFSET))(this);
	}
};
