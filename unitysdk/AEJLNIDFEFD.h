#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class KCMGAIFFBPL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define AEJLNIDFEFD_BKKIBLDGFBC_OFFSET UNITYSDK_OFFSET(0xD5B1270)
#define AEJLNIDFEFD_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xD5B1140)
#define AEJLNIDFEFD_CTOR_OFFSET UNITYSDK_OFFSET(0xD5B1130)
#define AEJLNIDFEFD_DMNADNGINMK_OFFSET UNITYSDK_OFFSET(0xD5B14B0)
#define AEJLNIDFEFD_FNKIKGABJCN_OFFSET UNITYSDK_OFFSET(0xD5B1230)
#define AEJLNIDFEFD_HAFHEJANLCC_OFFSET UNITYSDK_OFFSET(0xD5B1310)
#define AEJLNIDFEFD_IBIDEIENCMO_OFFSET UNITYSDK_OFFSET(0xD5B13D0)
#define AEJLNIDFEFD_NAOPJIDFCGG_OFFSET UNITYSDK_OFFSET(0xD5B1360)
#define AEJLNIDFEFD_NEKMIOOKAHO_OFFSET UNITYSDK_OFFSET(0xD5B1190)

inline static constexpr unsigned int AEJLNIDFEFD_TypeDefinitionIndex = 73760;

	class AEJLNIDFEFD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_CTOR_OFFSET))(this, a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::KCMGAIFFBPL* NEKMIOOKAHO()
		{
			return ((::KCMGAIFFBPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_NEKMIOOKAHO_OFFSET))(this);
		}

		::System::Boolean FNKIKGABJCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_FNKIKGABJCN_OFFSET))(this);
		}

		::System::Boolean BKKIBLDGFBC(::System::Object* a1, ::KCMGAIFFBPL* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_BKKIBLDGFBC_OFFSET))(this, a1, a2);
		}

		::System::Boolean HAFHEJANLCC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_HAFHEJANLCC_OFFSET))(this, a1);
		}

		::System::Boolean NAOPJIDFCGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_NAOPJIDFCGG_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType IBIDEIENCMO()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_IBIDEIENCMO_OFFSET))(this);
		}

		::System::UInt32 DMNADNGINMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_DMNADNGINMK_OFFSET))(this);
		}

	};
