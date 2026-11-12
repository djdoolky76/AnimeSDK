#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class KCMGAIFFBPL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }

#define EBCEOIKNLOH_BKKIBLDGFBC_OFFSET UNITYSDK_OFFSET(0x13A9A350)
#define EBCEOIKNLOH_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x13A9A070)
#define EBCEOIKNLOH_CTOR_OFFSET UNITYSDK_OFFSET(0x13A9A060)
#define EBCEOIKNLOH_DMNADNGINMK_OFFSET UNITYSDK_OFFSET(0x13A9A590)
#define EBCEOIKNLOH_FNKIKGABJCN_OFFSET UNITYSDK_OFFSET(0x13A9A130)
#define EBCEOIKNLOH_HAFHEJANLCC_OFFSET UNITYSDK_OFFSET(0x13A9A3F0)
#define EBCEOIKNLOH_IBIDEIENCMO_OFFSET UNITYSDK_OFFSET(0x13A9A4B0)
#define EBCEOIKNLOH_NAOPJIDFCGG_OFFSET UNITYSDK_OFFSET(0x13A9A440)
#define EBCEOIKNLOH_NEKMIOOKAHO_OFFSET UNITYSDK_OFFSET(0x13A9A0C0)

inline static constexpr unsigned int EBCEOIKNLOH_TypeDefinitionIndex = 73761;

	class EBCEOIKNLOH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_CTOR_OFFSET))(this, a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::KCMGAIFFBPL* NEKMIOOKAHO()
		{
			return ((::KCMGAIFFBPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_NEKMIOOKAHO_OFFSET))(this);
		}

		::System::Boolean FNKIKGABJCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_FNKIKGABJCN_OFFSET))(this);
		}

		::System::Boolean BKKIBLDGFBC(::System::Object* a1, ::KCMGAIFFBPL* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_BKKIBLDGFBC_OFFSET))(this, a1, a2);
		}

		::System::Boolean HAFHEJANLCC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_HAFHEJANLCC_OFFSET))(this, a1);
		}

		::System::Boolean NAOPJIDFCGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_NAOPJIDFCGG_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType IBIDEIENCMO()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_IBIDEIENCMO_OFFSET))(this);
		}

		::System::UInt32 DMNADNGINMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_DMNADNGINMK_OFFSET))(this);
		}

	};
