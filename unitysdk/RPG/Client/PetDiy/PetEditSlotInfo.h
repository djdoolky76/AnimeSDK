#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetDiy/PetSlotInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::PetDiy { class PetEditSlotInfo; }
namespace RPG::Client::PetDiy { class PetSlotInfo; }

#define RPG_CLIENT_PETDIY_PETEDITSLOTINFO_CREATEFROM_OFFSET UNITYSDK_OFFSET(0xE5221E0)
#define RPG_CLIENT_PETDIY_PETEDITSLOTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE5221C0)
#define RPG_CLIENT_PETDIY_PETEDITSLOTINFO_GETANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xE522310)
#define RPG_CLIENT_PETDIY_PETEDITSLOTINFO_SETANCHOR_OFFSET UNITYSDK_OFFSET(0xE5222B0)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetEditSlotInfo_TypeDefinitionIndex = 76636;

	class PetEditSlotInfo : public ::RPG::Client::PetDiy::PetSlotInfo
	{
	public:
		::System::UInt32 _AnchorID; // 0x20
		::System::UInt32 _GroupID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETEDITSLOTINFO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetDiy::PetEditSlotInfo* CreateFrom(::RPG::Client::PetDiy::PetSlotInfo* a1)
		{
			return ((::RPG::Client::PetDiy::PetEditSlotInfo*(*)(::RPG::Client::PetDiy::PetSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETEDITSLOTINFO_CREATEFROM_OFFSET))(a1);
		}

		::System::Void SetAnchor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETEDITSLOTINFO_SETANCHOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PETEDITSLOTINFO_GETANCHORPOSITION_OFFSET))(this);
		}

	};
}
