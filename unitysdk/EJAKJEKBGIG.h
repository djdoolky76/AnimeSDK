#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define EJAKJEKBGIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA25350)

inline static constexpr unsigned int EJAKJEKBGIG_TypeDefinitionIndex = 43749;

	class EJAKJEKBGIG : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint MDEHOJGIEEP; // 0x10
		::RPG::GameCore::FixPoint AJNIINMOEFO; // 0x18
		::RPG::GameCore::FixPoint LFPBDLMKCMA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKJEKBGIG_CTOR_OFFSET))(this);
		}

	};
