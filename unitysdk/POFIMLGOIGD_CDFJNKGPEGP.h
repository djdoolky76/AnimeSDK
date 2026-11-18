#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FIBCHCLKAAA;
namespace System { template <typename T1, typename T2> class Action_2; }

#define POFIMLGOIGD_CDFJNKGPEGP_JHMBIEGADOD_OFFSET UNITYSDK_OFFSET(0x1C1E3700)
#define POFIMLGOIGD_CDFJNKGPEGP_OFKBAMJIKCH_OFFSET UNITYSDK_OFFSET(0x1C1E3760)
#define POFIMLGOIGD_CDFJNKGPEGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E36F0)

inline static constexpr unsigned int POFIMLGOIGD_CDFJNKGPEGP_TypeDefinitionIndex = 57468;

class POFIMLGOIGD_CDFJNKGPEGP : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::FIBCHCLKAAA*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_CDFJNKGPEGP__CTOR_OFFSET))(this);
	}

	::System::Void JHMBIEGADOD(::FIBCHCLKAAA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::FIBCHCLKAAA*))((::PBYTE)hIl2Cpp + POFIMLGOIGD_CDFJNKGPEGP_JHMBIEGADOD_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void OFKBAMJIKCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_CDFJNKGPEGP_OFKBAMJIKCH_OFFSET))(this);
	}
};
