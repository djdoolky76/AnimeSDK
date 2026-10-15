#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }

#define KIDBDHHBHHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB41BAE0)
#define KIDBDHHBHHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB41B730)
#define KIDBDHHBHHC_FEKHNFNGLNO_OFFSET UNITYSDK_OFFSET(0xB41B9A0)
#define KIDBDHHBHHC_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB41B8C0)
#define KIDBDHHBHHC_HIJBFOMCKMI_OFFSET UNITYSDK_OFFSET(0xB41BA50)
#define KIDBDHHBHHC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB41B860)
#define KIDBDHHBHHC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB41B5D0)
#define KIDBDHHBHHC_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0xB41B920)
#define KIDBDHHBHHC_PNMONIDIDMP_OFFSET UNITYSDK_OFFSET(0xB41B960)

	class KIDBDHHBHHC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* HMGKHLDFGCM; // 0x10
		::RPG::GameCore::GameEntity* HLGBNINJPBG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDBDHHBHHC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KIDBDHHBHHC_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDBDHHBHHC_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDBDHHBHHC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDBDHHBHHC_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void PLNCKDADELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDBDHHBHHC_PLNCKDADELF_OFFSET))(this);
		}

		::System::Void PNMONIDIDMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDBDHHBHHC_PNMONIDIDMP_OFFSET))(this);
		}

		::System::Void FEKHNFNGLNO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KIDBDHHBHHC_FEKHNFNGLNO_OFFSET))(this, a1);
		}

		::System::Void HIJBFOMCKMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDBDHHBHHC_HIJBFOMCKMI_OFFSET))(this);
		}

	};
