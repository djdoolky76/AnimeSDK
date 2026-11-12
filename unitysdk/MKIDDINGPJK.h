#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/CustomerState.h"
#include "unitysdk/System/Object.h"

#define MKIDDINGPJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEDE60)

inline static constexpr unsigned int MKIDDINGPJK_TypeDefinitionIndex = 44715;

	class MKIDDINGPJK : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::CustomerState MEPFOEEGBEA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIDDINGPJK_CTOR_OFFSET))(this);
		}

	};
