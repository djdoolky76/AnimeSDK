#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingDIYNumButtonType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define EPLKHKBBIDK_CTOR_OFFSET UNITYSDK_OFFSET(0x155CBCA0)

inline static constexpr unsigned int EPLKHKBBIDK_TypeDefinitionIndex = 81994;

	class EPLKHKBBIDK : public ::System::Object
	{
	public:
		::System::Action* ONPCPLEECCG; // 0x10
		::RPG::Client::B51Racing::B51RacingDIYNumButtonType PGOHOFMMIAJ; // 0x18
		::System::Int32 HOBEHPAKFHM; // 0x1C
		::System::Int32 JOGMEBDMGNG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLKHKBBIDK_CTOR_OFFSET))(this);
		}

	};
