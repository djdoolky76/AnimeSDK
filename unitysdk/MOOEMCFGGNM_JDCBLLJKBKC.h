#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define MOOEMCFGGNM_JDCBLLJKBKC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA367E0)

inline static constexpr unsigned int MOOEMCFGGNM_JDCBLLJKBKC_TypeDefinitionIndex = 56082;

	class MOOEMCFGGNM_JDCBLLJKBKC : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint PNJEGPAFNCI; // 0x10
		::System::UInt32 LDFEJAAOLKB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEMCFGGNM_JDCBLLJKBKC_CTOR_OFFSET))(this);
		}

	};
