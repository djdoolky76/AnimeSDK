#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECHAFEHELNM.h"
#include "unitysdk/System/Object.h"

class EAPHGLKMJME;
class GCIEHNKIDNL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACIGCPBHOKH_BEKPMKLACPL_OFFSET UNITYSDK_OFFSET(0x1433D160)
#define ACIGCPBHOKH_ICEKHMMEBCJ_OFFSET UNITYSDK_OFFSET(0x1433D410)
#define ACIGCPBHOKH_OFOEEKINJAH_OFFSET UNITYSDK_OFFSET(0x1433D300)
#define ACIGCPBHOKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1433D150)

inline static constexpr unsigned int ACIGCPBHOKH_TypeDefinitionIndex = 82018;

class ACIGCPBHOKH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EAPHGLKMJME*>* CDECGJBICFH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIGCPBHOKH__CTOR_OFFSET))(this);
	}

	::EAPHGLKMJME* BEKPMKLACPL(::ECHAFEHELNM PNIFGJIOKPL)
	{
		return ((::EAPHGLKMJME*(*)(::PVOID, ::ECHAFEHELNM))((::PBYTE)hIl2Cpp + ACIGCPBHOKH_BEKPMKLACPL_OFFSET))(this, PNIFGJIOKPL);
	}

	::System::Void OFOEEKINJAH(::EAPHGLKMJME* KPHKBFHCIMI)
	{
		return ((::System::Void(*)(::PVOID, ::EAPHGLKMJME*))((::PBYTE)hIl2Cpp + ACIGCPBHOKH_OFOEEKINJAH_OFFSET))(this, KPHKBFHCIMI);
	}

	::System::Void ICEKHMMEBCJ(::GCIEHNKIDNL* OHKJGCILHNE, ::System::Boolean GLHNIPNNLIL)
	{
		return ((::System::Void(*)(::PVOID, ::GCIEHNKIDNL*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACIGCPBHOKH_ICEKHMMEBCJ_OFFSET))(this, OHKJGCILHNE, GLHNIPNNLIL);
	}
};
