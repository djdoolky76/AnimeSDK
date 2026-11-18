#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define FEPNFPBCAOP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14AC3FD0)
#define FEPNFPBCAOP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14AC40B0)
#define FEPNFPBCAOP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14AC4130)
#define FEPNFPBCAOP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14AC3F90)
#define FEPNFPBCAOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AC4020)
#define FEPNFPBCAOP__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC40A0)

inline static constexpr unsigned int FEPNFPBCAOP_TypeDefinitionIndex = 46935;

class FEPNFPBCAOP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xAF; // 0x0
	::System::Boolean NNAJCOJHJCE; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEPNFPBCAOP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPNFPBCAOP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPNFPBCAOP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPNFPBCAOP_GETCLASSID_OFFSET))(this);
	}

	static ::FEPNFPBCAOP* JFDOOELFAOA()
	{
		return ((::FEPNFPBCAOP*(*)())((::PBYTE)hIl2Cpp + FEPNFPBCAOP_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPNFPBCAOP_MEFBHFEOKGH_OFFSET))(this);
	}
};
