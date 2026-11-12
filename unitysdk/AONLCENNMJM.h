#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PICFNOPIMNB.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillsBuffedAvatarDisplayData.h"
#include "unitysdk/System/Nullable_1.h"
class NNDKMMANHEA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AONLCENNMJM_CTOR_OFFSET UNITYSDK_OFFSET(0x169EB750)
#define AONLCENNMJM_MBEGPPKOMIH_OFFSET UNITYSDK_OFFSET(0x169EB760)

inline static constexpr unsigned int AONLCENNMJM_TypeDefinitionIndex = 53022;

	class AONLCENNMJM : public ::PICFNOPIMNB
	{
	public:
		::System::Void _ctor(::NNDKMMANHEA* a1, ::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>* a2, ::System::Func_2<::OIPMNNAHIFP, ::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NNDKMMANHEA*, ::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>*, ::System::Func_2<::OIPMNNAHIFP, ::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>>*))((::PBYTE)hIl2Cpp + AONLCENNMJM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MBEGPPKOMIH(::RPG::AvatarSystem::IAvatar* a1, ::RPG::GameCore::ConditionParam* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + AONLCENNMJM_MBEGPPKOMIH_OFFSET))(this, a1, a2);
		}

	};
