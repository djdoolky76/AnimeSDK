#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOGEMKKBMLP.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define CJDHLGJBEJH_BAEGMJPAAAM_OFFSET UNITYSDK_OFFSET(0xCF8DA80)
#define CJDHLGJBEJH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF8E020)
#define CJDHLGJBEJH_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xCF8E010)
#define CJDHLGJBEJH_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xCF8D670)
#define CJDHLGJBEJH_HFCEOPLGJGL_OFFSET UNITYSDK_OFFSET(0xCF8DFC0)
#define CJDHLGJBEJH_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xCF8D880)
#define CJDHLGJBEJH_OAKEPIABOJL_OFFSET UNITYSDK_OFFSET(0xCF8DF20)
#define CJDHLGJBEJH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xCF8D950)

inline static constexpr unsigned int CJDHLGJBEJH_TypeDefinitionIndex = 76980;

	class CJDHLGJBEJH : public ::EOGEMKKBMLP
	{
	public:
		::System::Boolean AOAHJECKOBP; // 0x120
		::System::Byte _padding0[0x3];
		::System::Single LNALDIDFDAC; // 0x124
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDHLGJBEJH_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CJDHLGJBEJH_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CJDHLGJBEJH_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CJDHLGJBEJH_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void BAEGMJPAAAM(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + CJDHLGJBEJH_BAEGMJPAAAM_OFFSET))(this, a1);
		}

		::System::Single HFCEOPLGJGL(::HGBCMFANCOE a1)
		{
			return ((::System::Single(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + CJDHLGJBEJH_HFCEOPLGJGL_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDHLGJBEJH_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Void OAKEPIABOJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDHLGJBEJH_OAKEPIABOJL_OFFSET))(this);
		}

	};
