#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdvAINavigateTo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define LLFAMBLMLPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB7686B0)
#define LLFAMBLMLPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7686C0)
#define LLFAMBLMLPC_HDCOMIPMCLH_OFFSET UNITYSDK_OFFSET(0xB768AB0)
#define LLFAMBLMLPC_IIECMNAACJI_OFFSET UNITYSDK_OFFSET(0xB769270)
#define LLFAMBLMLPC_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0xB769220)
#define LLFAMBLMLPC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB769310)
#define LLFAMBLMLPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB768760)
#define LLFAMBLMLPC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7692C0)
#define LLFAMBLMLPC_TICK_OFFSET UNITYSDK_OFFSET(0xB768700)

inline static constexpr unsigned int LLFAMBLMLPC_TypeDefinitionIndex = 52330;

	class LLFAMBLMLPC : public ::GELIALJDFBL
	{
	public:
		::FOOIINCDBFA* AGJDABDMMEH; // 0x18
		::RPG::GameCore::AdvAINavigateTo* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x30
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x38
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x44
		// static const ::System::String* KCPEIIACMHC; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAINavigateTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAINavigateTo*))((::PBYTE)hIl2Cpp + LLFAMBLMLPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFAMBLMLPC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLFAMBLMLPC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFAMBLMLPC_ONTASKBEGIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 HDCOMIPMCLH(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LLFAMBLMLPC_HDCOMIPMCLH_OFFSET))(this, a1, a2);
		}

		::System::Void LLCDDOBNLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFAMBLMLPC_LLCDDOBNLBJ_OFFSET))(this);
		}

		::System::Void IIECMNAACJI(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + LLFAMBLMLPC_IIECMNAACJI_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFAMBLMLPC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLFAMBLMLPC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
