#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }

#define KIDBDHHBHHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB415010)
#define KIDBDHHBHHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB414C60)
#define KIDBDHHBHHC_FEKHNFNGLNO_OFFSET UNITYSDK_OFFSET(0xB414ED0)
#define KIDBDHHBHHC_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB414DF0)
#define KIDBDHHBHHC_HIJBFOMCKMI_OFFSET UNITYSDK_OFFSET(0xB414F80)
#define KIDBDHHBHHC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB414D90)
#define KIDBDHHBHHC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB414B10)
#define KIDBDHHBHHC_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0xB414E50)
#define KIDBDHHBHHC_PNMONIDIDMP_OFFSET UNITYSDK_OFFSET(0xB414E90)

inline static constexpr unsigned int KIDBDHHBHHC_TypeDefinitionIndex = 57485;

	class KIDBDHHBHHC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* HLGBNINJPBG; // 0x10
		::RPG::GameCore::GameEntity* HMGKHLDFGCM; // 0x18
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
