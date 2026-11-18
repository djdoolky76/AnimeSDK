#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INOLACBEGGG.h"
#include "unitysdk/JAIJLJGFIDO_1.h"
#include "unitysdk/NDBEJLBPCED.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Diagnostics { class Stopwatch; }

#define AOPIOAPKPPG_DIOKMMCEFCJ_OFFSET UNITYSDK_OFFSET(0x113C8BB0)
#define AOPIOAPKPPG_FBHGCLPPHFK_OFFSET UNITYSDK_OFFSET(0x113C8EC0)
#define AOPIOAPKPPG_FDKEINDDKNM_OFFSET UNITYSDK_OFFSET(0x113C8EE0)
#define AOPIOAPKPPG_KLNKIPOMAFL_OFFSET UNITYSDK_OFFSET(0x113C8F60)
#define AOPIOAPKPPG_LEBPIHEEHPH_OFFSET UNITYSDK_OFFSET(0x113C8FF0)
#define AOPIOAPKPPG__CTOR_OFFSET UNITYSDK_OFFSET(0x113C89F0)

inline static constexpr unsigned int AOPIOAPKPPG_TypeDefinitionIndex = 54743;

class AOPIOAPKPPG : public ::System::Object
{
public:
	::System::Diagnostics::Stopwatch* CLNKHLIDJAD; // 0x10
	::System::Random* AAIMPPBEKPF; // 0x18
	::System::Collections::Generic::Queue_1<::INOLACBEGGG>* MFKJKDDINDH; // 0x20
	::JAIJLJGFIDO_1<::System::Byte> NPIALOMIANK; // 0x28
	::System::Byte _padding0[0x8];
	::NDBEJLBPCED BCNJJKGOLLL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPIOAPKPPG__CTOR_OFFSET))(this);
	}

	::System::Boolean DIOKMMCEFCJ(::Il2CppArray<::System::Byte>* PMAMMGFJAJL, ::System::Int32 BOGPAHGJOJK, ::System::Int32 GGAFLCCOKGN, ::System::Int32 IPMKFJHHEEG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AOPIOAPKPPG_DIOKMMCEFCJ_OFFSET))(this, PMAMMGFJAJL, BOGPAHGJOJK, GGAFLCCOKGN, IPMKFJHHEEG);
	}

	::System::Boolean FDKEINDDKNM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPIOAPKPPG_FDKEINDDKNM_OFFSET))(this);
	}

	::System::Int64 FBHGCLPPHFK()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPIOAPKPPG_FBHGCLPPHFK_OFFSET))(this);
	}

	::System::Boolean KLNKIPOMAFL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPIOAPKPPG_KLNKIPOMAFL_OFFSET))(this);
	}

	::System::Int32 LEBPIHEEHPH(::Il2CppArray<::System::Byte>* PMAMMGFJAJL, ::System::Int32 BOGPAHGJOJK, ::System::Int32 GGAFLCCOKGN)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AOPIOAPKPPG_LEBPIHEEHPH_OFFSET))(this, PMAMMGFJAJL, BOGPAHGJOJK, GGAFLCCOKGN);
	}
};
