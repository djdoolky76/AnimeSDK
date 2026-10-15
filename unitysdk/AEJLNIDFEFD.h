#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCMGAIFFBPL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define AEJLNIDFEFD_BKKIBLDGFBC_OFFSET UNITYSDK_OFFSET(0xCEF8770)
#define AEJLNIDFEFD_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xCEF8640)
#define AEJLNIDFEFD_CTOR_OFFSET UNITYSDK_OFFSET(0xCEF8630)
#define AEJLNIDFEFD_DMNADNGINMK_OFFSET UNITYSDK_OFFSET(0xCEF88D0)
#define AEJLNIDFEFD_FNKIKGABJCN_OFFSET UNITYSDK_OFFSET(0xCEF8730)
#define AEJLNIDFEFD_HAFHEJANLCC_OFFSET UNITYSDK_OFFSET(0xCEF8810)
#define AEJLNIDFEFD_NAOPJIDFCGG_OFFSET UNITYSDK_OFFSET(0xCEF8860)
#define AEJLNIDFEFD_NEKMIOOKAHO_OFFSET UNITYSDK_OFFSET(0xCEF8690)

inline static constexpr unsigned int AEJLNIDFEFD_TypeDefinitionIndex = 71756;

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

		::System::UInt32 DMNADNGINMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLNIDFEFD_DMNADNGINMK_OFFSET))(this);
		}

	};
