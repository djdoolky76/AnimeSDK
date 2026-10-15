#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvNpcPetSearch; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define KBPLABAKKCM_BBMBGFFBGJI_OFFSET UNITYSDK_OFFSET(0xB326F70)
#define KBPLABAKKCM_CDFMLFEJBIP_OFFSET UNITYSDK_OFFSET(0xB326500)
#define KBPLABAKKCM_CEDPGKHOIHN_OFFSET UNITYSDK_OFFSET(0xB326360)
#define KBPLABAKKCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB326010)
#define KBPLABAKKCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3266A0)
#define KBPLABAKKCM_EICILGAPFAL_OFFSET UNITYSDK_OFFSET(0xB326CD0)
#define KBPLABAKKCM_GGKCFCOIIAE_OFFSET UNITYSDK_OFFSET(0xB326C70)
#define KBPLABAKKCM_HDKJGIEDFID_OFFSET UNITYSDK_OFFSET(0xB327320)
#define KBPLABAKKCM_MAEMPJNJIKD_OFFSET UNITYSDK_OFFSET(0xB3274E0)
#define KBPLABAKKCM_OBJNPNCADJO_OFFSET UNITYSDK_OFFSET(0xB3268A0)
#define KBPLABAKKCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB327050)
#define KBPLABAKKCM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB327110)
#define KBPLABAKKCM_TICK_OFFSET UNITYSDK_OFFSET(0xB326940)

inline static constexpr unsigned int KBPLABAKKCM_TypeDefinitionIndex = 52435;

	class KBPLABAKKCM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvNpcPetSearch* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::NPCComponent* KDJMBIPEAFM; // 0x20
		::GELIALJDFBL* GLIPMLBINKB; // 0x28
		::RPG::GameCore::AdventureCharacterController* ICKHCACDNCA; // 0x30
		::GELIALJDFBL* BPLPPDMFINN; // 0x38
		::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x40
		::GELIALJDFBL* DCAILDKEANF; // 0x48
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x50
		::System::Boolean BJIMNGNKDGD; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcPetSearch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcPetSearch*))((::PBYTE)hIl2Cpp + KBPLABAKKCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CEDPGKHOIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPLABAKKCM_CEDPGKHOIHN_OFFSET))(this);
		}

		::System::Void CDFMLFEJBIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPLABAKKCM_CDFMLFEJBIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPLABAKKCM_DISPOSE_OFFSET))(this);
		}

		::System::Boolean OBJNPNCADJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPLABAKKCM_OBJNPNCADJO_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBPLABAKKCM_TICK_OFFSET))(this, a1);
		}

		::System::Boolean GGKCFCOIIAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPLABAKKCM_GGKCFCOIIAE_OFFSET))(this);
		}

		::System::Void EICILGAPFAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPLABAKKCM_EICILGAPFAL_OFFSET))(this);
		}

		::System::Void BBMBGFFBGJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPLABAKKCM_BBMBGFFBGJI_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPLABAKKCM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPLABAKKCM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void HDKJGIEDFID(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KBPLABAKKCM_HDKJGIEDFID_OFFSET))(this, a1);
		}

		::System::Void MAEMPJNJIKD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KBPLABAKKCM_MAEMPJNJIKD_OFFSET))(this, a1);
		}

	};
