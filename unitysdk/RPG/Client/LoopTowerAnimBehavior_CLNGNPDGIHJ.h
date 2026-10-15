#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopTowerAnimBehavior_TowerDirectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KJCHLFOFENJ;
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLNGNPDGIHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD4E4110)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLNGNPDGIHJ_HOCPIHMJFCG_OFFSET UNITYSDK_OFFSET(0xD4E4EA0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLNGNPDGIHJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD4E47A0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLNGNPDGIHJ_PFJANGKDOLH_OFFSET UNITYSDK_OFFSET(0xD4E4C10)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopTowerAnimBehavior_CLNGNPDGIHJ_TypeDefinitionIndex = 70920;

	class LoopTowerAnimBehavior_CLNGNPDGIHJ : public ::System::Object
	{
	public:
		::KJCHLFOFENJ* ABLGIJMIFBI; // 0x10
		::RPG::Client::PipelineCameraEngine* NJDDFOALODJ; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HNAJLHHAJCA; // 0x20
		::System::Single CHKGHIJNNJK; // 0x28
		::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType DJKDDPLPLFK; // 0x2C
		::System::Void _ctor(::System::Single a1, ::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLNGNPDGIHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 HOCPIHMJFCG(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLNGNPDGIHJ_HOCPIHMJFCG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PFJANGKDOLH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLNGNPDGIHJ_PFJANGKDOLH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::System::Single a2, ::RPG::GameCore::VCameraShakeV2* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CLNGNPDGIHJ_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

	};
}
