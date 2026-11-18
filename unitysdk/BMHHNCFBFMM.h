#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Diagnostics { class Stopwatch; }

#define BMHHNCFBFMM_AIIJAAELNAP_OFFSET UNITYSDK_OFFSET(0x1425D090)
#define BMHHNCFBFMM_HCLLNEJBCCC_OFFSET UNITYSDK_OFFSET(0x1425D2E0)
#define BMHHNCFBFMM_JMLDHOBKJIN_OFFSET UNITYSDK_OFFSET(0x1425D2D0)
#define BMHHNCFBFMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1425D040)

inline static constexpr unsigned int BMHHNCFBFMM_TypeDefinitionIndex = 73076;

class BMHHNCFBFMM : public ::System::Object
{
public:
	::System::Diagnostics::Stopwatch* FNAPLHLFGAC; // 0x10
	::System::Int64 _IHGOOHIOJCN_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int64 JAKOAHBCMKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BMHHNCFBFMM__CTOR_OFFSET))(this, JAKOAHBCMKP);
	}

	::System::Void AIIJAAELNAP(::System::Collections::Generic::Queue_1<::System::Action*>* PIGJMDBMCGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::System::Action*>*))((::PBYTE)hIl2Cpp + BMHHNCFBFMM_AIIJAAELNAP_OFFSET))(this, PIGJMDBMCGD);
	}

	::System::Int64 JMLDHOBKJIN()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHHNCFBFMM_JMLDHOBKJIN_OFFSET))(this);
	}

	::System::Void HCLLNEJBCCC(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BMHHNCFBFMM_HCLLNEJBCCC_OFFSET))(this, EGEGIMGMJHN);
	}
};
