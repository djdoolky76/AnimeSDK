#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define JBHKLJJABCH_CTOR_OFFSET UNITYSDK_OFFSET(0x16570880)
#define JBHKLJJABCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16570490)
#define JBHKLJJABCH_FEKHNFNGLNO_OFFSET UNITYSDK_OFFSET(0x16570700)
#define JBHKLJJABCH_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x16570620)
#define JBHKLJJABCH_HIJBFOMCKMI_OFFSET UNITYSDK_OFFSET(0x165707B0)
#define JBHKLJJABCH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x165705C0)
#define JBHKLJJABCH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1656FD60)
#define JBHKLJJABCH_PAPEHGCDOHP_OFFSET UNITYSDK_OFFSET(0x16570060)
#define JBHKLJJABCH_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0x16570680)
#define JBHKLJJABCH_PNMONIDIDMP_OFFSET UNITYSDK_OFFSET(0x165706C0)

	class JBHKLJJABCH : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameEntity*>* GFFAGJOELCH; // 0x10
		::RPG::GameCore::GameEntity* LPMJGJJMONO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHKLJJABCH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JBHKLJJABCH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHKLJJABCH_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBHKLJJABCH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBHKLJJABCH_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void PLNCKDADELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHKLJJABCH_PLNCKDADELF_OFFSET))(this);
		}

		::System::Void PNMONIDIDMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHKLJJABCH_PNMONIDIDMP_OFFSET))(this);
		}

		::System::Void PAPEHGCDOHP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Transform* a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JBHKLJJABCH_PAPEHGCDOHP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FEKHNFNGLNO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JBHKLJJABCH_FEKHNFNGLNO_OFFSET))(this, a1);
		}

		::System::Void HIJBFOMCKMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHKLJJABCH_HIJBFOMCKMI_OFFSET))(this);
		}

	};
