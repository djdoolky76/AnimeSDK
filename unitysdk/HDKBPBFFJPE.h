#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKABGAHPDBG;

#define HDKBPBFFJPE_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x14D1B480)
#define HDKBPBFFJPE_GKJFIENNGIC_OFFSET UNITYSDK_OFFSET(0x14D1B440)
#define HDKBPBFFJPE_ICCBDFOMNDP_OFFSET UNITYSDK_OFFSET(0x14D1B460)
#define HDKBPBFFJPE_IFECJGFJMEG_OFFSET UNITYSDK_OFFSET(0x14D1B450)
#define HDKBPBFFJPE_KKBHHBGNJEB_OFFSET UNITYSDK_OFFSET(0x14D1B490)
#define HDKBPBFFJPE_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x14D1B470)
#define HDKBPBFFJPE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D1B430)

inline static constexpr unsigned int HDKBPBFFJPE_TypeDefinitionIndex = 72231;

class HDKBPBFFJPE : public ::System::Object
{
public:
	::FKABGAHPDBG* _HPMJLHGNENP_k__BackingField; // 0x10
	::System::Int32 _BEFJONHKIKA_k__BackingField; // 0x18
	::System::Int32 _NPPLBHAOEIC_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Int32 ANNOJCFNHIO, ::System::Int32 LGHEDJMOKIP, ::FKABGAHPDBG* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::FKABGAHPDBG*))((::PBYTE)hIl2Cpp + HDKBPBFFJPE__CTOR_OFFSET))(this, ANNOJCFNHIO, LGHEDJMOKIP, DFMKILICPFB);
	}

	::System::Void GKJFIENNGIC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDKBPBFFJPE_GKJFIENNGIC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IFECJGFJMEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBPBFFJPE_IFECJGFJMEG_OFFSET))(this);
	}

	::System::Void ICCBDFOMNDP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDKBPBFFJPE_ICCBDFOMNDP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OPIAMPMCMFA(::FKABGAHPDBG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FKABGAHPDBG*))((::PBYTE)hIl2Cpp + HDKBPBFFJPE_OPIAMPMCMFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::FKABGAHPDBG* COPIDBEMEIE()
	{
		return ((::FKABGAHPDBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBPBFFJPE_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Int32 KKBHHBGNJEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBPBFFJPE_KKBHHBGNJEB_OFFSET))(this);
	}
};
