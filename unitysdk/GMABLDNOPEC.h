#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define GMABLDNOPEC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16CD51A0)
#define GMABLDNOPEC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16CD5310)
#define GMABLDNOPEC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16CD5280)
#define GMABLDNOPEC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16CD5160)
#define GMABLDNOPEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CD51F0)
#define GMABLDNOPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD5270)

inline static constexpr unsigned int GMABLDNOPEC_TypeDefinitionIndex = 59466;

class GMABLDNOPEC : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x8E; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMABLDNOPEC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABLDNOPEC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABLDNOPEC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABLDNOPEC_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABLDNOPEC_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::GMABLDNOPEC* JFDOOELFAOA()
	{
		return ((::GMABLDNOPEC*(*)())((::PBYTE)hIl2Cpp + GMABLDNOPEC_JFDOOELFAOA_OFFSET))();
	}
};
