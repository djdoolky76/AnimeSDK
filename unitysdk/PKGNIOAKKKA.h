#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdvEffectParamSource.h"
#include "unitysdk/System/Object.h"

#define PKGNIOAKKKA_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE5780)

inline static constexpr unsigned int PKGNIOAKKKA_TypeDefinitionIndex = 71875;

	class PKGNIOAKKKA : public ::System::Object
	{
	public:
		::System::Boolean JJDDNOMCCLB; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::AdvEffectParamSource DDGHHBLOCLO; // 0x14
		::System::UInt32 IHHIOGFBMJK; // 0x18
		::System::UInt32 NIKDDAOHOKL; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGNIOAKKKA_CTOR_OFFSET))(this);
		}

	};
