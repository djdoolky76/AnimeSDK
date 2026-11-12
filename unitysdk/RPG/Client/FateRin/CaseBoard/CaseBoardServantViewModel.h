#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardAvatarTextMode.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardAvatarViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
class LJMKNOKMPKC;
class PMHEBAFMEEG;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD91A1B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_AGILITYLEVEL_OFFSET UNITYSDK_OFFSET(0xD919F90)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_ENDURANCELEVEL_OFFSET UNITYSDK_OFFSET(0xD919F20)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_HOUGULEVEL_OFFSET UNITYSDK_OFFSET(0xD91A0E0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_LUCKLEVEL_OFFSET UNITYSDK_OFFSET(0xD91A070)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_MANALEVEL_OFFSET UNITYSDK_OFFSET(0xD91A000)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_STRENGTHLEVEL_OFFSET UNITYSDK_OFFSET(0xD919EB0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD91A260)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardServantViewModel_TypeDefinitionIndex = 83567;

	class CaseBoardServantViewModel : public ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel
	{
	public:
		::PMHEBAFMEEG* _Servant; // 0x28
		::System::Void _ctor(::RPG::GameCore::FateRinCaseBoardAvatarType a1, ::LJMKNOKMPKC* a2, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType, ::LJMKNOKMPKC*, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_StrengthLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_STRENGTHLEVEL_OFFSET))(this);
		}

		::System::String* get_EnduranceLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_ENDURANCELEVEL_OFFSET))(this);
		}

		::System::String* get_AgilityLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_AGILITYLEVEL_OFFSET))(this);
		}

		::System::String* get_ManaLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_MANALEVEL_OFFSET))(this);
		}

		::System::String* get_LuckLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_LUCKLEVEL_OFFSET))(this);
		}

		::System::String* get_HouguLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_GET_HOUGULEVEL_OFFSET))(this);
		}

		::System::Void Update(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSERVANTVIEWMODEL_UPDATE_OFFSET))(this, a1);
		}

	};
}
