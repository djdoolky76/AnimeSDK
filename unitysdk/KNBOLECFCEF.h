#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define KNBOLECFCEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DB570)

inline static constexpr unsigned int KNBOLECFCEF_TypeDefinitionIndex = 43739;

	class KNBOLECFCEF : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint IDKONBFPBLH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOLECFCEF_CTOR_OFFSET))(this);
		}

	};
