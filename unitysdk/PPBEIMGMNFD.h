#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ESceneType.h"
#include "unitysdk/System/Object.h"

#define PPBEIMGMNFD_HKDBPAOFJAF_OFFSET UNITYSDK_OFFSET(0x1D0E0890)
#define PPBEIMGMNFD_ICOPGNDJNCE_OFFSET UNITYSDK_OFFSET(0x1D0E08A0)
#define PPBEIMGMNFD_PFPMBJCHPBE_OFFSET UNITYSDK_OFFSET(0x1D0E08B0)
#define PPBEIMGMNFD_PMNILLBFKEE_OFFSET UNITYSDK_OFFSET(0x1D0E0880)
#define PPBEIMGMNFD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0E0870)
#define PPBEIMGMNFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0860)

inline static constexpr unsigned int PPBEIMGMNFD_TypeDefinitionIndex = 16888;

class PPBEIMGMNFD : public ::System::Object
{
public:
	::System::Int32 _MNKLAMMNNMP_k__BackingField; // 0x10
	::System::Int32 _CMGBINHAAHJ_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBEIMGMNFD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 NNEBGFIKLAB, ::Share::ESceneType IAIFCLAEKPM, ::System::Int32 DIFEGNHHKIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Share::ESceneType, ::System::Int32))((::PBYTE)hIl2Cpp + PPBEIMGMNFD__CTOR_1_OFFSET))(this, NNEBGFIKLAB, IAIFCLAEKPM, DIFEGNHHKIO);
	}

	::System::Int32 PMNILLBFKEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBEIMGMNFD_PMNILLBFKEE_OFFSET))(this);
	}

	::System::Void HKDBPAOFJAF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPBEIMGMNFD_HKDBPAOFJAF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ICOPGNDJNCE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPBEIMGMNFD_ICOPGNDJNCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PFPMBJCHPBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBEIMGMNFD_PFPMBJCHPBE_OFFSET))(this);
	}
};
