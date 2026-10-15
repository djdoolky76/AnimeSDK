#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCell.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellDrop.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellSaver.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellTrigger.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class AFOAMOJGBFC;
class CCCBENCKELF;
class DMANKEBECAE;
class FDPALAEIHPB;
class HPCKCJDCNFM;
class ILILKFMOKEB;
class JPMKMMMGNJN;
namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }
namespace UnityEngine { class Transform; }

#define NPLOEOLJEKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C948F20)
#define NPLOEOLJEKI_HNPANKDGIGH_OFFSET UNITYSDK_OFFSET(0x1C949710)
#define NPLOEOLJEKI_IFFMDKABCDC_OFFSET UNITYSDK_OFFSET(0x1C949440)
#define NPLOEOLJEKI_IPFIBIFKLJB_OFFSET UNITYSDK_OFFSET(0x1C949010)
#define NPLOEOLJEKI_JHAJLBKIINL_OFFSET UNITYSDK_OFFSET(0x1C949310)
#define NPLOEOLJEKI_MNHOCNCGOLJ_OFFSET UNITYSDK_OFFSET(0x1C948F30)

inline static constexpr unsigned int NPLOEOLJEKI_TypeDefinitionIndex = 42533;

	class NPLOEOLJEKI : public ::HLFHMKMJNPK
	{
	public:
		::JPMKMMMGNJN* PDENFEFCAGN; // 0x18
		::FDPALAEIHPB* MBKIEFPKECG; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::JPMKMMMGNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::JPMKMMMGNJN*))((::PBYTE)hIl2Cpp + NPLOEOLJEKI_CTOR_OFFSET))(this, a1, a2);
		}

		::ILILKFMOKEB* MNHOCNCGOLJ(::System::Single a1, ::System::Boolean a2, ::DMANKEBECAE* a3)
		{
			return ((::ILILKFMOKEB*(*)(::PVOID, ::System::Single, ::System::Boolean, ::DMANKEBECAE*))((::PBYTE)hIl2Cpp + NPLOEOLJEKI_MNHOCNCGOLJ_OFFSET))(this, a1, a2, a3);
		}

		::CCCBENCKELF* IPFIBIFKLJB(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::CCCBENCKELF*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPLOEOLJEKI_IPFIBIFKLJB_OFFSET))(this, a1, a2, a3);
		}

		::AFOAMOJGBFC* JHAJLBKIINL(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup a1, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* a2)
		{
			return ((::AFOAMOJGBFC*(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>*))((::PBYTE)hIl2Cpp + NPLOEOLJEKI_JHAJLBKIINL_OFFSET))(this, a1, a2);
		}

		::HPCKCJDCNFM* IFFMDKABCDC(::AFOAMOJGBFC* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell a2, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop> a3, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger> a4, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver> a5)
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID, ::AFOAMOJGBFC*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop>, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger>, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver>))((::PBYTE)hIl2Cpp + NPLOEOLJEKI_IFFMDKABCDC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::HPCKCJDCNFM* HNPANKDGIGH(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3Int a3, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a4, ::UnityEngine::Vector3Int a5, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig a6)
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig))((::PBYTE)hIl2Cpp + NPLOEOLJEKI_HNPANKDGIGH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
