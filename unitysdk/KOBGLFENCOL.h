#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOBGLFENCOL;
class PHKFMKDHNBO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }

#define KOBGLFENCOL_AEHBHIKBGPD_OFFSET UNITYSDK_OFFSET(0xB590440)
#define KOBGLFENCOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB58FCB0)
#define KOBGLFENCOL_CJDKOJGNIBH_OFFSET UNITYSDK_OFFSET(0xB58FE40)
#define KOBGLFENCOL_CJDPNNPAJNE_OFFSET UNITYSDK_OFFSET(0xB5901E0)
#define KOBGLFENCOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB58FD90)
#define KOBGLFENCOL_EAHACILJCNF_OFFSET UNITYSDK_OFFSET(0xB590170)
#define KOBGLFENCOL_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xB590400)
#define KOBGLFENCOL_GET_ELATIONSKILLDATA_OFFSET UNITYSDK_OFFSET(0xB590420)
#define KOBGLFENCOL_IPCLKNNNKKH_OFFSET UNITYSDK_OFFSET(0xB58FDA0)
#define KOBGLFENCOL_JGAGHIIFMBJ_OFFSET UNITYSDK_OFFSET(0xB58FEB0)
#define KOBGLFENCOL_LPIEENGGLJE_OFFSET UNITYSDK_OFFSET(0xB5904A0)
#define KOBGLFENCOL_PJAAPBDGKKE_OFFSET UNITYSDK_OFFSET(0xB5900D0)
#define KOBGLFENCOL_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xB590410)
#define KOBGLFENCOL_SET_ELATIONSKILLDATA_OFFSET UNITYSDK_OFFSET(0xB590430)

inline static constexpr unsigned int KOBGLFENCOL_TypeDefinitionIndex = 72154;

	class KOBGLFENCOL : public ::System::Object
	{
	public:
		::PHKFMKDHNBO* _ElationSkillData_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _Caster_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_CTOR_OFFSET))(this);
		}

		static ::KOBGLFENCOL* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1, ::PHKFMKDHNBO* a2)
		{
			return ((::KOBGLFENCOL*(*)(::RPG::GameCore::GameEntity*, ::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + KOBGLFENCOL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::String* IPCLKNNNKKH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_IPCLKNNNKKH_OFFSET))(this);
		}

		::System::String* PJAAPBDGKKE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_PJAAPBDGKKE_OFFSET))(this);
		}

		::System::String* CJDKOJGNIBH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_CJDKOJGNIBH_OFFSET))(this);
		}

		::System::String* JGAGHIIFMBJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_JGAGHIIFMBJ_OFFSET))(this);
		}

		::System::String* EAHACILJCNF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_EAHACILJCNF_OFFSET))(this);
		}

		::System::String* CJDPNNPAJNE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_CJDPNNPAJNE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Caster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_GET_CASTER_OFFSET))(this);
		}

		::System::Void set_Caster(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KOBGLFENCOL_SET_CASTER_OFFSET))(this, a1);
		}

		::PHKFMKDHNBO* get_ElationSkillData()
		{
			return ((::PHKFMKDHNBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_GET_ELATIONSKILLDATA_OFFSET))(this);
		}

		::System::Void set_ElationSkillData(::PHKFMKDHNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + KOBGLFENCOL_SET_ELATIONSKILLDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* AEHBHIKBGPD()
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_AEHBHIKBGPD_OFFSET))(this);
		}

		::System::Int32 LPIEENGGLJE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGLFENCOL_LPIEENGGLJE_OFFSET))(this);
		}

	};
