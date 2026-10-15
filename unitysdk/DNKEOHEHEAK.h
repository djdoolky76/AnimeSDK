#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DNKEOHEHEAK_CHFHPJPFJIL_OFFSET UNITYSDK_OFFSET(0x11FCE6E0)
#define DNKEOHEHEAK_CLEAR_OFFSET UNITYSDK_OFFSET(0x11FCE4A0)
#define DNKEOHEHEAK_CTOR_OFFSET UNITYSDK_OFFSET(0x11FCE890)
#define DNKEOHEHEAK_DBNJNJFBKFA_OFFSET UNITYSDK_OFFSET(0x11FCE640)
#define DNKEOHEHEAK_FMCEJIKFGOO_OFFSET UNITYSDK_OFFSET(0x11FCE830)
#define DNKEOHEHEAK_KBOAICKAPLB_OFFSET UNITYSDK_OFFSET(0x11FCE500)
#define DNKEOHEHEAK_KHDHLMENOHB_OFFSET UNITYSDK_OFFSET(0x11FCE740)

inline static constexpr unsigned int DNKEOHEHEAK_TypeDefinitionIndex = 57501;

	class DNKEOHEHEAK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* MDMHICOGGEJ; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKEOHEHEAK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKEOHEHEAK_CLEAR_OFFSET))(this);
		}

		::System::Void KBOAICKAPLB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DNKEOHEHEAK_KBOAICKAPLB_OFFSET))(this, a1);
		}

		::System::Boolean DBNJNJFBKFA(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DNKEOHEHEAK_DBNJNJFBKFA_OFFSET))(this, a1);
		}

		::System::Void CHFHPJPFJIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKEOHEHEAK_CHFHPJPFJIL_OFFSET))(this);
		}

		::System::Boolean KHDHLMENOHB(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DNKEOHEHEAK_KHDHLMENOHB_OFFSET))(this, a1);
		}

		::System::Boolean FMCEJIKFGOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKEOHEHEAK_FMCEJIKFGOO_OFFSET))(this);
		}

	};
