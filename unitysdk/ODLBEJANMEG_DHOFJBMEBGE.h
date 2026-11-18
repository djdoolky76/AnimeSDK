#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODLBEJANMEG_CBGFIAOEKKI.h"
#include "unitysdk/OIKGMKDLGAM.h"
#include "unitysdk/System/Object.h"

class FDOKNLPCNHO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ODLBEJANMEG_DHOFJBMEBGE_AEGDAAMGMFF_OFFSET UNITYSDK_OFFSET(0xE0EFC00)
#define ODLBEJANMEG_DHOFJBMEBGE_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0xE0EFBC0)
#define ODLBEJANMEG_DHOFJBMEBGE_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0xE0EFBB0)
#define ODLBEJANMEG_DHOFJBMEBGE_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0xE0EFBD0)
#define ODLBEJANMEG_DHOFJBMEBGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EFBE0)

inline static constexpr unsigned int ODLBEJANMEG_DHOFJBMEBGE_TypeDefinitionIndex = 44375;

class ODLBEJANMEG_DHOFJBMEBGE : public ::System::Object
{
public:
	::OIKGMKDLGAM MEADFGBGMAA; // 0x10

	::System::Void _ctor(::OIKGMKDLGAM MMBPHBBNGIF)
	{
		return ((::System::Void(*)(::PVOID, ::OIKGMKDLGAM))((::PBYTE)hIl2Cpp + ODLBEJANMEG_DHOFJBMEBGE__CTOR_OFFSET))(this, MMBPHBBNGIF);
	}

	::ODLBEJANMEG_CBGFIAOEKKI HKELPCLHLEC()
	{
		return ((::ODLBEJANMEG_CBGFIAOEKKI(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_DHOFJBMEBGE_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_DHOFJBMEBGE_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Int32 NGKOPBCHFOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_DHOFJBMEBGE_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::Boolean AEGDAAMGMFF(::System::Action_1<::System::Boolean>* CPCOBKCDFIF, ::FDOKNLPCNHO* BPGPPMDMKEK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::FDOKNLPCNHO*))((::PBYTE)hIl2Cpp + ODLBEJANMEG_DHOFJBMEBGE_AEGDAAMGMFF_OFFSET))(this, CPCOBKCDFIF, BPGPPMDMKEK);
	}
};
