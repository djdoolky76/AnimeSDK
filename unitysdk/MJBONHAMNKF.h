#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournModifierForbidOpenDoorReason.h"
#include "unitysdk/System/Object.h"
class AIBNHPAGDOL;
class MJBONHAMNKF;

#define MJBONHAMNKF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB963F50)
#define MJBONHAMNKF_CTOR_OFFSET UNITYSDK_OFFSET(0xB963FE0)
#define MJBONHAMNKF_GET_FORBIDREASON_OFFSET UNITYSDK_OFFSET(0xB964070)
#define MJBONHAMNKF_GET_ISCANOPENDOOR_OFFSET UNITYSDK_OFFSET(0xB964050)
#define MJBONHAMNKF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB963FF0)
#define MJBONHAMNKF_SET_FORBIDREASON_OFFSET UNITYSDK_OFFSET(0xB964080)
#define MJBONHAMNKF_SET_ISCANOPENDOOR_OFFSET UNITYSDK_OFFSET(0xB964060)

inline static constexpr unsigned int MJBONHAMNKF_TypeDefinitionIndex = 67696;

	class MJBONHAMNKF : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournModifierForbidOpenDoorReason _ForbidReason_k__BackingField; // 0x10
		::System::Boolean _IsCanOpenDoor_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBONHAMNKF_CTOR_OFFSET))(this);
		}

		static ::MJBONHAMNKF* BPLPBPMEODA(::AIBNHPAGDOL* a1)
		{
			return ((::MJBONHAMNKF*(*)(::AIBNHPAGDOL*))((::PBYTE)hIl2Cpp + MJBONHAMNKF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PAGKOAEOLKA(::AIBNHPAGDOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBNHPAGDOL*))((::PBYTE)hIl2Cpp + MJBONHAMNKF_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanOpenDoor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBONHAMNKF_GET_ISCANOPENDOOR_OFFSET))(this);
		}

		::System::Void set_IsCanOpenDoor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJBONHAMNKF_SET_ISCANOPENDOOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournModifierForbidOpenDoorReason get_ForbidReason()
		{
			return ((::RPG::GameCore::RogueTournModifierForbidOpenDoorReason(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBONHAMNKF_GET_FORBIDREASON_OFFSET))(this);
		}

		::System::Void set_ForbidReason(::RPG::GameCore::RogueTournModifierForbidOpenDoorReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournModifierForbidOpenDoorReason))((::PBYTE)hIl2Cpp + MJBONHAMNKF_SET_FORBIDREASON_OFFSET))(this, a1);
		}

	};
