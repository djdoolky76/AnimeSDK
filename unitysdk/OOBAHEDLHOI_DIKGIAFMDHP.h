#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OBKNEEOLOPB;
class OOBAHEDLHOI;

#define OOBAHEDLHOI_DIKGIAFMDHP_HMLPEKMKHFC_OFFSET UNITYSDK_OFFSET(0x13A77900)
#define OOBAHEDLHOI_DIKGIAFMDHP__CTOR_OFFSET UNITYSDK_OFFSET(0x13A778F0)

inline static constexpr unsigned int OOBAHEDLHOI_DIKGIAFMDHP_TypeDefinitionIndex = 75524;

class OOBAHEDLHOI_DIKGIAFMDHP : public ::System::Object
{
public:
	::OBKNEEOLOPB* EKHAPLAFMCB; // 0x10
	::OOBAHEDLHOI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_DIKGIAFMDHP__CTOR_OFFSET))(this);
	}

	::System::Void HMLPEKMKHFC(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_DIKGIAFMDHP_HMLPEKMKHFC_OFFSET))(this, BLLNHDIDKPA);
	}
};
