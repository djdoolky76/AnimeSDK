#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFJMGDGAGJM.h"
class NAOKFLDEDBJ;
class OHHPOGMFPBF;
namespace RPG::GameCore { class NewFireWaveProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define GBBGJLKMEKL_CTOR_OFFSET UNITYSDK_OFFSET(0x159478B0)
#define GBBGJLKMEKL_EEKEIPKOEKN_OFFSET UNITYSDK_OFFSET(0x159478D0)

inline static constexpr unsigned int GBBGJLKMEKL_TypeDefinitionIndex = 55233;

	class GBBGJLKMEKL : public ::EFJMGDGAGJM
	{
	public:
		::RPG::GameCore::NewFireWaveProjectile* CHKGAMDMBBK; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireWaveProjectile*))((::PBYTE)hIl2Cpp + GBBGJLKMEKL_CTOR_OFFSET))(this, a1, a2);
		}

		::NAOKFLDEDBJ* EEKEIPKOEKN(::OHHPOGMFPBF* a1)
		{
			return ((::NAOKFLDEDBJ*(*)(::PVOID, ::OHHPOGMFPBF*))((::PBYTE)hIl2Cpp + GBBGJLKMEKL_EEKEIPKOEKN_OFFSET))(this, a1);
		}

	};
