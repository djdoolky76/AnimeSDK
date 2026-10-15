#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDHPIGIAOLE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropMoveTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MCGNFDFJBGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB874620)
#define MCGNFDFJBGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB874630)
#define MCGNFDFJBGD_FFAGJFOJHEG_OFFSET UNITYSDK_OFFSET(0xB8757C0)
#define MCGNFDFJBGD_KODOILAFOMG_OFFSET UNITYSDK_OFFSET(0xB875E10)
#define MCGNFDFJBGD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB875BF0)
#define MCGNFDFJBGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8747D0)
#define MCGNFDFJBGD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8746D0)
#define MCGNFDFJBGD_PGMEGIAGOLL_OFFSET UNITYSDK_OFFSET(0xB875D20)
#define MCGNFDFJBGD_TICK_OFFSET UNITYSDK_OFFSET(0xB874770)

inline static constexpr unsigned int MCGNFDFJBGD_TypeDefinitionIndex = 58333;

	class MCGNFDFJBGD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TransformComponent* OIGGFCOBKCG; // 0x18
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::EDHPIGIAOLE* HDIOLMOJFDN; // 0x30
		::RPG::GameCore::PropMoveTo* OFKGLJOAMLD; // 0x38
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x40
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x4C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropMoveTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropMoveTo*))((::PBYTE)hIl2Cpp + MCGNFDFJBGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGNFDFJBGD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGNFDFJBGD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCGNFDFJBGD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGNFDFJBGD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCGNFDFJBGD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void PGMEGIAGOLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGNFDFJBGD_PGMEGIAGOLL_OFFSET))(this);
		}

		::System::Void KODOILAFOMG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCGNFDFJBGD_KODOILAFOMG_OFFSET))(this, a1);
		}

		::System::Boolean FFAGJFOJHEG(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MCGNFDFJBGD_FFAGJFOJHEG_OFFSET))(this, a1, a2, a3);
		}

	};
