#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define LFAIOGHKNNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF3EF0)
#define LFAIOGHKNNK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBEF4D40)
#define LFAIOGHKNNK_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xBEF4D90)
#define LFAIOGHKNNK_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xBEF4B00)
#define LFAIOGHKNNK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBEF42A0)
#define LFAIOGHKNNK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBEF3F00)

inline static constexpr unsigned int LFAIOGHKNNK_TypeDefinitionIndex = 80971;

	class LFAIOGHKNNK : public ::System::Object
	{
	public:
		::RPG::Client::Prop::DuelChimeraProxy* HKJLKMCDMGB; // 0x10
		::RPG::Client::Prop::DuelChimeraProxy* IBLBKLNHKLL; // 0x18
		::UnityEngine::Vector3 KGMNHAFNOHK; // 0x20
		::System::Single FOMCKBAHCFM; // 0x2C
		::UnityEngine::Quaternion OKBPGPNJMFL; // 0x30
		::System::Single MFLNKDOADDG; // 0x40
		::UnityEngine::Quaternion NGIMALNHLNI; // 0x44
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
