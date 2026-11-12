#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillsBuffedAvatarDisplayData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillConfig.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillState.h"
class NNDKMMANHEA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define PICFNOPIMNB_CTOR_OFFSET UNITYSDK_OFFSET(0xCB834A0)
#define PICFNOPIMNB_GJEIOECKMBI_OFFSET UNITYSDK_OFFSET(0xCB838F0)
#define PICFNOPIMNB_MBEGPPKOMIH_OFFSET UNITYSDK_OFFSET(0xCB83B90)
#define PICFNOPIMNB_MCMLNIHFEIP_OFFSET UNITYSDK_OFFSET(0xCB83C10)
#define PICFNOPIMNB_NOEJDCJIDND_OFFSET UNITYSDK_OFFSET(0xCB84350)
#define PICFNOPIMNB_ODGBJHIDJKD_OFFSET UNITYSDK_OFFSET(0xCB83560)

inline static constexpr unsigned int PICFNOPIMNB_TypeDefinitionIndex = 53028;

	class PICFNOPIMNB : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>* HLKLBKNLFFO; // 0x10
		::System::Func_2<::OIPMNNAHIFP, ::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>>* FDNAPGPNDFB; // 0x18
		::NNDKMMANHEA* JDANNEMAPJK; // 0x20
		::System::Void _ctor(::NNDKMMANHEA* a1, ::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>* a2, ::System::Func_2<::OIPMNNAHIFP, ::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NNDKMMANHEA*, ::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>*, ::System::Func_2<::OIPMNNAHIFP, ::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>>*))((::PBYTE)hIl2Cpp + PICFNOPIMNB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::AvatarSystem::SeriesSkillState>* ODGBJHIDJKD(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::AvatarSystem::SeriesSkillState>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + PICFNOPIMNB_ODGBJHIDJKD_OFFSET))(this, a1);
		}

		::System::Boolean GJEIOECKMBI(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + PICFNOPIMNB_GJEIOECKMBI_OFFSET))(this, a1, a2);
		}

		::System::Boolean MBEGPPKOMIH(::RPG::AvatarSystem::IAvatar* a1, ::RPG::GameCore::ConditionParam* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + PICFNOPIMNB_MBEGPPKOMIH_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::SeriesSkillState MCMLNIHFEIP(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>* a2)
		{
			return ((::RPG::AvatarSystem::SeriesSkillState(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::SeriesSkillConfig>*))((::PBYTE)hIl2Cpp + PICFNOPIMNB_MCMLNIHFEIP_OFFSET))(this, a1, a2);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>* NOEJDCJIDND(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PICFNOPIMNB_NOEJDCJIDND_OFFSET))(this, a1);
		}

	};
