#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define IANPCCLEEOP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E220D0)

inline static constexpr unsigned int IANPCCLEEOP_TypeDefinitionIndex = 57589;

	class IANPCCLEEOP : public ::System::Object
	{
	public:
		::System::UInt32 LDIKOLCAJLH; // 0x10
		::System::UInt32 PKEKFAHEPAL; // 0x14
		::RPG::GameCore::FixPoint EIAADFEOONK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANPCCLEEOP_CTOR_OFFSET))(this);
		}

	};
