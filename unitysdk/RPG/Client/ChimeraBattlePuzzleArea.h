#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_CTOR_OFFSET UNITYSDK_OFFSET(0xCB0FEC0)
#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_GET_TEAMMEMBERANCHORS_OFFSET UNITYSDK_OFFSET(0xCB0FE60)
#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_PBKDDFAFFDA_OFFSET UNITYSDK_OFFSET(0xCB0F500)
#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_START_OFFSET UNITYSDK_OFFSET(0xCB0F340)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraBattlePuzzleArea_TypeDefinitionIndex = 68646;

	class ChimeraBattlePuzzleArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 Index; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EBKJFCNIDDA; // 0x20
		::UnityEngine::Transform* TeamAnchorRoot; // 0x28
		::UnityEngine::Transform* LeaderAnchor; // 0x30
		::UnityEngine::Transform* WorkAnchor; // 0x38
		::Cinemachine::CinemachineVirtualCamera* Camera; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_START_OFFSET))(this);
		}

		::System::Void PBKDDFAFFDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_PBKDDFAFFDA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_TeamMemberAnchors()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_GET_TEAMMEMBERANCHORS_OFFSET))(this);
		}

	};
}
