#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskConfig; }

#define DJPBAKPBELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F2970)
#define DJPBAKPBELL_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0x1C5F2930)
#define DJPBAKPBELL_MDFBKGOJOJI_OFFSET UNITYSDK_OFFSET(0x1C5F28F0)

inline static constexpr unsigned int DJPBAKPBELL_TypeDefinitionIndex = 37009;

	class DJPBAKPBELL : public ::System::Object
	{
	public:
		::RPG::Client::LittleGameShare::TaskState DELMCJFBNBL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPBAKPBELL_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TaskState MDFBKGOJOJI()
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPBAKPBELL_MDFBKGOJOJI_OFFSET))(this);
		}

		::RPG::GameCore::TaskConfig* FLFLCMEJEPM()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPBAKPBELL_FLFLCMEJEPM_OFFSET))(this);
		}

	};
