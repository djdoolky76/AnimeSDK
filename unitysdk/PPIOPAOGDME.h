#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/System/Object.h"

#define PPIOPAOGDME_CTOR_OFFSET UNITYSDK_OFFSET(0xC382900)

inline static constexpr unsigned int PPIOPAOGDME_TypeDefinitionIndex = 48304;

	class PPIOPAOGDME : public ::System::Object
	{
	public:
		::System::Single DOLPODOEHGG; // 0x10
		::System::Single IABGGMGAEEJ; // 0x14
		::System::Single EKLIICGFJBA; // 0x18
		::RPG::GameCore::SimpleTalkBlackMaskColor OEJDHHMKNMA; // 0x1C
		::System::Single PKAMPKHALOL; // 0x20
		::System::Single IEHPFADHJFD; // 0x24
		::System::Boolean HIJFLFKPENJ; // 0x28
		::System::Boolean COOBFCODPOH; // 0x29
		::System::Boolean PLGJGHDBLLE; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Single AENDCEMJGNJ; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIOPAOGDME_CTOR_OFFSET))(this);
		}

	};
