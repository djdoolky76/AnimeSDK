#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDeviceID.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertKeymapNode.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define EKCCLPOBNLB_CTOR_OFFSET UNITYSDK_OFFSET(0x25080)

inline static constexpr unsigned int EKCCLPOBNLB_TypeDefinitionIndex = 79911;

	struct alignas(8) EKCCLPOBNLB
	{
		::RPG::Client::LittleGame::ComicDessert::ComicDessertKeymapNode DBIIPEEDBHI; // 0x10
		::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID MIOBMOCCOHF; // 0x14
		::System::Func_3<::LPHINGPIEAJ*, ::HLJNBBHKKMI*, ::System::Boolean>* JEKAGHAKLGG; // 0x18
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::ComicDessertKeymapNode a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID a2, ::System::Func_3<::LPHINGPIEAJ*, ::HLJNBBHKKMI*, ::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertKeymapNode, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID, ::System::Func_3<::LPHINGPIEAJ*, ::HLJNBBHKKMI*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + EKCCLPOBNLB_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
