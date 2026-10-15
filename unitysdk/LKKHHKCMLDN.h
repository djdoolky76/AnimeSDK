#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class NPCTriggerSound; }

#define LKKHHKCMLDN_CTOR_OFFSET UNITYSDK_OFFSET(0xB752F60)

inline static constexpr unsigned int LKKHHKCMLDN_TypeDefinitionIndex = 57067;

	class LKKHHKCMLDN : public ::System::Object
	{
	public:
		::RPG::GameCore::NPCTriggerSound* DNOPBFNPKHB; // 0x10
		::System::Single EOMMECBBLNC; // 0x18
		::System::Boolean BNIMJJNOLAI; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 AFLGFLKMGHN; // 0x20
		::System::Single PKACHEPDCPO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKHHKCMLDN_CTOR_OFFSET))(this);
		}

	};
