#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCMGAIFFBPL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }

#define EBCEOIKNLOH_BKKIBLDGFBC_OFFSET UNITYSDK_OFFSET(0x12CE9600)
#define EBCEOIKNLOH_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x12CE9320)
#define EBCEOIKNLOH_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE9310)
#define EBCEOIKNLOH_DMNADNGINMK_OFFSET UNITYSDK_OFFSET(0x12CE9760)
#define EBCEOIKNLOH_FNKIKGABJCN_OFFSET UNITYSDK_OFFSET(0x12CE93E0)
#define EBCEOIKNLOH_HAFHEJANLCC_OFFSET UNITYSDK_OFFSET(0x12CE96A0)
#define EBCEOIKNLOH_NAOPJIDFCGG_OFFSET UNITYSDK_OFFSET(0x12CE96F0)
#define EBCEOIKNLOH_NEKMIOOKAHO_OFFSET UNITYSDK_OFFSET(0x12CE9370)

inline static constexpr unsigned int EBCEOIKNLOH_TypeDefinitionIndex = 71758;

	class EBCEOIKNLOH : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
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

		::System::UInt32 DMNADNGINMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEOIKNLOH_DMNADNGINMK_OFFSET))(this);
		}

	};
