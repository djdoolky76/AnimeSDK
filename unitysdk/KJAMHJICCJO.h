#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/SlotState.h"
#include "unitysdk/System/Object.h"

#define KJAMHJICCJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A30E300)

inline static constexpr unsigned int KJAMHJICCJO_TypeDefinitionIndex = 44713;

	class KJAMHJICCJO : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::LittleGame::ComicDessert::SlotState>* JJJNPLOLJGE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMHJICCJO_CTOR_OFFSET))(this);
		}

	};
