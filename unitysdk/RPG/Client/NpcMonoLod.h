#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class DFHHDHNCGPF;
namespace RPG::GameCore { class EntityLodDetail; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NPCMONOLOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD95F90)
#define RPG_CLIENT_NPCMONOLOD_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1AD95F80)
#define RPG_CLIENT_NPCMONOLOD_MEJPCPBPMNM_OFFSET UNITYSDK_OFFSET(0x1AD95CF0)
#define RPG_CLIENT_NPCMONOLOD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AD95820)
#define RPG_CLIENT_NPCMONOLOD_REGISTERLODLISTENER_OFFSET UNITYSDK_OFFSET(0x1AD95D30)
#define RPG_CLIENT_NPCMONOLOD_UNREGISTERLODLISTENER_OFFSET UNITYSDK_OFFSET(0x1AD95F10)
#define RPG_CLIENT_NPCMONOLOD_UPDATELOD_OFFSET UNITYSDK_OFFSET(0x1AD95890)

namespace RPG::Client
{
	inline static constexpr unsigned int NpcMonoLod_TypeDefinitionIndex = 70581;

	class NpcMonoLod : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean CGDHNDBBDCH; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 PLOOECPBOEJ; // 0x1C
		::RPG::GameCore::EntityLodDetail* PAEMLLPLDPB; // 0x20
		::System::Collections::Generic::List_1<::DFHHDHNCGPF*>* PMBNNOOFAOM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateLod(::System::Int32 a1, ::RPG::GameCore::EntityLodDetail* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_UPDATELOD_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterLodListener(::DFHHDHNCGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFHHDHNCGPF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_REGISTERLODLISTENER_OFFSET))(this, a1);
		}

		::System::Void UnregisterLodListener(::DFHHDHNCGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFHHDHNCGPF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_UNREGISTERLODLISTENER_OFFSET))(this, a1);
		}

		::System::Void MEJPCPBPMNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_MEJPCPBPMNM_OFFSET))(this);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_GET_INITIALIZED_OFFSET))(this);
		}

	};
}
