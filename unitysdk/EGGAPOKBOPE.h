#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPlayerAnim.h"
#include "unitysdk/System/Object.h"
class ELKFMEKPEMA;

#define EGGAPOKBOPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50340)

	class EGGAPOKBOPE : public ::System::Object
	{
	public:
		::ELKFMEKPEMA* MAIJJNLJJNM; // 0x10
		::RPG::Client::LittleGame::TRFMoveState MEPFOEEGBEA; // 0x18
		::System::Boolean DMFIBBAJPJD; // 0x1C
		::System::Boolean EKGDOELGLFK; // 0x1D
		::System::Boolean EGMELAHBFNE; // 0x1E
		::System::Boolean PCCMHHFHKLB; // 0x1F
		::System::UInt32 PMMEOJLCPMD; // 0x20
		::RPG::Client::LittleGame::TRFPlayerAnim CNHAONDCHBI; // 0x24
		::System::UInt32 LGIPHLCNMMN; // 0x28
		::System::Boolean PEMJNCFJKNA; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::TRFPlayerAnim LICCNAHEIOF; // 0x30
		::System::Single NGFAGMJHKJO; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGAPOKBOPE_CTOR_OFFSET))(this);
		}

	};
