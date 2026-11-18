#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPJHIFCIDFA.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class CODHOJECIIM;

#define IOFOPBIOOON_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1943A440)
#define IOFOPBIOOON_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1943A520)
#define IOFOPBIOOON_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1943A5A0)
#define IOFOPBIOOON_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1943A3F0)
#define IOFOPBIOOON__CCTOR_OFFSET UNITYSDK_OFFSET(0x1943A490)
#define IOFOPBIOOON__CTOR_OFFSET UNITYSDK_OFFSET(0x1943A510)

inline static constexpr unsigned int IOFOPBIOOON_TypeDefinitionIndex = 69806;

class IOFOPBIOOON : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA2; // 0x0
	::CODHOJECIIM* KMFAHKNFJON; // 0x48
	::EPJHIFCIDFA IDJJFKKGJCN; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOFOPBIOOON__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOPBIOOON__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOPBIOOON_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOPBIOOON_GETCLASSID_OFFSET))(this);
	}

	static ::IOFOPBIOOON* JFDOOELFAOA()
	{
		return ((::IOFOPBIOOON*(*)())((::PBYTE)hIl2Cpp + IOFOPBIOOON_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOPBIOOON_MEFBHFEOKGH_OFFSET))(this);
	}
};
