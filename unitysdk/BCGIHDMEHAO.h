#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class BEIJCJFHANG;
class CMNOPNKOJPP;
class FEIPLKMMIOI;
namespace RPG::Client::FateRin::Card { class IFateRinCardOwnerViewModel; }

#define BCGIHDMEHAO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E9A0A0)
#define BCGIHDMEHAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E9A090)

inline static constexpr unsigned int BCGIHDMEHAO_TypeDefinitionIndex = 81150;

	class BCGIHDMEHAO : public ::System::Object
	{
	public:
		::CMNOPNKOJPP* LHKLOJLCCGO; // 0x10
		::FEIPLKMMIOI* DEEMJACOGII; // 0x18
		::BEIJCJFHANG* LBNAGLIGKIO; // 0x20
		::System::Void _ctor(::BEIJCJFHANG* a1, ::FEIPLKMMIOI* a2, ::CMNOPNKOJPP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BEIJCJFHANG*, ::FEIPLKMMIOI*, ::CMNOPNKOJPP*))((::PBYTE)hIl2Cpp + BCGIHDMEHAO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel* BPLPBPMEODA(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + BCGIHDMEHAO_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
