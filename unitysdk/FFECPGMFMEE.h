#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNEDFAKBNBC.h"
#include "unitysdk/JHPEPDKHCJP.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HCIANHKCFIL;
class LONKKOMHFMD;
namespace System { class Action; }

#define FFECPGMFMEE_CEGMNHJCECC_OFFSET UNITYSDK_OFFSET(0x11D03D50)
#define FFECPGMFMEE_CGGIHNGAIIC_OFFSET UNITYSDK_OFFSET(0x11D039D0)
#define FFECPGMFMEE_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x11D03B10)
#define FFECPGMFMEE_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x11D03EB0)
#define FFECPGMFMEE_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x11D03E20)
#define FFECPGMFMEE_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x11D039F0)
#define FFECPGMFMEE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D03D40)

inline static constexpr unsigned int FFECPGMFMEE_TypeDefinitionIndex = 69870;

class FFECPGMFMEE : public ::JHPEPDKHCJP
{
public:
	::FNEDFAKBNBC ACDOKEGBJAO; // 0x10
	::System::Action* EGBBBMAIKNP; // 0x48
	::UnityEngine::Vector3 EGENKJPKJEI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECPGMFMEE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 CGGIHNGAIIC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECPGMFMEE_CGGIHNGAIIC_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + FFECPGMFMEE_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + FFECPGMFMEE_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::UnityEngine::Vector3 CEGMNHJCECC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECPGMFMEE_CEGMNHJCECC_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + FFECPGMFMEE_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + FFECPGMFMEE_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}
};
