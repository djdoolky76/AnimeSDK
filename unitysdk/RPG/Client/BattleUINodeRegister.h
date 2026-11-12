#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class NBKFFFNJAJH;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEUINODEREGISTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD1C99C0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_COKMMMGCKKE_OFFSET UNITYSDK_OFFSET(0xD1C9EF0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_CTOR_OFFSET UNITYSDK_OFFSET(0xD1CA0D0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD1C9E00)
#define RPG_CLIENT_BATTLEUINODEREGISTER_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xD1CA080)
#define RPG_CLIENT_BATTLEUINODEREGISTER_JHCJALEIOLF_OFFSET UNITYSDK_OFFSET(0xD1C9AA0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xD1C9CE0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD1C9B50)
#define RPG_CLIENT_BATTLEUINODEREGISTER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD1C9DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUINodeRegister_TypeDefinitionIndex = 74381;

	class BattleUINodeRegister : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* UniqueName; // 0x18
		::NBKFFFNJAJH* ABCHNPDDFID; // 0x20
		::System::Boolean KLGNFCMLLMO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_DESPAWNED_OFFSET))(this);
		}

		::System::Void JHCJALEIOLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_JHCJALEIOLF_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::NBKFFFNJAJH* COKMMMGCKKE()
		{
			return ((::NBKFFFNJAJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_COKMMMGCKKE_OFFSET))(this);
		}

	};
}
