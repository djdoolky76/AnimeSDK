#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/System/Object.h"

#define PPIOPAOGDME_CTOR_OFFSET UNITYSDK_OFFSET(0xC389FF0)

inline static constexpr unsigned int PPIOPAOGDME_TypeDefinitionIndex = 48304;

	class PPIOPAOGDME : public ::System::Object
	{
	public:
		::System::Single EKLIICGFJBA; // 0x10
		::RPG::GameCore::SimpleTalkBlackMaskColor OEJDHHMKNMA; // 0x14
		::System::Single DOLPODOEHGG; // 0x18
		::System::Single IABGGMGAEEJ; // 0x1C
		::System::Single IEHPFADHJFD; // 0x20
		::System::Single AENDCEMJGNJ; // 0x24
		::System::Single PKAMPKHALOL; // 0x28
		::System::Boolean COOBFCODPOH; // 0x2C
		::System::Boolean PLGJGHDBLLE; // 0x2D
		::System::Boolean HIJFLFKPENJ; // 0x2E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIOPAOGDME_CTOR_OFFSET))(this);
		}

	};
