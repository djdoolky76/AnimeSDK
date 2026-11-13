#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;

#define GPCFJAFAHIG_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x187C4960)
#define GPCFJAFAHIG_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x187C44A0)
#define GPCFJAFAHIG_CTOR_OFFSET UNITYSDK_OFFSET(0x187C4490)
#define GPCFJAFAHIG_JHEINJLCFDE_OFFSET UNITYSDK_OFFSET(0x187C48C0)

inline static constexpr unsigned int GPCFJAFAHIG_TypeDefinitionIndex = 65491;

	class GPCFJAFAHIG : public ::BMPICAPOOFD
	{
	public:
		::System::Void _ctor(::OFKKIMABHJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + GPCFJAFAHIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + GPCFJAFAHIG_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + GPCFJAFAHIG_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void JHEINJLCFDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFJAFAHIG_JHEINJLCFDE_OFFSET))(this);
		}

	};
