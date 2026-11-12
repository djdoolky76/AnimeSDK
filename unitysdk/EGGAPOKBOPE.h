#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPlayerAnim.h"
#include "unitysdk/System/Object.h"
class ELKFMEKPEMA;

#define EGGAPOKBOPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC13BA0)

inline static constexpr unsigned int EGGAPOKBOPE_TypeDefinitionIndex = 43425;

	class EGGAPOKBOPE : public ::System::Object
	{
	public:
		::ELKFMEKPEMA* MAIJJNLJJNM; // 0x10
		::System::Boolean DMFIBBAJPJD; // 0x18
		::System::Boolean PEMJNCFJKNA; // 0x19
		::System::Boolean EGMELAHBFNE; // 0x1A
		::System::Boolean EKGDOELGLFK; // 0x1B
		::System::Single NGFAGMJHKJO; // 0x1C
		::System::Boolean PCCMHHFHKLB; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 PMMEOJLCPMD; // 0x24
		::RPG::Client::LittleGame::TRFPlayerAnim CNHAONDCHBI; // 0x28
		::System::UInt32 LGIPHLCNMMN; // 0x2C
		::RPG::Client::LittleGame::TRFMoveState MEPFOEEGBEA; // 0x30
		::RPG::Client::LittleGame::TRFPlayerAnim LICCNAHEIOF; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGAPOKBOPE_CTOR_OFFSET))(this);
		}

	};
