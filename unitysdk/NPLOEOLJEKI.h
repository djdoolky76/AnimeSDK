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
namespace System { class Nullable; }
namespace UnityEngine { class Transform; }

#define NPLOEOLJEKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9771F0)
#define NPLOEOLJEKI_HNPANKDGIGH_OFFSET UNITYSDK_OFFSET(0x1C9779E0)
#define NPLOEOLJEKI_IFFMDKABCDC_OFFSET UNITYSDK_OFFSET(0x1C977710)
#define NPLOEOLJEKI_IPFIBIFKLJB_OFFSET UNITYSDK_OFFSET(0x1C9772E0)
#define NPLOEOLJEKI_JHAJLBKIINL_OFFSET UNITYSDK_OFFSET(0x1C9775E0)
#define NPLOEOLJEKI_MNHOCNCGOLJ_OFFSET UNITYSDK_OFFSET(0x1C977200)

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

		::HPCKCJDCNFM* IFFMDKABCDC(::AFOAMOJGBFC* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell a2, ::System::Nullable* a3, ::System::Nullable* a4, ::System::Nullable* a5)
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID, ::AFOAMOJGBFC*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*))((::PBYTE)hIl2Cpp + NPLOEOLJEKI_IFFMDKABCDC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::HPCKCJDCNFM* HNPANKDGIGH(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3Int a3, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a4, ::UnityEngine::Vector3Int a5, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig a6)
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig))((::PBYTE)hIl2Cpp + NPLOEOLJEKI_HNPANKDGIGH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
