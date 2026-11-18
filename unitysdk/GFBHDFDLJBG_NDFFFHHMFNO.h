#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define GFBHDFDLJBG_NDFFFHHMFNO_GEKDCPMHPDC_OFFSET UNITYSDK_OFFSET(0x11DA1BC0)
#define GFBHDFDLJBG_NDFFFHHMFNO_JIBCCNFEKCN_OFFSET UNITYSDK_OFFSET(0x11DA1920)
#define GFBHDFDLJBG_NDFFFHHMFNO__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA1910)

inline static constexpr unsigned int GFBHDFDLJBG_NDFFFHHMFNO_TypeDefinitionIndex = 83180;

class GFBHDFDLJBG_NDFFFHHMFNO : public ::System::Object
{
public:
	::System::Action* KAKAEMACNPB; // 0x10
	::System::UInt64 IFGMFALNKOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBHDFDLJBG_NDFFFHHMFNO__CTOR_OFFSET))(this);
	}

	::System::Void JIBCCNFEKCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBHDFDLJBG_NDFFFHHMFNO_JIBCCNFEKCN_OFFSET))(this);
	}

	::System::Void GEKDCPMHPDC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GFBHDFDLJBG_NDFFFHHMFNO_GEKDCPMHPDC_OFFSET))(this, GLAOEHCGCFO);
	}
};
