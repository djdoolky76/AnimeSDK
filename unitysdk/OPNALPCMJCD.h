#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AdventurePhase; }
namespace System { class String; }

#define OPNALPCMJCD_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xBFACDF0)
#define OPNALPCMJCD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFAD890)

inline static constexpr unsigned int OPNALPCMJCD_TypeDefinitionIndex = 60894;

	class OPNALPCMJCD : public ::System::Object
	{
	public:
		::System::String* BAHLDFMIJFG; // 0x10
		::System::String* IFCEOHEAIGI; // 0x18
		::UnityEngine::Quaternion POHDKIIOAJB; // 0x20
		::UnityEngine::Vector3 LBJPPLGGBNN; // 0x30
		::System::UInt32 MAFCGLEKCLI; // 0x3C
		::System::Boolean OHLOEABKKME; // 0x40
		::System::Boolean KCHFENMKNDO; // 0x41
		::System::Byte _padding0[0x2];
		::System::UInt32 IHBCONHLJGP; // 0x44
		::System::UInt32 MCEKAIHAODE; // 0x48
		::System::UInt32 MHLFGAGGIDA; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNALPCMJCD_CTOR_OFFSET))(this);
		}

		::System::Boolean ALJIOCDBMKO(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + OPNALPCMJCD_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
