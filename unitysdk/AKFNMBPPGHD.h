#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBGNNLOGCLG.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define AKFNMBPPGHD_BANJGKPEGFG_OFFSET UNITYSDK_OFFSET(0x12CCDE30)
#define AKFNMBPPGHD_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCDBD0)
#define AKFNMBPPGHD_HBKNGAJILJG_OFFSET UNITYSDK_OFFSET(0x12CCE250)
#define AKFNMBPPGHD_OEMMHFALFFL_OFFSET UNITYSDK_OFFSET(0x12CCDC60)
#define AKFNMBPPGHD_OHPMNIHBCMB_OFFSET UNITYSDK_OFFSET(0x12CCE200)

	class AKFNMBPPGHD : public ::FBGNNLOGCLG
	{
	public:
		::System::Single HPGOEGGJOHM; // 0xE0
		::System::Single KJOPNHHEANI; // 0xE4
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AKFNMBPPGHD_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean OEMMHFALFFL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKFNMBPPGHD_OEMMHFALFFL_OFFSET))(this, a1);
		}

		::System::Void BANJGKPEGFG(::RPG::GameCore::CharacterMotionFlag a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::TaskContext* a6, ::RPG::GameCore::TaskConfig* a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKFNMBPPGHD_BANJGKPEGFG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

		::System::Boolean OHPMNIHBCMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFNMBPPGHD_OHPMNIHBCMB_OFFSET))(this);
		}

		::System::Boolean HBKNGAJILJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFNMBPPGHD_HBKNGAJILJG_OFFSET))(this);
		}

	};
