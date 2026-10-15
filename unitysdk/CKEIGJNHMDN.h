#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CakeRaceCatAIConfig; }

#define CKEIGJNHMDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D7590)

inline static constexpr unsigned int CKEIGJNHMDN_TypeDefinitionIndex = 37247;

	class CKEIGJNHMDN : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceCatAIConfig* EGJAHHPMEGL; // 0x10
		::System::Int32 MBCACNKDMFG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEIGJNHMDN_CTOR_OFFSET))(this);
		}

	};
