#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJMKNOKMPKC;
class LMKIOMMDEJI;
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }

#define PCCJNGOCLKD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFFE060)
#define PCCJNGOCLKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFDFB0)

	class PCCJNGOCLKD : public ::System::Object
	{
	public:
		::LJMKNOKMPKC* HEJEGOGBFMP; // 0x10
		::LMKIOMMDEJI* JOMBMDBLMDI; // 0x18
		::System::Void _ctor(::LMKIOMMDEJI* a1, ::LJMKNOKMPKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMKIOMMDEJI*, ::LJMKNOKMPKC*))((::PBYTE)hIl2Cpp + PCCJNGOCLKD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::CaseBoard::TeamViewModel* BPLPBPMEODA(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + PCCJNGOCLKD_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
