#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BMIGMKIIBLK_EBCPDBPFFLC_OFFSET UNITYSDK_OFFSET(0x1FBB2E50)
#define BMIGMKIIBLK_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x1FBB2FF0)
#define BMIGMKIIBLK_GJPHMAIJFMH_OFFSET UNITYSDK_OFFSET(0x1FBB3020)
#define BMIGMKIIBLK_KBLIFPLNLCO_OFFSET UNITYSDK_OFFSET(0x1FBB2F50)
#define BMIGMKIIBLK_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x1FBB2E60)
#define BMIGMKIIBLK_LIGPIGEJJLI_OFFSET UNITYSDK_OFFSET(0x1FBB2ED0)
#define BMIGMKIIBLK_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x1FBB30A0)
#define BMIGMKIIBLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB2E40)

inline static constexpr unsigned int BMIGMKIIBLK_TypeDefinitionIndex = 29094;

class BMIGMKIIBLK : public ::System::Object
{
public:
	::System::String* HMMMOCJAEOA; // 0x10
	::System::Int32 JHFKDGBCOBA; // 0x18
	::System::Byte _padding0[0x4];
	::System::UInt64 DNFNKBNBJHM; // 0x20
	::System::UInt64 GDBANLBHNJK; // 0x28
	::System::UInt64 KBPLMDAFOEF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIGMKIIBLK__CTOR_OFFSET))(this);
	}

	::System::UInt64 EBCPDBPFFLC()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIGMKIIBLK_EBCPDBPFFLC_OFFSET))(this);
	}

	::System::Double LDIENHMALPL()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIGMKIIBLK_LDIENHMALPL_OFFSET))(this);
	}

	::System::String* LIGPIGEJJLI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIGMKIIBLK_LIGPIGEJJLI_OFFSET))(this);
	}

	::System::Void KBLIFPLNLCO(::System::UInt64 GEGOALONGBI, ::System::String* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + BMIGMKIIBLK_KBLIFPLNLCO_OFFSET))(this, GEGOALONGBI, HMMMOCJAEOA);
	}

	::System::Double FCICGEALCFA()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIGMKIIBLK_FCICGEALCFA_OFFSET))(this);
	}

	::System::Double GJPHMAIJFMH()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIGMKIIBLK_GJPHMAIJFMH_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIGMKIIBLK_NGFKBKCFPLK_OFFSET))(this);
	}
};
