#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class CBLPNGOLFGM;
namespace RPG::GameCore { class GameEntity; }

#define IDEBHLEACDK_BCBEMOJBNHO_OFFSET UNITYSDK_OFFSET(0x15EB8C10)
#define IDEBHLEACDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15EB8DE0)
#define IDEBHLEACDK_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x15EB8C80)
#define IDEBHLEACDK_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15EB8B50)
#define IDEBHLEACDK_JFOFGJCINFA_OFFSET UNITYSDK_OFFSET(0x15EB8BD0)
#define IDEBHLEACDK_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x15EB8B90)

inline static constexpr unsigned int IDEBHLEACDK_TypeDefinitionIndex = 53763;

	class IDEBHLEACDK : public ::GJPFGOGOLBI
	{
	public:
		::CBLPNGOLFGM* KICICOHCPIP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEBHLEACDK_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEBHLEACDK_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEBHLEACDK_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void JFOFGJCINFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEBHLEACDK_JFOFGJCINFA_OFFSET))(this);
		}

		::System::Void BCBEMOJBNHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEBHLEACDK_BCBEMOJBNHO_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::GameEntity* a3, ::System::Int32 a4, ::RPG::GameCore::RtStackSkillTargetRedirectPhase a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::RtStackSkillTargetRedirectPhase))((::PBYTE)hIl2Cpp + IDEBHLEACDK_DADCFBHGLOH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
