#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class CBLPNGOLFGM;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGINDHHBNPD_BDBBOLPMGAM_OFFSET UNITYSDK_OFFSET(0x1451A070)
#define EGINDHHBNPD_CJPBDEOHOGF_OFFSET UNITYSDK_OFFSET(0x1451A370)
#define EGINDHHBNPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1451A5C0)
#define EGINDHHBNPD_IJOAKGDPLPL_OFFSET UNITYSDK_OFFSET(0x1451A220)
#define EGINDHHBNPD_KKFKKOPCLBG_OFFSET UNITYSDK_OFFSET(0x1451A280)

	class EGINDHHBNPD : public ::KIFCLJJAOFJ
	{
	public:
		::System::Collections::Generic::List_1<::CBLPNGOLFGM*>* IHDKHABKMDI; // 0x20
		::System::Action* HPNACLGCGPB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGINDHHBNPD_CTOR_OFFSET))(this);
		}

		::CBLPNGOLFGM* BDBBOLPMGAM(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::GameEntity* a3, ::System::Int32 a4, ::RPG::GameCore::RtStackSkillTargetRedirectPhase a5)
		{
			return ((::CBLPNGOLFGM*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::RtStackSkillTargetRedirectPhase))((::PBYTE)hIl2Cpp + EGINDHHBNPD_BDBBOLPMGAM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KKFKKOPCLBG(::CBLPNGOLFGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBLPNGOLFGM*))((::PBYTE)hIl2Cpp + EGINDHHBNPD_KKFKKOPCLBG_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CJPBDEOHOGF(::RPG::GameCore::TeamType a1, ::RPG::GameCore::EntityType a2, ::RPG::GameCore::RtStackSkillTargetRedirectPhase a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::RPG::GameCore::RtStackSkillTargetRedirectPhase))((::PBYTE)hIl2Cpp + EGINDHHBNPD_CJPBDEOHOGF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IJOAKGDPLPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGINDHHBNPD_IJOAKGDPLPL_OFFSET))(this);
		}

	};
