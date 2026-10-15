#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIDAHJNMBKE.h"
#include "unitysdk/MHCOBFJNNJB.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3PVEGameResult.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MBNKFCKGFCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F6730)

inline static constexpr unsigned int MBNKFCKGFCN_TypeDefinitionIndex = 42253;

	class MBNKFCKGFCN : public ::System::Object
	{
	public:
		::GIDAHJNMBKE ODEPGMAFHKI; // 0x10
		::System::String* EJAGLEMAIKI; // 0x18
		::RPG::Client::LittleGame::Match3::Match3PVEGameResult JCHFCNFHCMM; // 0x20
		::MHCOBFJNNJB AFNFLDNKCNP; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKFCKGFCN_CTOR_OFFSET))(this);
		}

	};
