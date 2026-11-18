#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define LCMEJCLIOFN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15DEE3A0)
#define LCMEJCLIOFN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15DEE480)
#define LCMEJCLIOFN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15DEE500)
#define LCMEJCLIOFN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15DEE360)
#define LCMEJCLIOFN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DEE3F0)
#define LCMEJCLIOFN__CTOR_OFFSET UNITYSDK_OFFSET(0x15DEE470)

inline static constexpr unsigned int LCMEJCLIOFN_TypeDefinitionIndex = 39203;

class LCMEJCLIOFN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x2B; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCMEJCLIOFN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMEJCLIOFN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMEJCLIOFN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMEJCLIOFN_GETCLASSID_OFFSET))(this);
	}

	static ::LCMEJCLIOFN* JFDOOELFAOA()
	{
		return ((::LCMEJCLIOFN*(*)())((::PBYTE)hIl2Cpp + LCMEJCLIOFN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMEJCLIOFN_MEFBHFEOKGH_OFFSET))(this);
	}
};
