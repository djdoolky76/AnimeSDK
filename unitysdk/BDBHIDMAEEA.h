#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFAHKKFPHHM.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define BDBHIDMAEEA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14383350)
#define BDBHIDMAEEA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x143834C0)
#define BDBHIDMAEEA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14383430)
#define BDBHIDMAEEA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14383300)
#define BDBHIDMAEEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x143833A0)
#define BDBHIDMAEEA__CTOR_OFFSET UNITYSDK_OFFSET(0x14383420)

inline static constexpr unsigned int BDBHIDMAEEA_TypeDefinitionIndex = 48357;

class BDBHIDMAEEA : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x94; // 0x0
	::System::Boolean COHKGEJOHIM; // 0x48
	::System::Byte _padding0[0x3];
	::HFAHKKFPHHM KLFFBHIMAJP; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDBHIDMAEEA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBHIDMAEEA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBHIDMAEEA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBHIDMAEEA_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBHIDMAEEA_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::BDBHIDMAEEA* JFDOOELFAOA()
	{
		return ((::BDBHIDMAEEA*(*)())((::PBYTE)hIl2Cpp + BDBHIDMAEEA_JFDOOELFAOA_OFFSET))();
	}
};
