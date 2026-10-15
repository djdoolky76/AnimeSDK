#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/PieceRemoveReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define OEGDLIILMNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98C620)

	class OEGDLIILMNE : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::Match3::PieceRemoveReason KDHPKOFLNFM; // 0x10
		::System::ValueTuple IHLOJINLCHB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGDLIILMNE_CTOR_OFFSET))(this);
		}

	};
