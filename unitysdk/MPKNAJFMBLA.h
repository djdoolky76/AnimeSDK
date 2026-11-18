#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MPKNAJFMBLA_HJOBCDMCLMC.h"

#define MPKNAJFMBLA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x174B7D60)
#define MPKNAJFMBLA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x174B7ED0)
#define MPKNAJFMBLA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x174B7E40)
#define MPKNAJFMBLA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x174B7CB0)
#define MPKNAJFMBLA__CCTOR_OFFSET UNITYSDK_OFFSET(0x174B7DB0)
#define MPKNAJFMBLA__CTOR_OFFSET UNITYSDK_OFFSET(0x174B7E30)

inline static constexpr unsigned int MPKNAJFMBLA_TypeDefinitionIndex = 39469;

class MPKNAJFMBLA : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x23; // 0x0
	::MPKNAJFMBLA_HJOBCDMCLMC LDDPLAOJLDF; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPKNAJFMBLA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKNAJFMBLA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKNAJFMBLA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKNAJFMBLA_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKNAJFMBLA_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MPKNAJFMBLA* JFDOOELFAOA()
	{
		return ((::MPKNAJFMBLA*(*)())((::PBYTE)hIl2Cpp + MPKNAJFMBLA_JFDOOELFAOA_OFFSET))();
	}
};
