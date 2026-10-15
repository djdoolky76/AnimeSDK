#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardAvatarTextMode.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"
class AHOICEPPKEM;
class HFBADOAGDHH;
class PMHEBAFMEEG;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define LJMKNOKMPKC_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xB71B5B0)
#define LJMKNOKMPKC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB71B3C0)
#define LJMKNOKMPKC_CLDLDFLOOEH_OFFSET UNITYSDK_OFFSET(0xB71B8F0)
#define LJMKNOKMPKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB71B300)
#define LJMKNOKMPKC_MCHNGFNHKHE_1_OFFSET UNITYSDK_OFFSET(0xB71B880)
#define LJMKNOKMPKC_MCHNGFNHKHE_OFFSET UNITYSDK_OFFSET(0xB71B690)
#define LJMKNOKMPKC_OKEGJOFJEHL_OFFSET UNITYSDK_OFFSET(0xB71BA70)

inline static constexpr unsigned int LJMKNOKMPKC_TypeDefinitionIndex = 80773;

	class LJMKNOKMPKC : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
		::AHOICEPPKEM* KANLOKJNAEB; // 0x18
		::System::Void _ctor(::AHOICEPPKEM* a1, ::RPG::Client::FateRin::Logging::ILoggerFactory* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AHOICEPPKEM*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + LJMKNOKMPKC_CTOR_OFFSET))(this, a1, a2);
		}

		::HFBADOAGDHH* BPLPBPMEODA(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::HFBADOAGDHH*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + LJMKNOKMPKC_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::HFBADOAGDHH* BPLPBPMEODA_1(::RPG::GameCore::FateRinCaseBoardAvatarType a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a2)
		{
			return ((::HFBADOAGDHH*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + LJMKNOKMPKC_BPLPBPMEODA_1_OFFSET))(this, a1, a2);
		}

		::PMHEBAFMEEG* MCHNGFNHKHE(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::PMHEBAFMEEG*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + LJMKNOKMPKC_MCHNGFNHKHE_OFFSET))(this, a1);
		}

		::PMHEBAFMEEG* MCHNGFNHKHE_1(::RPG::GameCore::FateRinCaseBoardAvatarType a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a2)
		{
			return ((::PMHEBAFMEEG*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + LJMKNOKMPKC_MCHNGFNHKHE_1_OFFSET))(this, a1, a2);
		}

		::HFBADOAGDHH* CLDLDFLOOEH(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::HFBADOAGDHH*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + LJMKNOKMPKC_CLDLDFLOOEH_OFFSET))(this, a1);
		}

		::PMHEBAFMEEG* OKEGJOFJEHL(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::PMHEBAFMEEG*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + LJMKNOKMPKC_OKEGJOFJEHL_OFFSET))(this, a1);
		}

	};
