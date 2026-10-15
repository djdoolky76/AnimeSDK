#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShowGuideTextFollow3D; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define IHPKHHBCEEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1642D560)
#define IHPKHHBCEEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1642D570)
#define IHPKHHBCEEO_JDKMMJADFEN_OFFSET UNITYSDK_OFFSET(0x1642D9D0)
#define IHPKHHBCEEO_LFIAICPGIPJ_OFFSET UNITYSDK_OFFSET(0x1642D890)
#define IHPKHHBCEEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1642D5B0)
#define IHPKHHBCEEO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1642D920)
#define IHPKHHBCEEO_TICK_OFFSET UNITYSDK_OFFSET(0x1642D970)

inline static constexpr unsigned int IHPKHHBCEEO_TypeDefinitionIndex = 58660;

	class IHPKHHBCEEO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowGuideTextFollow3D* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideTextFollow3D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideTextFollow3D*))((::PBYTE)hIl2Cpp + IHPKHHBCEEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPKHHBCEEO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPKHHBCEEO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPKHHBCEEO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IHPKHHBCEEO_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* LFIAICPGIPJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPKHHBCEEO_LFIAICPGIPJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* JDKMMJADFEN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IHPKHHBCEEO_JDKMMJADFEN_OFFSET))(this, a1);
		}

	};
