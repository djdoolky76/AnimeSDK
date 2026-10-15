#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShowGuideFollow3D; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define BFPNLKFMEMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB174F90)
#define BFPNLKFMEMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB174FA0)
#define BFPNLKFMEMN_FNIPAMMJLFK_OFFSET UNITYSDK_OFFSET(0xB175270)
#define BFPNLKFMEMN_JDKMMJADFEN_OFFSET UNITYSDK_OFFSET(0xB1755D0)
#define BFPNLKFMEMN_JJDJPOBMDNC_OFFSET UNITYSDK_OFFSET(0xB175300)
#define BFPNLKFMEMN_KMBBDIJPMBJ_OFFSET UNITYSDK_OFFSET(0xB175760)
#define BFPNLKFMEMN_LFIAICPGIPJ_OFFSET UNITYSDK_OFFSET(0xB175150)
#define BFPNLKFMEMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB174FE0)
#define BFPNLKFMEMN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1751C0)
#define BFPNLKFMEMN_TICK_OFFSET UNITYSDK_OFFSET(0xB175210)

inline static constexpr unsigned int BFPNLKFMEMN_TypeDefinitionIndex = 58656;

	class BFPNLKFMEMN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowGuideFollow3D* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideFollow3D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideFollow3D*))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* LFIAICPGIPJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_LFIAICPGIPJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* FNIPAMMJLFK()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_FNIPAMMJLFK_OFFSET))(this);
		}

		::UnityEngine::GameObject* JJDJPOBMDNC()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_JJDJPOBMDNC_OFFSET))(this);
		}

		::System::Boolean KMBBDIJPMBJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_KMBBDIJPMBJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* JDKMMJADFEN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BFPNLKFMEMN_JDKMMJADFEN_OFFSET))(this, a1);
		}

	};
