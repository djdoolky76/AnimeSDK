#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraLockReason.h"
#include "unitysdk/System/Object.h"

#define JOJLJDHIGPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD793F0)

inline static constexpr unsigned int JOJLJDHIGPK_TypeDefinitionIndex = 42966;

	class JOJLJDHIGPK : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraLockReason KDHPKOFLNFM; // 0x10
		::System::Boolean AALCCPJCBME; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJLJDHIGPK_CTOR_OFFSET))(this);
		}

	};
