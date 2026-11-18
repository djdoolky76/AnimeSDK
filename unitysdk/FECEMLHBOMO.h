#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLMMAMJGPCI.h"
#include "unitysdk/DONFJJIGKIL.h"
#include "unitysdk/FECEMLHBOMO_HNDENHKHFGA.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ABAGHPMMICI.h"
#include "unitysdk/JNCLHPMCNJN.h"
#include "unitysdk/LKEJGLHLBOH.h"

class FBAMLABJMKF;
class FFDNKIDGFMD;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define FECEMLHBOMO_CEEJCOKKHIL_OFFSET UNITYSDK_OFFSET(0x116AAB10)
#define FECEMLHBOMO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x116AAED0)
#define FECEMLHBOMO_IJBILGKKDPG_OFFSET UNITYSDK_OFFSET(0x116AAE10)
#define FECEMLHBOMO_PBGAEMAIBBE_OFFSET UNITYSDK_OFFSET(0x116A97E0)
#define FECEMLHBOMO__CTOR_OFFSET UNITYSDK_OFFSET(0x116AAD40)

inline static constexpr unsigned int FECEMLHBOMO_TypeDefinitionIndex = 68220;

class FECEMLHBOMO : public ::DONFJJIGKIL
{
public:
	// static const ::System::Single HPEPIHODAGN; // 0x0
	::MoleMole::UIHollowChessboard3DModelController* BDEFFPHDGNJ; // 0x10
	::FBAMLABJMKF* CKCJPICGPIG; // 0x18
	::FECEMLHBOMO_HNDENHKHFGA EAPMGNGIJFK; // 0x20
	::System::Boolean MEKMPECCFKP; // 0x24
	::System::Byte _padding0[0x3];
	::DLMMAMJGPCI DDNOJFJGFKD; // 0x28
	::UnityEngine::Vector3 MDPGGLJABHK; // 0x80
	::DLMMAMJGPCI KBDCIAAEDLD; // 0x8C
	::UnityEngine::Rect PMLPOJDEFHM; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECEMLHBOMO__CTOR_OFFSET))(this);
	}

	::System::Boolean PBGAEMAIBBE(::FFDNKIDGFMD* ABOGJGCIOKD, ::JNCLHPMCNJN& GHHJACHBEPA, ::DLMMAMJGPCI& NKFCNIPEOMP, ::ABAGHPMMICI& JBAAOKJHJMH, ::LKEJGLHLBOH& FJKOPFAAFBD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*, ::JNCLHPMCNJN&, ::DLMMAMJGPCI&, ::ABAGHPMMICI&, ::LKEJGLHLBOH&))((::PBYTE)hIl2Cpp + FECEMLHBOMO_PBGAEMAIBBE_OFFSET))(this, ABOGJGCIOKD, GHHJACHBEPA, NKFCNIPEOMP, JBAAOKJHJMH, FJKOPFAAFBD);
	}

	::FECEMLHBOMO_HNDENHKHFGA CEEJCOKKHIL(::UnityEngine::Rect MGGKJEKNALL, ::UnityEngine::Rect MGOFOAFCFIJ)
	{
		return ((::FECEMLHBOMO_HNDENHKHFGA(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + FECEMLHBOMO_CEEJCOKKHIL_OFFSET))(this, MGGKJEKNALL, MGOFOAFCFIJ);
	}

	::System::Boolean IJBILGKKDPG(::UnityEngine::Rect JNNOAMPJCBO, ::UnityEngine::Rect CNCKDLFFIAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + FECEMLHBOMO_IJBILGKKDPG_OFFSET))(this, JNNOAMPJCBO, CNCKDLFFIAO);
	}

	static ::FECEMLHBOMO* COKNIICCODC(::FBAMLABJMKF* COBEJJHGMPO, ::UnityEngine::Rect MGGKJEKNALL)
	{
		return ((::FECEMLHBOMO*(*)(::FBAMLABJMKF*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + FECEMLHBOMO_COKNIICCODC_OFFSET))(COBEJJHGMPO, MGGKJEKNALL);
	}
};
