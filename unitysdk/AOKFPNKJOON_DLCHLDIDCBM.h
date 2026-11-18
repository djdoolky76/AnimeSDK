#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

class AOKFPNKJOON_GOBLGPABCIG;
class DJDDGKFCNAJ;
namespace MoleMole::Config { class ScenePerformConfig; }

#define AOKFPNKJOON_DLCHLDIDCBM_GNPFCKMKIBB_OFFSET UNITYSDK_OFFSET(0xF77A700)
#define AOKFPNKJOON_DLCHLDIDCBM__CTOR_OFFSET UNITYSDK_OFFSET(0xF77A6F0)

inline static constexpr unsigned int AOKFPNKJOON_DLCHLDIDCBM_TypeDefinitionIndex = 51465;

class AOKFPNKJOON_DLCHLDIDCBM : public ::System::Object
{
public:
	::DJDDGKFCNAJ* IGAODJIOGCH; // 0x10
	::MoleMole::Config::ScenePerformConfig* AKKFADGKFNA; // 0x18
	::AOKFPNKJOON_GOBLGPABCIG* EEMOEMFLABI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_DLCHLDIDCBM__CTOR_OFFSET))(this);
	}

	::System::Void GNPFCKMKIBB(::DJDDGKFCNAJ_IGOPHLMOGAO PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + AOKFPNKJOON_DLCHLDIDCBM_GNPFCKMKIBB_OFFSET))(this, PIIPCLCCOIG);
	}
};
