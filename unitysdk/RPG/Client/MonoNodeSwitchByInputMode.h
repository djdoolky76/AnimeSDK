#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONONODESWITCHBYINPUTMODE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD852A20)
#define RPG_CLIENT_MONONODESWITCHBYINPUTMODE_CTOR_OFFSET UNITYSDK_OFFSET(0xD852F60)
#define RPG_CLIENT_MONONODESWITCHBYINPUTMODE_KANMCJHEFJJ_1_OFFSET UNITYSDK_OFFSET(0xD852D80)
#define RPG_CLIENT_MONONODESWITCHBYINPUTMODE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD852AE0)
#define RPG_CLIENT_MONONODESWITCHBYINPUTMODE_MFNBDDBJGNE_OFFSET UNITYSDK_OFFSET(0xD852D30)
#define RPG_CLIENT_MONONODESWITCHBYINPUTMODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD852C70)

namespace RPG::Client
{
	class MonoNodeSwitchByInputMode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _OnGamepad; // 0x18
		::System::Boolean _OnPC; // 0x19
		::System::Boolean _OnMobile; // 0x1A
		::System::Byte _padding0[0x5];
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _ShowNodes; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _HideNodes; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYINPUTMODE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYINPUTMODE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYINPUTMODE_ONDESTROY_OFFSET))(this);
		}

		::System::Void MFNBDDBJGNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYINPUTMODE_MFNBDDBJGNE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYINPUTMODE_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYINPUTMODE_KANMCJHEFJJ_1_OFFSET))(this, a1);
		}

	};
}
