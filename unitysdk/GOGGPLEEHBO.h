#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define GOGGPLEEHBO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15D8B720)
#define GOGGPLEEHBO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15D8B800)
#define GOGGPLEEHBO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15D8B880)
#define GOGGPLEEHBO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15D8B6E0)
#define GOGGPLEEHBO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D8B770)
#define GOGGPLEEHBO__CTOR_OFFSET UNITYSDK_OFFSET(0x15D8B7F0)

inline static constexpr unsigned int GOGGPLEEHBO_TypeDefinitionIndex = 48016;

class GOGGPLEEHBO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOGGPLEEHBO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGGPLEEHBO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGGPLEEHBO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGGPLEEHBO_GETCLASSID_OFFSET))(this);
	}

	static ::GOGGPLEEHBO* JFDOOELFAOA()
	{
		return ((::GOGGPLEEHBO*(*)())((::PBYTE)hIl2Cpp + GOGGPLEEHBO_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGGPLEEHBO_MEFBHFEOKGH_OFFSET))(this);
	}
};
