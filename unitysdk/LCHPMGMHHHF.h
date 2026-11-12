#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/IceMachineFinishStep.h"
#include "unitysdk/System/Object.h"

#define LCHPMGMHHHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9250)

inline static constexpr unsigned int LCHPMGMHHHF_TypeDefinitionIndex = 44740;

	class LCHPMGMHHHF : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::IceMachineFinishStep ELPLIEIMKLP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHPMGMHHHF_CTOR_OFFSET))(this);
		}

	};
