#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHHPIOCKPMF;
namespace RPG::GameCore { class RogueTournNPCRow; }
namespace System { class String; }

#define LHHPIOCKPMF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB6B41D0)
#define LHHPIOCKPMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B41C0)
#define LHHPIOCKPMF_HIMJHKLMOFO_OFFSET UNITYSDK_OFFSET(0xB6B4260)
#define LHHPIOCKPMF_KHPGDMBFIHA_OFFSET UNITYSDK_OFFSET(0xB6B42B0)

	class LHHPIOCKPMF : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournNPCRow* IBPBJBOKKMF; // 0x10
		::System::Void _ctor(::RPG::GameCore::RogueTournNPCRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournNPCRow*))((::PBYTE)hIl2Cpp + LHHPIOCKPMF_CTOR_OFFSET))(this, a1);
		}

		static ::LHHPIOCKPMF* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::LHHPIOCKPMF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LHHPIOCKPMF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 HIMJHKLMOFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHPIOCKPMF_HIMJHKLMOFO_OFFSET))(this);
		}

		::System::String* KHPGDMBFIHA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHPIOCKPMF_KHPGDMBFIHA_OFFSET))(this);
		}

	};
