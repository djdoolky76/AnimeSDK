#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKMIAOPFNGK_EEffectorSpace.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKMIAOPFNGK;
namespace RPG::Client { class AttachPointMapping; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FABRIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xCE5BB90)
#define RPG_CLIENT_FABRIK_CTOR_OFFSET UNITYSDK_OFFSET(0xCE5BC50)
#define RPG_CLIENT_FABRIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xCE5B5D0)
#define RPG_CLIENT_FABRIK_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xCE5B660)
#define RPG_CLIENT_FABRIK_IKRESET_OFFSET UNITYSDK_OFFSET(0xCE5BB00)
#define RPG_CLIENT_FABRIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xCE5B830)
#define RPG_CLIENT_FABRIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xCE5B6B0)

namespace RPG::Client
{
	class FABRIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IKEnabled; // 0x18
		::System::Boolean manualUpdate; // 0x19
		::System::Boolean keepTipRotation; // 0x1A
		::System::Byte _padding0[0x5];
		::UnityEngine::Transform* effectorTarget; // 0x20
		::UnityEngine::Vector3 effectorPosition; // 0x28
		::EKMIAOPFNGK_EEffectorSpace effectorSpace; // 0x34
		::System::Single fadeInTime; // 0x38
		::System::Single fadeOutTime; // 0x3C
		::System::Int32 maxSolveIterations; // 0x40
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* tipBone; // 0x48
		::System::Int32 spineBoneNum; // 0x50
		::System::Byte _padding2[0x4];
		::EKMIAOPFNGK* MOFKDLANDGM; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void IKReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_IKRESET_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_AWAKE_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_GET_WEIGHT_OFFSET))(this);
		}

	};
}
