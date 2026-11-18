#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define JIHJLNGEODJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1C362620)
#define JIHJLNGEODJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1C362700)
#define JIHJLNGEODJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1C362780)
#define JIHJLNGEODJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1C3625E0)
#define JIHJLNGEODJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C362670)
#define JIHJLNGEODJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3626F0)

inline static constexpr unsigned int JIHJLNGEODJ_TypeDefinitionIndex = 49384;

class JIHJLNGEODJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xAC; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIHJLNGEODJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHJLNGEODJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHJLNGEODJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHJLNGEODJ_GETCLASSID_OFFSET))(this);
	}

	static ::JIHJLNGEODJ* JFDOOELFAOA()
	{
		return ((::JIHJLNGEODJ*(*)())((::PBYTE)hIl2Cpp + JIHJLNGEODJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHJLNGEODJ_MEFBHFEOKGH_OFFSET))(this);
	}
};
