#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HEAIEBHLCMJ;
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_CTOR_OFFSET UNITYSDK_OFFSET(0xDD8ADA0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_LINKHNIJANC_OFFSET UNITYSDK_OFFSET(0xDD8ABD0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD8ACD0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDD8AC80)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_SETNOUSDICEBRANCH_OFFSET UNITYSDK_OFFSET(0xDD8A7D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueCollectionNousDice_TypeDefinitionIndex = 78949;

	class RogueCollectionNousDice : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 BranchID; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::MeshRenderer* ONPKOFICEFJ; // 0x20
		::UnityEngine::MeshRenderer* HINADNBAMNL; // 0x28
		::HEAIEBHLCMJ* DLALHGJDNNO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_CTOR_OFFSET))(this);
		}

		::System::Void SetNousDiceBranch(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_SETNOUSDICEBRANCH_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* LINKHNIJANC(::System::String* a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_LINKHNIJANC_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_ONDESTROY_OFFSET))(this);
		}

	};
}
