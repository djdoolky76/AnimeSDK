#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DONFJJIGKIL.h"
#include "unitysdk/ABAGHPMMICI.h"
#include "unitysdk/DLMMAMJGPCI.h"
#include "unitysdk/JNCLHPMCNJN.h"
#include "unitysdk/LKEJGLHLBOH.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBAMLABJMKF;
class FFDNKIDGFMD;

#define BMPBGMGNKGB_AKCAOPDKFHM_OFFSET UNITYSDK_OFFSET(0x1151F0A0)
#define BMPBGMGNKGB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1151F5E0)
#define BMPBGMGNKGB_KNAFLCABJEF_OFFSET UNITYSDK_OFFSET(0x1151F510)
#define BMPBGMGNKGB_LMGPCLBACMO_OFFSET UNITYSDK_OFFSET(0x1151F180)
#define BMPBGMGNKGB_NPBJAMCNMCJ_OFFSET UNITYSDK_OFFSET(0x1151F270)
#define BMPBGMGNKGB_PBGAEMAIBBE_OFFSET UNITYSDK_OFFSET(0x1151E370)
#define BMPBGMGNKGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1151F500)

inline static constexpr unsigned int BMPBGMGNKGB_TypeDefinitionIndex = 53156;

class BMPBGMGNKGB : public ::DONFJJIGKIL
{
public:
	::FBAMLABJMKF* CKCJPICGPIG; // 0x10
	::System::Boolean OMKJOAAAECB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPBGMGNKGB__CTOR_OFFSET))(this);
	}

	::System::Boolean PBGAEMAIBBE(::FFDNKIDGFMD* ABOGJGCIOKD, ::JNCLHPMCNJN& GHHJACHBEPA, ::DLMMAMJGPCI& NKFCNIPEOMP, ::ABAGHPMMICI& JBAAOKJHJMH, ::LKEJGLHLBOH& FJKOPFAAFBD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*, ::JNCLHPMCNJN&, ::DLMMAMJGPCI&, ::ABAGHPMMICI&, ::LKEJGLHLBOH&))((::PBYTE)hIl2Cpp + BMPBGMGNKGB_PBGAEMAIBBE_OFFSET))(this, ABOGJGCIOKD, GHHJACHBEPA, NKFCNIPEOMP, JBAAOKJHJMH, FJKOPFAAFBD);
	}

	::System::Single KNAFLCABJEF(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC, ::System::Single ECDELIEOAHB, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BMPBGMGNKGB_KNAFLCABJEF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC, ECDELIEOAHB, PBCAAADNEPK);
	}

	static ::BMPBGMGNKGB* COKNIICCODC(::FBAMLABJMKF* COBEJJHGMPO)
	{
		return ((::BMPBGMGNKGB*(*)(::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + BMPBGMGNKGB_COKNIICCODC_OFFSET))(COBEJJHGMPO);
	}

	::UnityEngine::Vector3 NPBJAMCNMCJ(::UnityEngine::Vector3& HBEKKMCBGBK, ::System::Single& KEPOFHHIMMD, ::System::Single& NOCHEGECIHL)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + BMPBGMGNKGB_NPBJAMCNMCJ_OFFSET))(this, HBEKKMCBGBK, KEPOFHHIMMD, NOCHEGECIHL);
	}

	::UnityEngine::Vector3 AKCAOPDKFHM(::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> ILBBCFLKDPN, ::UnityEngine::Vector3& OHOGDOMNHNK)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BMPBGMGNKGB_AKCAOPDKFHM_OFFSET))(this, ILBBCFLKDPN, OHOGDOMNHNK);
	}

	::System::Boolean LMGPCLBACMO(::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> ILBBCFLKDPN, ::UnityEngine::Vector3& OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BMPBGMGNKGB_LMGPCLBACMO_OFFSET))(this, ILBBCFLKDPN, OHOGDOMNHNK);
	}
};
