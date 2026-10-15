#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelSpawnAllyNpcHipplenMiniNode; }

#define IMKCHCHHJPC_CTOR_OFFSET UNITYSDK_OFFSET(0x164DD340)
#define IMKCHCHHJPC_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0x164DD260)

inline static constexpr unsigned int IMKCHCHHJPC_TypeDefinitionIndex = 77696;

	class IMKCHCHHJPC : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* EABKOHGCHFP; // 0x10
		::RPG::GameCore::ChimeraDuelTeamType PLAGBMGBOAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKCHCHHJPC_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + IMKCHCHHJPC_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
