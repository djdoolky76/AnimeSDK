#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDMBPFBIOGI.h"
#include "unitysdk/System/Object.h"

class AOEHPGLBLIH;
class IBENDELLLAO;

#define NMAJANNDDJA_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16B87740)
#define NMAJANNDDJA_FBGKBOELAGA_OFFSET UNITYSDK_OFFSET(0x16B87710)
#define NMAJANNDDJA_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x16B87730)
#define NMAJANNDDJA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B87720)

inline static constexpr unsigned int NMAJANNDDJA_TypeDefinitionIndex = 41430;

class NMAJANNDDJA : public ::System::Object
{
public:
	::IBENDELLLAO* LMJBDKEEOHJ; // 0x10
	::AOEHPGLBLIH* _HPMJLHGNENP_k__BackingField; // 0x18
	::System::Int32 LCAKDPBOOGG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAJANNDDJA__CTOR_OFFSET))(this);
	}

	::KDMBPFBIOGI FBGKBOELAGA()
	{
		return ((::KDMBPFBIOGI(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAJANNDDJA_FBGKBOELAGA_OFFSET))(this);
	}

	::System::Void OPIAMPMCMFA(::AOEHPGLBLIH* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*))((::PBYTE)hIl2Cpp + NMAJANNDDJA_OPIAMPMCMFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::AOEHPGLBLIH* COPIDBEMEIE()
	{
		return ((::AOEHPGLBLIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAJANNDDJA_COPIDBEMEIE_OFFSET))(this);
	}
};
