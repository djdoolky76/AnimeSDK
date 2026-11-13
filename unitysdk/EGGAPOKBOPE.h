#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPlayerAnim.h"
#include "unitysdk/System/Object.h"
class ELKFMEKPEMA;

#define EGGAPOKBOPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E5A60)

inline static constexpr unsigned int EGGAPOKBOPE_TypeDefinitionIndex = 43425;

	class EGGAPOKBOPE : public ::System::Object
	{
	public:
		::ELKFMEKPEMA* MAIJJNLJJNM; // 0x10
		::RPG::Client::LittleGame::TRFPlayerAnim CNHAONDCHBI; // 0x18
		::System::UInt32 PMMEOJLCPMD; // 0x1C
		::System::Boolean EKGDOELGLFK; // 0x20
		::System::Boolean PEMJNCFJKNA; // 0x21
		::System::Boolean PCCMHHFHKLB; // 0x22
		::System::Boolean EGMELAHBFNE; // 0x23
		::System::Boolean DMFIBBAJPJD; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::TRFMoveState MEPFOEEGBEA; // 0x28
		::System::Single NGFAGMJHKJO; // 0x2C
		::RPG::Client::LittleGame::TRFPlayerAnim LICCNAHEIOF; // 0x30
		::System::UInt32 LGIPHLCNMMN; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGAPOKBOPE_CTOR_OFFSET))(this);
		}

	};
