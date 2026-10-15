#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/EOCABHPJJJP.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xD8248C0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0xD824F70)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CTOR_OFFSET UNITYSDK_OFFSET(0xD8268E0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xD824C60)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_GET_IKENABLED_OFFSET UNITYSDK_OFFSET(0xD8246C0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xD824720)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_INITIATE_OFFSET UNITYSDK_OFFSET(0xD824910)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_MNLDAGEKJEP_OFFSET UNITYSDK_OFFSET(0xD8260F0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0xD825800)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xD826030)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xD8247C0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_SETIKENABLED_OFFSET UNITYSDK_OFFSET(0xD824850)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_SETUPGROUNDANGLE_OFFSET UNITYSDK_OFFSET(0xD825670)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFourFeetSimpleIK_TypeDefinitionIndex = 68591;

	class MonoFourFeetSimpleIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* mainRootTransform; // 0x18
		::Il2CppArray<::System::Object*>* originTransforms; // 0x20
		::Il2CppArray<::System::Object*>* rotateTransforms; // 0x28
		::UnityEngine::Vector2 rotationLimit; // 0x30
		::System::Single rotationSpeed; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* rotationSpeedScaleCurve; // 0x40
		::System::Single fadeInTime; // 0x48
		::System::Single fadeOutTime; // 0x4C
		::System::Boolean GEAEDBKECIB; // 0x50
		::System::Byte _padding1[0x3];
		::System::Single IODOJGGLDLG; // 0x54
		::System::Single FFDAAOHGCAD; // 0x58
		::System::Single ILCKDFJMGJM; // 0x5C
		::System::Collections::Generic::List_1<::System::Object*>* JAMCGCAKABB; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* CHAGCAEAPJE; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IKEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_GET_IKENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_AWAKE_OFFSET))(this);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_GETREFERENCETRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::EOCABHPJJJP a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::EOCABHPJJJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_COLLECTTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetIKEnabled(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_SETIKENABLED_OFFSET))(this, a1, a2);
		}

		::System::Void SetupGroundAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_SETUPGROUNDANGLE_OFFSET))(this, a1);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_INITIATE_OFFSET))(this);
		}

		::System::Void PreProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_PREPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void MNLDAGEKJEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_MNLDAGEKJEP_OFFSET))(this);
		}

	};
}
