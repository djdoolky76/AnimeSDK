#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define GKFHOJFHFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D1A60)
#define GKFHOJFHFAB_GPFICMJHBOA_OFFSET UNITYSDK_OFFSET(0x1A8D19E0)

inline static constexpr unsigned int GKFHOJFHFAB_TypeDefinitionIndex = 57287;

	class GKFHOJFHFAB : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint KOBHALBKDLJ; // 0x10
		::RPG::GameCore::FixPoint NIADOIEAEIM; // 0x18
		::System::Boolean LCGOLPNDHLJ; // 0x20
		::System::Boolean AHAELEIHCON; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHOJFHFAB_CTOR_OFFSET))(this);
		}

		::System::Single GPFICMJHBOA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHOJFHFAB_GPFICMJHBOA_OFFSET))(this);
		}

	};
