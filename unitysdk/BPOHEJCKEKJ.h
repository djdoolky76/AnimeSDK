#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJOMBDMGKGB.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;

#define BPOHEJCKEKJ_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0xCB4EC70)
#define BPOHEJCKEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCB4ECE0)
#define BPOHEJCKEKJ_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xCB4EC60)
#define BPOHEJCKEKJ_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xCB4E8C0)
#define BPOHEJCKEKJ_GOCMBBKBIBH_OFFSET UNITYSDK_OFFSET(0xCB4EAA0)
#define BPOHEJCKEKJ_JCDFALFLNJL_OFFSET UNITYSDK_OFFSET(0xCB4EB70)
#define BPOHEJCKEKJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCB4E860)

inline static constexpr unsigned int BPOHEJCKEKJ_TypeDefinitionIndex = 79120;

	class BPOHEJCKEKJ : public ::NJOMBDMGKGB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOHEJCKEKJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + BPOHEJCKEKJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + BPOHEJCKEKJ_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void GOCMBBKBIBH(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + BPOHEJCKEKJ_GOCMBBKBIBH_OFFSET))(this, a1);
		}

		::System::Void JCDFALFLNJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOHEJCKEKJ_JCDFALFLNJL_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOHEJCKEKJ_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOHEJCKEKJ_ANMDLJPJEHA_OFFSET))(this);
		}

	};
