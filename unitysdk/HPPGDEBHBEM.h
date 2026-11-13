#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMKNLNNLNKE.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class JAODHHPIKGJ;

#define HPPGDEBHBEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF48DF0)
#define HPPGDEBHBEM_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x1AF48DE0)
#define HPPGDEBHBEM_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1AF48950)
#define HPPGDEBHBEM_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x1AF48B30)
#define HPPGDEBHBEM_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1AF48A10)
#define HPPGDEBHBEM_OIHADJDBPMH_OFFSET UNITYSDK_OFFSET(0x1AF48D80)

inline static constexpr unsigned int HPPGDEBHBEM_TypeDefinitionIndex = 79129;

	class HPPGDEBHBEM : public ::EMKNLNNLNKE
	{
	public:
		::RPG::Client::LittleGame::Move::MoveState ACHIDNBOBLA; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGDEBHBEM_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + HPPGDEBHBEM_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + HPPGDEBHBEM_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + HPPGDEBHBEM_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void OIHADJDBPMH(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + HPPGDEBHBEM_OIHADJDBPMH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGDEBHBEM_EPPAFNJFCMH_OFFSET))(this);
		}

	};
