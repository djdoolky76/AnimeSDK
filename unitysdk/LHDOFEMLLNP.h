#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ANNIAPOEFGG.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define LHDOFEMLLNP_AOFABAKKPJD_OFFSET UNITYSDK_OFFSET(0xB6AB450)
#define LHDOFEMLLNP_BAKIJBBMPDI_OFFSET UNITYSDK_OFFSET(0xB6AB140)
#define LHDOFEMLLNP_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0xB6AB0B0)
#define LHDOFEMLLNP_BKHIOCIFADE_OFFSET UNITYSDK_OFFSET(0xB6AB4F0)
#define LHDOFEMLLNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AAC70)
#define LHDOFEMLLNP_ENMMDFIMDIM_OFFSET UNITYSDK_OFFSET(0xB6AB590)
#define LHDOFEMLLNP_EOCIPOCBKHA_OFFSET UNITYSDK_OFFSET(0xB6AAD00)
#define LHDOFEMLLNP_FMNHPLJDEDK_OFFSET UNITYSDK_OFFSET(0xB6AB250)
#define LHDOFEMLLNP_GHIHPCJLMAB_OFFSET UNITYSDK_OFFSET(0xB6AAF30)
#define LHDOFEMLLNP_GLKIMKPMCCO_OFFSET UNITYSDK_OFFSET(0xB6AB1A0)
#define LHDOFEMLLNP_LCNMCJNEAGG_OFFSET UNITYSDK_OFFSET(0xB6AAEA0)
#define LHDOFEMLLNP_LIINPKFOMGP_OFFSET UNITYSDK_OFFSET(0xB6AB340)
#define LHDOFEMLLNP_NENGOPMIGMH_OFFSET UNITYSDK_OFFSET(0xB6AAFD0)

	class LHDOFEMLLNP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* IBOPFHFMCPL; // 0x10
		::Il2CppArray<::System::Object*>* HAJEMMLCNJC; // 0x18
		::Il2CppArray<::System::Boolean>* CPNBHHEJALH; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* CBELCGOPOOC; // 0x28
		::Il2CppArray<::System::Boolean>* JKFGHPCJKAE; // 0x30
		::Il2CppArray<::RPG::GameCore::GameEntity*>* JAPBDCBHCKN; // 0x38
		::System::Boolean NCHHJCODILP; // 0x40
		::System::Void _ctor(::Il2CppArray<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean EOCIPOCBKHA(::System::Object* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_EOCIPOCBKHA_OFFSET))(this, a1, a2);
		}

		::System::Boolean GHIHPCJLMAB(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_GHIHPCJLMAB_OFFSET))(this, a1);
		}

		::System::Boolean NENGOPMIGMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_NENGOPMIGMH_OFFSET))(this, a1);
		}

		::System::Void BJPFKNECHPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_BJPFKNECHPL_OFFSET))(this, a1);
		}

		::System::Void BAKIJBBMPDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_BAKIJBBMPDI_OFFSET))(this);
		}

		::System::Void GLKIMKPMCCO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_GLKIMKPMCCO_OFFSET))(this, a1);
		}

		::System::Boolean FMNHPLJDEDK(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_FMNHPLJDEDK_OFFSET))(this, a1, a2);
		}

		::System::Boolean LIINPKFOMGP(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_LIINPKFOMGP_OFFSET))(this, a1, a2);
		}

		::System::Void AOFABAKKPJD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_AOFABAKKPJD_OFFSET))(this, a1);
		}

		::System::Boolean BKHIOCIFADE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_BKHIOCIFADE_OFFSET))(this, a1);
		}

		::ANNIAPOEFGG ENMMDFIMDIM()
		{
			return ((::ANNIAPOEFGG(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_ENMMDFIMDIM_OFFSET))(this);
		}

		::System::Int32 LCNMCJNEAGG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHDOFEMLLNP_LCNMCJNEAGG_OFFSET))(this, a1);
		}

	};
