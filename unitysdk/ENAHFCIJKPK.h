#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BDPDNAECJII;
class GEDEFLBBAOA;
class OKPGJGFMICC;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class TeamTowersPassiveSkillConfig; }
namespace RPG::GameCore { class TeamTowersSkillConfig; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENAHFCIJKPK_BBFNJHGAMPP_OFFSET UNITYSDK_OFFSET(0x1C6044B0)
#define ENAHFCIJKPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6051B0)
#define ENAHFCIJKPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C604110)
#define ENAHFCIJKPK_EDEFNHAIPJM_OFFSET UNITYSDK_OFFSET(0x1C604A30)
#define ENAHFCIJKPK_EGJIIGKCIJF_OFFSET UNITYSDK_OFFSET(0x1C604D20)
#define ENAHFCIJKPK_GAMGGCLMHFO_OFFSET UNITYSDK_OFFSET(0x1C605020)
#define ENAHFCIJKPK_GDLHBJKEEMG_OFFSET UNITYSDK_OFFSET(0x1C604920)
#define ENAHFCIJKPK_ILGHJNAILMK_OFFSET UNITYSDK_OFFSET(0x1C604270)
#define ENAHFCIJKPK_IMNJOEIFMBG_OFFSET UNITYSDK_OFFSET(0x1C604B60)
#define ENAHFCIJKPK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C603ED0)
#define ENAHFCIJKPK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C603E80)
#define ENAHFCIJKPK_MKCCCGJMCPL_OFFSET UNITYSDK_OFFSET(0x1C604EA0)
#define ENAHFCIJKPK_NPAPIJLMJHM_OFFSET UNITYSDK_OFFSET(0x1C6042F0)
#define ENAHFCIJKPK_OKALELLKIKC_OFFSET UNITYSDK_OFFSET(0x1C604E50)

inline static constexpr unsigned int ENAHFCIJKPK_TypeDefinitionIndex = 37122;

	class ENAHFCIJKPK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GEDEFLBBAOA*>* KEDLALCLDPJ; // 0x10
		::BDPDNAECJII* NMNILJHPGOK; // 0x18
		::System::Collections::Generic::List_1<::OKPGJGFMICC*>* PJDDEFEKBHO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BDPDNAECJII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDPDNAECJII*))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_DISPOSE_OFFSET))(this);
		}

		::System::Void ILGHJNAILMK(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::TeamTowersSkillConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_ILGHJNAILMK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BBFNJHGAMPP(::RPG::GameCore::TeamTowersSkillConfig* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamTowersSkillConfig*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_BBFNJHGAMPP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EDEFNHAIPJM(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::RPG::GameCore::TeamTowersSkillConfig* a3, ::System::Action_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::TeamTowersSkillConfig*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_EDEFNHAIPJM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EGJIIGKCIJF(::System::UInt32 a1, ::RPG::GameCore::TeamTowersPassiveSkillConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamTowersPassiveSkillConfig*))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_EGJIIGKCIJF_OFFSET))(this, a1, a2);
		}

		::System::Void OKALELLKIKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_OKALELLKIKC_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint GDLHBJKEEMG(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_GDLHBJKEEMG_OFFSET))(a1, a2);
		}

		::System::Void IMNJOEIFMBG(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::TeamTowersSkillConfig* a3, ::System::Action_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TeamTowersSkillConfig*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_IMNJOEIFMBG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAPIJLMJHM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::TeamTowersSkillConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_NPAPIJLMJHM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GAMGGCLMHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_GAMGGCLMHFO_OFFSET))(this, a1);
		}

		::System::Void MKCCCGJMCPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAHFCIJKPK_MKCCCGJMCPL_OFFSET))(this);
		}

	};
