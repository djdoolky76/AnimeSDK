#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelNpcAnimatorControlNode; }

#define DABODGCJPHG_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBBFB0)
#define DABODGCJPHG_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xDFBBED0)

	class DABODGCJPHG : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode* EABKOHGCHFP; // 0x10
		::RPG::GameCore::ChimeraDuelTeamType PLAGBMGBOAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABODGCJPHG_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + DABODGCJPHG_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
