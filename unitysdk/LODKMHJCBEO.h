#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/SwitchCharacterAnchorFindTargetPosResult.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class SwitchCharacterAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define LODKMHJCBEO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F8D60)
#define LODKMHJCBEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7F8D70)
#define LODKMHJCBEO_MOMKDIBDOBI_OFFSET UNITYSDK_OFFSET(0xB7F9370)
#define LODKMHJCBEO_NDHICAKGAKF_OFFSET UNITYSDK_OFFSET(0xB7F94A0)
#define LODKMHJCBEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7F8DB0)
#define LODKMHJCBEO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7F93F0)
#define LODKMHJCBEO_TICK_OFFSET UNITYSDK_OFFSET(0xB7F9440)

inline static constexpr unsigned int LODKMHJCBEO_TypeDefinitionIndex = 58744;

	class LODKMHJCBEO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchCharacterAnchor* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchor*))((::PBYTE)hIl2Cpp + LODKMHJCBEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKMHJCBEO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKMHJCBEO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKMHJCBEO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LODKMHJCBEO_TICK_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::SwitchCharacterAnchorFindTargetPosResult NDHICAKGAKF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::RPG::GameCore::SwitchCharacterAnchorFindTargetPosResult(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchor*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LODKMHJCBEO_NDHICAKGAKF_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean MOMKDIBDOBI(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LODKMHJCBEO_MOMKDIBDOBI_OFFSET))(this, a1, a2);
		}

	};
