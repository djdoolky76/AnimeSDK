#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_GIINNFFLFGB.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

class DJDDGKFCNAJ;
namespace System { template <typename T> class Action_1; }

#define DJDDGKFCNAJ_OCEBAGMIHKC_BJOMDCLJNHI_OFFSET UNITYSDK_OFFSET(0x12088360)
#define DJDDGKFCNAJ_OCEBAGMIHKC__CTOR_OFFSET UNITYSDK_OFFSET(0x12088350)

inline static constexpr unsigned int DJDDGKFCNAJ_OCEBAGMIHKC_TypeDefinitionIndex = 40325;

class DJDDGKFCNAJ_OCEBAGMIHKC : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* EACOGDJEALO; // 0x10
	::DJDDGKFCNAJ* KLHPEBKNIFB; // 0x18
	::DJDDGKFCNAJ_GIINNFFLFGB OBNIAHNMHPF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDDGKFCNAJ_OCEBAGMIHKC__CTOR_OFFSET))(this);
	}

	::System::Void BJOMDCLJNHI(::DJDDGKFCNAJ_IGOPHLMOGAO DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + DJDDGKFCNAJ_OCEBAGMIHKC_BJOMDCLJNHI_OFFSET))(this, DJCNCELJPOM);
	}
};
