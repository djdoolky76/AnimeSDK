#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraWorkState.h"
#include "unitysdk/System/Object.h"

#define IOOIIIJEAAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD50A50)

inline static constexpr unsigned int IOOIIIJEAAK_TypeDefinitionIndex = 42970;

	class IOOIIIJEAAK : public ::System::Object
	{
	public:
		::System::Int32 LLBJAJNCEAL; // 0x10
		::System::UInt32 FLOMEHIPGMK; // 0x14
		::RPG::Client::LittleGame::ChimeraWorkState MEPFOEEGBEA; // 0x18
		::System::UInt32 GGKPLJJMBBA; // 0x1C
		::System::Int32 GMDBHJKEAEI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOIIIJEAAK_CTOR_OFFSET))(this);
		}

	};
