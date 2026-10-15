#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/PieceRemoveReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define OEGDLIILMNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95E350)

inline static constexpr unsigned int OEGDLIILMNE_TypeDefinitionIndex = 42259;

	class OEGDLIILMNE : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> IHLOJINLCHB; // 0x10
		::RPG::Client::LittleGame::Match3::PieceRemoveReason KDHPKOFLNFM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGDLIILMNE_CTOR_OFFSET))(this);
		}

	};
