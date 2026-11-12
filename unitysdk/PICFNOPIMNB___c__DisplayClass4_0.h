#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillConfig.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillState.h"
class PICFNOPIMNB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PICFNOPIMNB___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCB838E0)
#define PICFNOPIMNB___C__DISPLAYCLASS4_0__GETDISPLAYDATA_B__0_OFFSET UNITYSDK_OFFSET(0xCB84DA0)

inline static constexpr unsigned int PICFNOPIMNB___c__DisplayClass4_0_TypeDefinitionIndex = 53030;

	class PICFNOPIMNB___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::PICFNOPIMNB* __4__this; // 0x10
		::RPG::AvatarSystem::IAvatar* avatar; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICFNOPIMNB___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::SeriesSkillState _GetDisplayData_b__0(::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>* a1)
		{
			return ((::RPG::AvatarSystem::SeriesSkillState(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>*))((::PBYTE)hIl2Cpp + PICFNOPIMNB___C__DISPLAYCLASS4_0__GETDISPLAYDATA_B__0_OFFSET))(this, a1);
		}

	};
