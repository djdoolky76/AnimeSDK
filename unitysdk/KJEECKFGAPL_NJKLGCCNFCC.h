#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class KJEECKFGAPL;

#define KJEECKFGAPL_NJKLGCCNFCC_KBOFLDOIAHO_OFFSET UNITYSDK_OFFSET(0x1771ABD0)
#define KJEECKFGAPL_NJKLGCCNFCC_NFPNCEGENKE_OFFSET UNITYSDK_OFFSET(0x1771AC00)
#define KJEECKFGAPL_NJKLGCCNFCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1771ABC0)

inline static constexpr unsigned int KJEECKFGAPL_NJKLGCCNFCC_TypeDefinitionIndex = 89833;

class KJEECKFGAPL_NJKLGCCNFCC : public ::System::Object
{
public:
	::KJEECKFGAPL* KLHPEBKNIFB; // 0x10
	::System::UInt32 BPDJMLHACDF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEECKFGAPL_NJKLGCCNFCC__CTOR_OFFSET))(this);
	}

	::System::Void KBOFLDOIAHO(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KJEECKFGAPL_NJKLGCCNFCC_KBOFLDOIAHO_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::System::Void NFPNCEGENKE(::System::Object* EAGONILEKDG, ::AkCallbackType OBNIAHNMHPF, ::AkCallbackInfo* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + KJEECKFGAPL_NJKLGCCNFCC_NFPNCEGENKE_OFFSET))(this, EAGONILEKDG, OBNIAHNMHPF, HMMMOCJAEOA);
	}
};
