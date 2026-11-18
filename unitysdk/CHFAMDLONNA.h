#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMGELDDCNHD.h"
#include "unitysdk/DGKCAFEOPMP_2.h"
#include "unitysdk/EDPGEFBNECD.h"
#include "unitysdk/KLPLBODKAHP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HKMBHKMGMBF;
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CHFAMDLONNA_COJNLEJKOIN_OFFSET UNITYSDK_OFFSET(0x1FB83DE0)
#define CHFAMDLONNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB83D20)
#define CHFAMDLONNA_DJACPFIONDE_OFFSET UNITYSDK_OFFSET(0x1FB84470)
#define CHFAMDLONNA_EAEKCIJHPGD_OFFSET UNITYSDK_OFFSET(0x1FB84EF0)
#define CHFAMDLONNA_JBBCJBLBNBO_OFFSET UNITYSDK_OFFSET(0x1FB84F00)
#define CHFAMDLONNA_KOGMNEGLAHN_OFFSET UNITYSDK_OFFSET(0x1FB844C0)
#define CHFAMDLONNA_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1FB83FF0)
#define CHFAMDLONNA_LJINNPIKAAJ_OFFSET UNITYSDK_OFFSET(0x1FB84F10)
#define CHFAMDLONNA_OAKPDIJDDKO_OFFSET UNITYSDK_OFFSET(0x1FB83FD0)
#define CHFAMDLONNA_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1FB84560)
#define CHFAMDLONNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB83B10)

inline static constexpr unsigned int CHFAMDLONNA_TypeDefinitionIndex = 95028;

class CHFAMDLONNA : public ::System::Object
{
public:
	::UnityEngine::Camera* CEGKFLHNIMN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::HKMBHKMGMBF*>* NAJGLHNHNLA; // 0x18
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* ALNFMGFENLH; // 0x28
	::System::Boolean ICAPCMKHICF; // 0x30
	::System::Byte _padding0[0x3];
	::BMGELDDCNHD _GJIGLPKLEFJ_k__BackingField; // 0x34
	::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD> MBEAAIAKHGO; // 0x38
	::System::Byte _padding1[0x24];
	::UnityEngine::Vector3 FGJOJDGNMDM; // 0x64
	::UnityEngine::Quaternion EKFNCCIIJIJ; // 0x70

	::System::Void _ctor(::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CHFAMDLONNA__CTOR_OFFSET))(this, KONLMDBCDCK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMDLONNA_DISPOSE_OFFSET))(this);
	}

	::System::Boolean OAKPDIJDDKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMDLONNA_OAKPDIJDDKO_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG(::System::String* BGBCNLEBGEL, ::MoleMole::Config::ConfigHollowCameraShake* AMJADGKJAPK, ::System::Int32 LOPMOALAPNE, ::BMGELDDCNHD FEGCKCGMPFI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Int32, ::BMGELDDCNHD))((::PBYTE)hIl2Cpp + CHFAMDLONNA_LCJEELHBNHG_OFFSET))(this, BGBCNLEBGEL, AMJADGKJAPK, LOPMOALAPNE, FEGCKCGMPFI);
	}

	::System::Void DJACPFIONDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMDLONNA_DJACPFIONDE_OFFSET))(this);
	}

	::System::Void KOGMNEGLAHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMDLONNA_KOGMNEGLAHN_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHFAMDLONNA_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void EAEKCIJHPGD(::BMGELDDCNHD EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BMGELDDCNHD))((::PBYTE)hIl2Cpp + CHFAMDLONNA_EAEKCIJHPGD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COJNLEJKOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMDLONNA_COJNLEJKOIN_OFFSET))(this);
	}

	::BMGELDDCNHD JBBCJBLBNBO()
	{
		return ((::BMGELDDCNHD(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMDLONNA_JBBCJBLBNBO_OFFSET))(this);
	}

	::System::Void LJINNPIKAAJ(::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CHFAMDLONNA_LJINNPIKAAJ_OFFSET))(this, KONLMDBCDCK);
	}
};
