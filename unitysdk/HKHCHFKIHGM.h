#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueDLC1Dot3PictureFrameFinish; }
namespace System { class Object; }

#define HKHCHFKIHGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D44130)
#define HKHCHFKIHGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D44140)
#define HKHCHFKIHGM_MFOOJCGLFJD_OFFSET UNITYSDK_OFFSET(0x15D44490)
#define HKHCHFKIHGM_NOMNNEOGPCJ_OFFSET UNITYSDK_OFFSET(0x15D44570)
#define HKHCHFKIHGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D44240)
#define HKHCHFKIHGM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D44520)
#define HKHCHFKIHGM_TICK_OFFSET UNITYSDK_OFFSET(0x15D441E0)

inline static constexpr unsigned int HKHCHFKIHGM_TypeDefinitionIndex = 58920;

	class HKHCHFKIHGM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish*))((::PBYTE)hIl2Cpp + HKHCHFKIHGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHFKIHGM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKHCHFKIHGM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHFKIHGM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHFKIHGM_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean MFOOJCGLFJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHFKIHGM_MFOOJCGLFJD_OFFSET))(this);
		}

		::System::Void NOMNNEOGPCJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKHCHFKIHGM_NOMNNEOGPCJ_OFFSET))(this, a1);
		}

	};
