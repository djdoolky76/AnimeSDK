#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPKLIFIBCAM;

#define EGALLKMJKJP_JGAFAOOCBJP_OFFSET UNITYSDK_OFFSET(0x17230180)
#define EGALLKMJKJP_MFKJAIGCIAA_OFFSET UNITYSDK_OFFSET(0x172302E0)

inline static constexpr unsigned int EGALLKMJKJP_TypeDefinitionIndex = 92692;

class EGALLKMJKJP : public ::System::Object
{
public:
	static ::System::Int32 JGAFAOOCBJP(::NPKLIFIBCAM* DHMEJCJAJCK, ::System::UInt32 GBJCPLNHLKA, ::System::Int32 FCIHIDGKPDI)
	{
		return ((::System::Int32(*)(::NPKLIFIBCAM*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + EGALLKMJKJP_JGAFAOOCBJP_OFFSET))(DHMEJCJAJCK, GBJCPLNHLKA, FCIHIDGKPDI);
	}

	static ::System::Int32 MFKJAIGCIAA(::NPKLIFIBCAM* DHMEJCJAJCK, ::System::UInt32 IHJFLNAFAJK, ::System::UInt32 IKKGENLNJKP)
	{
		return ((::System::Int32(*)(::NPKLIFIBCAM*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EGALLKMJKJP_MFKJAIGCIAA_OFFSET))(DHMEJCJAJCK, IHJFLNAFAJK, IKKGENLNJKP);
	}
};
