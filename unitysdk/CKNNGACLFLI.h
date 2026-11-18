#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define CKNNGACLFLI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13269FE0)
#define CKNNGACLFLI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1326A150)
#define CKNNGACLFLI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1326A0C0)
#define CKNNGACLFLI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13269FA0)
#define CKNNGACLFLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1326A030)
#define CKNNGACLFLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1326A0B0)

inline static constexpr unsigned int CKNNGACLFLI_TypeDefinitionIndex = 88898;

class CKNNGACLFLI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKNNGACLFLI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNNGACLFLI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNNGACLFLI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNNGACLFLI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNNGACLFLI_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::CKNNGACLFLI* JFDOOELFAOA()
	{
		return ((::CKNNGACLFLI*(*)())((::PBYTE)hIl2Cpp + CKNNGACLFLI_JFDOOELFAOA_OFFSET))();
	}
};
