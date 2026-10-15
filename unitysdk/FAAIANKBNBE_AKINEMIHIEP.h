#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FAAIANKBNBE_AKINEMIHIEP_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15662740)
#define FAAIANKBNBE_AKINEMIHIEP_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x156606F0)
#define FAAIANKBNBE_AKINEMIHIEP_CTOR_OFFSET UNITYSDK_OFFSET(0x15662700)
#define FAAIANKBNBE_AKINEMIHIEP_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x156627A0)
#define FAAIANKBNBE_AKINEMIHIEP_NKDLNMPNOJC_OFFSET UNITYSDK_OFFSET(0x15662950)
#define FAAIANKBNBE_AKINEMIHIEP__ASYNCGET_B__8_0_OFFSET UNITYSDK_OFFSET(0x15662CD0)

	class FAAIANKBNBE_AKINEMIHIEP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CCECMIKFAME; // 0x10
		::System::String* OINCGJJMAEF; // 0x18
		::RPG::Client::IAssetOperation* FHNHDPIAHHL; // 0x20
		::UnityEngine::GameObject* PGKENBMKDKA; // 0x28
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_AKINEMIHIEP_CTOR_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_AKINEMIHIEP_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_AKINEMIHIEP_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void KAOLPGACCID(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_AKINEMIHIEP_KAOLPGACCID_OFFSET))(this, a1);
		}

		::System::Void NKDLNMPNOJC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_AKINEMIHIEP_NKDLNMPNOJC_OFFSET))(this, a1);
		}

		::System::Boolean _AsyncGet_b__8_0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_AKINEMIHIEP__ASYNCGET_B__8_0_OFFSET))(this, a1);
		}

	};
