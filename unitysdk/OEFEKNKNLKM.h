#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MiniGameFlappyBirdBlockConfig; }

#define OEFEKNKNLKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4E380)

inline static constexpr unsigned int OEFEKNKNLKM_TypeDefinitionIndex = 44371;

	class OEFEKNKNLKM : public ::System::Object
	{
	public:
		::RPG::GameCore::MiniGameFlappyBirdBlockConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEKNKNLKM_CTOR_OFFSET))(this);
		}

	};
