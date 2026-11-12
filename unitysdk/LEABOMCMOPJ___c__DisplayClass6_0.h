#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillsBuffedAvatarDisplayData.h"
#include "unitysdk/System/Nullable_1.h"
class LEABOMCMOPJ;

#define LEABOMCMOPJ___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDF8D0)
#define LEABOMCMOPJ___C__DISPLAYCLASS6_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xBEDFB00)

inline static constexpr unsigned int LEABOMCMOPJ___c__DisplayClass6_0_TypeDefinitionIndex = 64047;

	class LEABOMCMOPJ___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::LEABOMCMOPJ* __4__this; // 0x10
		::DNFDBKCPBNM seriesRoleIdentifier; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEABOMCMOPJ___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData> _Create_b__0(::OIPMNNAHIFP a1)
		{
			return ((::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + LEABOMCMOPJ___C__DISPLAYCLASS6_0__CREATE_B__0_OFFSET))(this, a1);
		}

	};
