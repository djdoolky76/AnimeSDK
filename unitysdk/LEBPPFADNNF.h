#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelNpcLeaveNode; }

#define LEBPPFADNNF_CTOR_OFFSET UNITYSDK_OFFSET(0xB64BC00)
#define LEBPPFADNNF_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB64BB20)

	class LEBPPFADNNF : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcLeaveNode* EABKOHGCHFP; // 0x10
		::RPG::GameCore::ChimeraDuelTeamType PLAGBMGBOAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBPPFADNNF_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + LEBPPFADNNF_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
