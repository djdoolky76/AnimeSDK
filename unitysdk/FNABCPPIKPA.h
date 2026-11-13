#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDropZoneKind.h"
#include "unitysdk/System/Object.h"

#define FNABCPPIKPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C20D7E0)

inline static constexpr unsigned int FNABCPPIKPA_TypeDefinitionIndex = 44727;

	class FNABCPPIKPA : public ::System::Object
	{
	public:
		::System::Boolean FKMIHGNFIPH; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind PAHMKAEHDBN; // 0x14
		::System::Int32 KJNNGFJJOEN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNABCPPIKPA_CTOR_OFFSET))(this);
		}

	};
