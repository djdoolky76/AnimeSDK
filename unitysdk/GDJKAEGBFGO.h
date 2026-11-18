#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define GDJKAEGBFGO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15CDC240)
#define GDJKAEGBFGO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15CDC3B0)
#define GDJKAEGBFGO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15CDC320)
#define GDJKAEGBFGO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15CDC1E0)
#define GDJKAEGBFGO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CDC290)
#define GDJKAEGBFGO__CTOR_OFFSET UNITYSDK_OFFSET(0x15CDC310)

inline static constexpr unsigned int GDJKAEGBFGO_TypeDefinitionIndex = 63039;

class GDJKAEGBFGO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x93; // 0x0
	::System::Boolean JIPJAGOKBLO; // 0x48
	::System::Boolean BABDNGPILKJ; // 0x49
	::System::Byte _padding0[0x2];
	::System::Int32 ADKIHHHAJPN; // 0x4C
	::System::Int32 HADPBMNLKBO; // 0x50
	::System::Int32 AEDEJHHGBLD; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDJKAEGBFGO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJKAEGBFGO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJKAEGBFGO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJKAEGBFGO_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJKAEGBFGO_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::GDJKAEGBFGO* JFDOOELFAOA()
	{
		return ((::GDJKAEGBFGO*(*)())((::PBYTE)hIl2Cpp + GDJKAEGBFGO_JFDOOELFAOA_OFFSET))();
	}
};
