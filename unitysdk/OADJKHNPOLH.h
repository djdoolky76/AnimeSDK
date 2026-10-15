#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSourceType.h"
#include "unitysdk/System/Object.h"
class OADJKHNPOLH;
namespace RPG::GameCore { class GameEntity; }

#define OADJKHNPOLH_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0xBD1C880)
#define OADJKHNPOLH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1C8F0)
#define OADJKHNPOLH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBD1C7B0)
#define OADJKHNPOLH_LKFJFGPFEJJ_OFFSET UNITYSDK_OFFSET(0xBD1C800)

inline static constexpr unsigned int OADJKHNPOLH_TypeDefinitionIndex = 57464;

	class OADJKHNPOLH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::GameCore::TargetSourceType MIAJNJNECOG; // 0x18
		::System::Boolean GIMONLCMCMA; // 0x1C
		::System::Boolean DHHGLHOOCMA; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADJKHNPOLH_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADJKHNPOLH_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LKFJFGPFEJJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TargetSourceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetSourceType))((::PBYTE)hIl2Cpp + OADJKHNPOLH_LKFJFGPFEJJ_OFFSET))(this, a1, a2);
		}

		::System::Void AEOIKFNKAAP(::OADJKHNPOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OADJKHNPOLH*))((::PBYTE)hIl2Cpp + OADJKHNPOLH_AEOIKFNKAAP_OFFSET))(this, a1);
		}

	};
