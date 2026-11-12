#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/HoverKind.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;

#define GEEIJFMMEOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4CDE0)

inline static constexpr unsigned int GEEIJFMMEOD_TypeDefinitionIndex = 44739;

	class GEEIJFMMEOD : public ::System::Object
	{
	public:
		::LPHINGPIEAJ* MCLLALGABAB; // 0x10
		::System::UInt32 KHNINHBIKLE; // 0x18
		::RPG::Client::LittleGame::ComicDessert::HoverKind KAPIKEEGEPA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEIJFMMEOD_CTOR_OFFSET))(this);
		}

	};
