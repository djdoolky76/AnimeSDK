#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class EKOGCACGADH;
namespace RPG::Client { class InControlIconPathConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOINPUTICONTIP_AALHLEOAFIH_OFFSET UNITYSDK_OFFSET(0xD837E40)
#define RPG_CLIENT_MONOINPUTICONTIP_AKMGALBKAGP_OFFSET UNITYSDK_OFFSET(0xD8379C0)
#define RPG_CLIENT_MONOINPUTICONTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xD8378B0)
#define RPG_CLIENT_MONOINPUTICONTIP_BCLLCAAMBPC_OFFSET UNITYSDK_OFFSET(0xD837EF0)
#define RPG_CLIENT_MONOINPUTICONTIP_CTOR_OFFSET UNITYSDK_OFFSET(0xD838010)
#define RPG_CLIENT_MONOINPUTICONTIP_ECEACGGFAOP_OFFSET UNITYSDK_OFFSET(0xD837BB0)
#define RPG_CLIENT_MONOINPUTICONTIP_MFNBDDBJGNE_OFFSET UNITYSDK_OFFSET(0xD837B60)
#define RPG_CLIENT_MONOINPUTICONTIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD837A80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInputIconTip_TypeDefinitionIndex = 61347;

	class MonoInputIconTip : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _ActionName; // 0x18
		::System::String* _IconPath_Phone; // 0x20
		::System::String* _IconPath_PC; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::InControlIconPathConfig*>* _IconPath_GamePad; // 0x30
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x38
		::EKOGCACGADH* DLALHGJDNNO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_ONDESTROY_OFFSET))(this);
		}

		::System::Void MFNBDDBJGNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_MFNBDDBJGNE_OFFSET))(this, a1);
		}

		::System::Void AKMGALBKAGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_AKMGALBKAGP_OFFSET))(this);
		}

		::System::String* ECEACGGFAOP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_ECEACGGFAOP_OFFSET))(this);
		}

		::InControl::InputControlType BCLLCAAMBPC()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_BCLLCAAMBPC_OFFSET))(this);
		}

		::System::Boolean AALHLEOAFIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_AALHLEOAFIH_OFFSET))(this);
		}

	};
}
