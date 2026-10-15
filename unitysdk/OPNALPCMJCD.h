#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AdventurePhase; }
namespace System { class String; }

#define OPNALPCMJCD_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xBFB4560)
#define OPNALPCMJCD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB5000)

	class OPNALPCMJCD : public ::System::Object
	{
	public:
		::System::String* BAHLDFMIJFG; // 0x10
		::System::String* IFCEOHEAIGI; // 0x18
		::System::UInt32 MAFCGLEKCLI; // 0x20
		::System::UInt32 MCEKAIHAODE; // 0x24
		::System::Boolean OHLOEABKKME; // 0x28
		::System::Boolean KCHFENMKNDO; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 MHLFGAGGIDA; // 0x2C
		::System::UInt32 IHBCONHLJGP; // 0x30
		::UnityEngine::Vector3 LBJPPLGGBNN; // 0x34
		::UnityEngine::Quaternion POHDKIIOAJB; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNALPCMJCD_CTOR_OFFSET))(this);
		}

		::System::Boolean ALJIOCDBMKO(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + OPNALPCMJCD_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
