#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class MLLIJILKJCF;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define OEICGDCFAAE_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0xB321A80)
#define OEICGDCFAAE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xB3210F0)
#define OEICGDCFAAE_EJLKFNODLLI_OFFSET UNITYSDK_OFFSET(0xB321320)
#define OEICGDCFAAE_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0xB321450)
#define OEICGDCFAAE_MJLCNNIMINO_OFFSET UNITYSDK_OFFSET(0xB321C90)
#define OEICGDCFAAE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xB321DA0)
#define OEICGDCFAAE_NOHNCECKEKK_OFFSET UNITYSDK_OFFSET(0xB321680)
#define OEICGDCFAAE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3212D0)

inline static constexpr unsigned int OEICGDCFAAE_TypeDefinitionIndex = 80080;

class OEICGDCFAAE : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEICGDCFAAE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OEICGDCFAAE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void EJLKFNODLLI(::MLLIJILKJCF* HKOOODGBDGG, ::System::Single IECOJPMPJMP)
	{
		return ((::System::Void(*)(::MLLIJILKJCF*, ::System::Single))((::PBYTE)hIl2Cpp + OEICGDCFAAE_EJLKFNODLLI_OFFSET))(HKOOODGBDGG, IECOJPMPJMP);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEICGDCFAAE_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OEICGDCFAAE_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void NOHNCECKEKK(::MLLIJILKJCF* LGCGBHIIGOD)
	{
		return ((::System::Void(*)(::MLLIJILKJCF*))((::PBYTE)hIl2Cpp + OEICGDCFAAE_NOHNCECKEKK_OFFSET))(LGCGBHIIGOD);
	}

	static ::System::Single MJLCNNIMINO(::MLLIJILKJCF* HKOOODGBDGG)
	{
		return ((::System::Single(*)(::MLLIJILKJCF*))((::PBYTE)hIl2Cpp + OEICGDCFAAE_MJLCNNIMINO_OFFSET))(HKOOODGBDGG);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OEICGDCFAAE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
