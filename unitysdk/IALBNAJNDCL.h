#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHBMEBLFBCB.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;

#define IALBNAJNDCL_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0C970)
#define IALBNAJNDCL_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15E0C960)
#define IALBNAJNDCL_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15E0C680)
#define IALBNAJNDCL_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0x15E0C880)
#define IALBNAJNDCL_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x15E0C800)
#define IALBNAJNDCL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15E0C5F0)
#define IALBNAJNDCL_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15E0C780)

inline static constexpr unsigned int IALBNAJNDCL_TypeDefinitionIndex = 76794;

	class IALBNAJNDCL : public ::KHBMEBLFBCB
	{
	public:
		::System::Single KFOPFPEDDEF; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBNAJNDCL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + IALBNAJNDCL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + IALBNAJNDCL_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + IALBNAJNDCL_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + IALBNAJNDCL_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void GGCCNDAIMDF(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + IALBNAJNDCL_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBNAJNDCL_EPPAFNJFCMH_OFFSET))(this);
		}

	};
