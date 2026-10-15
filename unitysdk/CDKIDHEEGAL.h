#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDKIDHEEGAL;
namespace RPG::GameCore { class RogueNPCRow; }
namespace System { class String; }

#define CDKIDHEEGAL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC76C850)
#define CDKIDHEEGAL_CTOR_OFFSET UNITYSDK_OFFSET(0xC76C840)
#define CDKIDHEEGAL_HIMJHKLMOFO_OFFSET UNITYSDK_OFFSET(0xC76C8E0)
#define CDKIDHEEGAL_KHPGDMBFIHA_OFFSET UNITYSDK_OFFSET(0xC76C930)

	class CDKIDHEEGAL : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueNPCRow* IBPBJBOKKMF; // 0x10
		::System::Void _ctor(::RPG::GameCore::RogueNPCRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNPCRow*))((::PBYTE)hIl2Cpp + CDKIDHEEGAL_CTOR_OFFSET))(this, a1);
		}

		static ::CDKIDHEEGAL* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::CDKIDHEEGAL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CDKIDHEEGAL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 HIMJHKLMOFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKIDHEEGAL_HIMJHKLMOFO_OFFSET))(this);
		}

		::System::String* KHPGDMBFIHA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKIDHEEGAL_KHPGDMBFIHA_OFFSET))(this);
		}

	};
