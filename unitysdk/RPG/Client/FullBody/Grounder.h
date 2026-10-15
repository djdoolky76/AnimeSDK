#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class Grounder_BMHKLIIPPHF; }
namespace RPG::Client::FullBody { class Grounding; }
namespace RPG::Client::FullBody { class Grounding_ODHIKODJAHF; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_FULLBODY_GROUNDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD067A60)
#define RPG_CLIENT_FULLBODY_GROUNDER_DAGDAPHEAOO_OFFSET UNITYSDK_OFFSET(0xD066E40)
#define RPG_CLIENT_FULLBODY_GROUNDER_FLEHENHLIPE_OFFSET UNITYSDK_OFFSET(0xD0672A0)
#define RPG_CLIENT_FULLBODY_GROUNDER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD066D00)
#define RPG_CLIENT_FULLBODY_GROUNDER_GET_ISIKENABLED_OFFSET UNITYSDK_OFFSET(0xD066C00)
#define RPG_CLIENT_FULLBODY_GROUNDER_GET_ISIKUPDATEENABLED_OFFSET UNITYSDK_OFFSET(0xD066CF0)
#define RPG_CLIENT_FULLBODY_GROUNDER_GPFKLFIHMHG_OFFSET UNITYSDK_OFFSET(0xD067780)
#define RPG_CLIENT_FULLBODY_GROUNDER_KJPHNMOOCNJ_OFFSET UNITYSDK_OFFSET(0xD067810)
#define RPG_CLIENT_FULLBODY_GROUNDER_LFKJJELMNPK_OFFSET UNITYSDK_OFFSET(0xD067250)
#define RPG_CLIENT_FULLBODY_GROUNDER_MGPIGFDKAFB_OFFSET UNITYSDK_OFFSET(0xD0678A0)
#define RPG_CLIENT_FULLBODY_GROUNDER_OBAIBEFEFPJ_OFFSET UNITYSDK_OFFSET(0xD066D20)
#define RPG_CLIENT_FULLBODY_GROUNDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD067730)
#define RPG_CLIENT_FULLBODY_GROUNDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0676E0)
#define RPG_CLIENT_FULLBODY_GROUNDER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD066D10)
#define RPG_CLIENT_FULLBODY_GROUNDER_SET_ISIKENABLED_OFFSET UNITYSDK_OFFSET(0xD066C10)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounder_TypeDefinitionIndex = 74230;

	class Grounder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single weight; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::FullBody::Grounding* solver; // 0x20
		::RPG::Client::FullBody::Grounder_BMHKLIIPPHF* OnPreGrounder; // 0x28
		::RPG::Client::FullBody::Grounder_BMHKLIIPPHF* OnPostGrounder; // 0x30
		::RPG::Client::FullBody::Grounder_BMHKLIIPPHF* OnPostIK; // 0x38
		::System::Boolean isManualUpdate; // 0x40
		::System::Boolean PODNJCFAFFP; // 0x41
		::System::Boolean _initiated_k__BackingField; // 0x42
		::System::Byte _padding1[0x5];
		::UnityEngine::Coroutine* EDHOBAHFIKA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsIKEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_GET_ISIKENABLED_OFFSET))(this);
		}

		::System::Void set_IsIKEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_SET_ISIKENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsIKUpdateEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_GET_ISIKUPDATEENABLED_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_SET_INITIATED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OBAIBEFEFPJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_OBAIBEFEFPJ_OFFSET))(this);
		}

		::System::Void LFKJJELMNPK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_LFKJJELMNPK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DAGDAPHEAOO(::RPG::Client::FullBody::Grounding_ODHIKODJAHF* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::Grounding_ODHIKODJAHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_DAGDAPHEAOO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FLEHENHLIPE(::RPG::Client::FullBody::Grounding_ODHIKODJAHF* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::Grounding_ODHIKODJAHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_FLEHENHLIPE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_ONDISABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GPFKLFIHMHG()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_GPFKLFIHMHG_OFFSET))(this);
		}

		::System::Collections::IEnumerator* KJPHNMOOCNJ()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_KJPHNMOOCNJ_OFFSET))(this);
		}

		::System::Void MGPIGFDKAFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_MGPIGFDKAFB_OFFSET))(this);
		}

	};
}
