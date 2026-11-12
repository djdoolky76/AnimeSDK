#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class COKICPIHPAC;

#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE2A77D0)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0xE2A8400)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A8B20)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_DHILKAEINEC_OFFSET UNITYSDK_OFFSET(0xE2A7950)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_ENBEPCIGLHN_OFFSET UNITYSDK_OFFSET(0xE2A8990)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE2A83F0)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_GIPLJDHBHDM_OFFSET UNITYSDK_OFFSET(0xE2A8650)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_JCIKJANEFDB_OFFSET UNITYSDK_OFFSET(0xE2A7A30)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_PROCESS_OFFSET UNITYSDK_OFFSET(0xE2A7810)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE2A8570)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE2A8530)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_SETENABLE_OFFSET UNITYSDK_OFFSET(0xE2A85C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoParentTransformDecouple_TypeDefinitionIndex = 70561;

	class MonoParentTransformDecouple : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean DecouplePositionX; // 0x18
		::System::Boolean DecouplePositionY; // 0x19
		::System::Boolean DecouplePositionZ; // 0x1A
		::System::Boolean DecoupleRoationX; // 0x1B
		::System::Boolean DecoupleRoationY; // 0x1C
		::System::Boolean DecoupleRoationZ; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single JOGJOKJICKP; // 0x20
		::System::Boolean MHEAIOMEGCA; // 0x24
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 FMEFHCHJOLP; // 0x28
		::UnityEngine::Quaternion GECCGPMGGHJ; // 0x34
		::System::Single KCLBCNGCLHJ; // 0x44
		::System::Single HJKJOLPBAOO; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_CLEAR_OFFSET))(this);
		}

		::System::Void Process(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_PROCESS_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Int32 CompareTo(::COKICPIHPAC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::COKICPIHPAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_IPoolableComponent_Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET))(this);
		}

		::System::Void RPG_Client_IPoolableComponent_Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_SETENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void DHILKAEINEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_DHILKAEINEC_OFFSET))(this, a1);
		}

		::System::Void JCIKJANEFDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_JCIKJANEFDB_OFFSET))(this);
		}

		::System::Void GIPLJDHBHDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_GIPLJDHBHDM_OFFSET))(this);
		}

		::System::Void ENBEPCIGLHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_ENBEPCIGLHN_OFFSET))(this);
		}

	};
}
