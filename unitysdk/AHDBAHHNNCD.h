#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class CharacterNavigateTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define AHDBAHHNNCD_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0xEB76B50)
#define AHDBAHHNNCD_CTOR_OFFSET UNITYSDK_OFFSET(0xEB76000)
#define AHDBAHHNNCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB76010)
#define AHDBAHHNNCD_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xEB76050)
#define AHDBAHHNNCD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xEB76C90)
#define AHDBAHHNNCD_ONSKIP_OFFSET UNITYSDK_OFFSET(0xEB76BF0)
#define AHDBAHHNNCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB76060)
#define AHDBAHHNNCD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB76A40)
#define AHDBAHHNNCD_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0xEB76BA0)
#define AHDBAHHNNCD_TICK_OFFSET UNITYSDK_OFFSET(0xEB76AF0)

inline static constexpr unsigned int AHDBAHHNNCD_TypeDefinitionIndex = 58007;

	class AHDBAHHNNCD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CharacterNavigateTo* OFKGLJOAMLD; // 0x18
		::FOOIINCDBFA* AGJDABDMMEH; // 0x20
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x38
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterNavigateTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterNavigateTo*))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_TICK_OFFSET))(this, a1);
		}

		::System::Void BFJBKDGAJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_BFJBKDGAJMO_OFFSET))(this);
		}

		::System::Void OOGCMLCLMJF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_OOGCMLCLMJF_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHDBAHHNNCD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
