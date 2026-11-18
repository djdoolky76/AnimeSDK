#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOKFPNKJOON_EODHNHHIKOP.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class FAKIACDIKOP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOKFPNKJOON_ALGFBJBKADN_BOHGPNAOGEG_OFFSET UNITYSDK_OFFSET(0x14C24670)
#define AOKFPNKJOON_ALGFBJBKADN__CTOR_OFFSET UNITYSDK_OFFSET(0x14C24660)

inline static constexpr unsigned int AOKFPNKJOON_ALGFBJBKADN_TypeDefinitionIndex = 51468;

class AOKFPNKJOON_ALGFBJBKADN : public ::System::Object
{
public:
	::AOKFPNKJOON_EODHNHHIKOP HNOPAJLDCFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_ALGFBJBKADN__CTOR_OFFSET))(this);
	}

	::System::Void BOHGPNAOGEG(::FAKIACDIKOP* DJCNCELJPOM, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::FAKIACDIKOP*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + AOKFPNKJOON_ALGFBJBKADN_BOHGPNAOGEG_OFFSET))(this, DJCNCELJPOM, POLEBKEFMFL);
	}
};
