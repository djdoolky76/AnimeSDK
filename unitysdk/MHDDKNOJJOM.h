#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelNpcFireEffectNode; }

#define MHDDKNOJJOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB932700)
#define MHDDKNOJJOM_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB932620)

	class MHDDKNOJJOM : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcFireEffectNode* EABKOHGCHFP; // 0x10
		::RPG::GameCore::ChimeraDuelTeamType PLAGBMGBOAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDDKNOJJOM_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + MHDDKNOJJOM_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
