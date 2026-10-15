#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define LFAIOGHKNNK_CTOR_OFFSET UNITYSDK_OFFSET(0xB65EAA0)
#define LFAIOGHKNNK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB65F8F0)
#define LFAIOGHKNNK_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xB65F940)
#define LFAIOGHKNNK_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB65F6B0)
#define LFAIOGHKNNK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB65EE50)
#define LFAIOGHKNNK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB65EAB0)

	class LFAIOGHKNNK : public ::System::Object
	{
	public:
		::RPG::Client::Prop::DuelChimeraProxy* HKJLKMCDMGB; // 0x10
		::RPG::Client::Prop::DuelChimeraProxy* IBLBKLNHKLL; // 0x18
		::UnityEngine::Quaternion NGIMALNHLNI; // 0x20
		::UnityEngine::Vector3 KGMNHAFNOHK; // 0x30
		::System::Single FOMCKBAHCFM; // 0x3C
		::UnityEngine::Quaternion OKBPGPNJMFL; // 0x40
		::System::Single MFLNKDOADDG; // 0x50
		::UnityEngine::Vector3 JNFHAIACECG; // 0x54
		::System::Void _ctor(::RPG::Client::Prop::DuelChimeraProxy* a1, ::RPG::Client::Prop::DuelChimeraProxy* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DuelChimeraProxy*, ::RPG::Client::Prop::DuelChimeraProxy*, ::System::Single))((::PBYTE)hIl2Cpp + LFAIOGHKNNK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAIOGHKNNK_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFAIOGHKNNK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAIOGHKNNK_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAIOGHKNNK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAIOGHKNNK_HCOFMFKFMDK_OFFSET))(this);
		}

	};
