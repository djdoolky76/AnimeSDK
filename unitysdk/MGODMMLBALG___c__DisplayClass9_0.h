#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define MGODMMLBALG___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1B34A390)
#define MGODMMLBALG___C__DISPLAYCLASS9_0__HASRETURNTRIALAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x1B34A480)

inline static constexpr unsigned int MGODMMLBALG___c__DisplayClass9_0_TypeDefinitionIndex = 63297;

	class MGODMMLBALG___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGODMMLBALG___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasReturnTrialAvatar_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + MGODMMLBALG___C__DISPLAYCLASS9_0__HASRETURNTRIALAVATAR_B__0_OFFSET))(this, a1);
		}

	};
