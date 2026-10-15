#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AnimSetParameter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define NFEDECIBLEF_CKBBNANIEGB_1_OFFSET UNITYSDK_OFFSET(0xBB7CEC0)
#define NFEDECIBLEF_CKBBNANIEGB_OFFSET UNITYSDK_OFFSET(0xBB7C080)
#define NFEDECIBLEF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB7BD40)
#define NFEDECIBLEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB7BD70)
#define NFEDECIBLEF_HFKOBGDPBDJ_OFFSET UNITYSDK_OFFSET(0xBB7C800)
#define NFEDECIBLEF_OMGBFKFEEFL_OFFSET UNITYSDK_OFFSET(0xBB7BE00)
#define NFEDECIBLEF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB7C9A0)

	class NFEDECIBLEF
	{
	public:
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AnimSetParameter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AnimSetParameter*))((::PBYTE)hIl2Cpp + NFEDECIBLEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEDECIBLEF_DISPOSE_OFFSET))(this);
		}

		::System::Void OMGBFKFEEFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFEDECIBLEF_OMGBFKFEEFL_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEDECIBLEF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void CKBBNANIEGB(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + NFEDECIBLEF_CKBBNANIEGB_OFFSET))(this, a1);
		}

		::System::Void CKBBNANIEGB_1(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + NFEDECIBLEF_CKBBNANIEGB_1_OFFSET))(this, a1);
		}

		::System::Void HFKOBGDPBDJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NFEDECIBLEF_HFKOBGDPBDJ_OFFSET))(this, a1);
		}

	};
