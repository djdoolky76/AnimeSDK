#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANPJOOACDEB_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x113C3790)
#define ANPJOOACDEB_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x113C39D0)
#define ANPJOOACDEB__CTOR_OFFSET UNITYSDK_OFFSET(0x113C3960)

inline static constexpr unsigned int ANPJOOACDEB_TypeDefinitionIndex = 74146;

class ANPJOOACDEB : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* ENIIHMPAOKN; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* LHAGMAKDGNK; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::Int32>* IPKLJPHJNDP; // 0x90
	::System::Int32 OIDFGIEJOAO; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPJOOACDEB__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPJOOACDEB_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPJOOACDEB_KHJELIBOECB_OFFSET))(this);
	}
};
