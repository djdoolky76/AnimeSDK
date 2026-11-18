#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHPEPDKHCJP.h"

class HCIANHKCFIL;
class LONKKOMHFMD;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define IJGMIKPLNPL_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1ACB6700)
#define IJGMIKPLNPL_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x1ACB6B80)
#define IJGMIKPLNPL_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x1ACB6AF0)
#define IJGMIKPLNPL_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1ACB6A60)
#define IJGMIKPLNPL_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x1ACB6550)
#define IJGMIKPLNPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB6A50)

inline static constexpr unsigned int IJGMIKPLNPL_TypeDefinitionIndex = 57685;

class IJGMIKPLNPL : public ::JHPEPDKHCJP
{
public:
	::System::String* LLBOMPKGAIE; // 0x10
	::UnityEngine::GameObject* OAJIELDIGNH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGMIKPLNPL__CTOR_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + IJGMIKPLNPL_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + IJGMIKPLNPL_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + IJGMIKPLNPL_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + IJGMIKPLNPL_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}

	::UnityEngine::GameObject* KCKBIOBGKBH()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGMIKPLNPL_KCKBIOBGKBH_OFFSET))(this);
	}
};
