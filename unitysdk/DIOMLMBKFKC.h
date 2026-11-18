#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AENDIENHBKL.h"
#include "unitysdk/JENJOEAJELD.h"

class FOHHIICFBPC;
namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace MoleMole::Config { class HollowParticleScreenColorModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define DIOMLMBKFKC_BEPAECKDPEM_OFFSET UNITYSDK_OFFSET(0x19D65240)
#define DIOMLMBKFKC_CBJAEOKBGBE_OFFSET UNITYSDK_OFFSET(0x19D65430)
#define DIOMLMBKFKC_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x19D65320)
#define DIOMLMBKFKC_EKJAPNEIJMA_OFFSET UNITYSDK_OFFSET(0x19D65180)
#define DIOMLMBKFKC_IEMADDDNGNJ_OFFSET UNITYSDK_OFFSET(0x19D65170)
#define DIOMLMBKFKC_MHFIMHCLMNH_OFFSET UNITYSDK_OFFSET(0x19D654D0)
#define DIOMLMBKFKC__CTOR_OFFSET UNITYSDK_OFFSET(0x19D653E0)

inline static constexpr unsigned int DIOMLMBKFKC_TypeDefinitionIndex = 40954;

class DIOMLMBKFKC : public ::AENDIENHBKL
{
public:
	::MoleMole::Config::HollowParticleScreenColorModuleConfig* DFMKILICPFB; // 0x20
	::JENJOEAJELD HDIEABKPPNF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOMLMBKFKC__CTOR_OFFSET))(this);
	}

	::System::Boolean IEMADDDNGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOMLMBKFKC_IEMADDDNGNJ_OFFSET))(this);
	}

	::AENDIENHBKL* EKJAPNEIJMA(::MoleMole::Config::HollowChessboardParticleModuleConfig* DFMKILICPFB, ::UnityEngine::ParticleSystem* JNDDJMAHNAI)
	{
		return ((::AENDIENHBKL*(*)(::PVOID, ::MoleMole::Config::HollowChessboardParticleModuleConfig*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + DIOMLMBKFKC_EKJAPNEIJMA_OFFSET))(this, DFMKILICPFB, JNDDJMAHNAI);
	}

	::System::Void BEPAECKDPEM(::FOHHIICFBPC* EGILIDBIJOB)
	{
		return ((::System::Void(*)(::PVOID, ::FOHHIICFBPC*))((::PBYTE)hIl2Cpp + DIOMLMBKFKC_BEPAECKDPEM_OFFSET))(this, EGILIDBIJOB);
	}

	::System::Void CHCGMACMJLD(::FOHHIICFBPC* EGILIDBIJOB, ::System::Boolean AEBGBPDHAAJ)
	{
		return ((::System::Void(*)(::PVOID, ::FOHHIICFBPC*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIOMLMBKFKC_CHCGMACMJLD_OFFSET))(this, EGILIDBIJOB, AEBGBPDHAAJ);
	}

	::System::Void CBJAEOKBGBE(::FOHHIICFBPC* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::FOHHIICFBPC*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIOMLMBKFKC_CBJAEOKBGBE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void MHFIMHCLMNH(::FOHHIICFBPC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FOHHIICFBPC*))((::PBYTE)hIl2Cpp + DIOMLMBKFKC_MHFIMHCLMNH_OFFSET))(this, MIALFKCCCPI);
	}
};
