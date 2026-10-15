#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"
class BMPIEAPOJBJ;
namespace System { class Action; }

#define PILHBCFGLIA_CTOR_OFFSET UNITYSDK_OFFSET(0xC26E7A0)
#define PILHBCFGLIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC26E3A0)
#define PILHBCFGLIA_DJAEIJOLNCO_OFFSET UNITYSDK_OFFSET(0xC26E790)
#define PILHBCFGLIA_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xC26E410)
#define PILHBCFGLIA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC26E680)
#define PILHBCFGLIA_JPHFDCIAAGM_OFFSET UNITYSDK_OFFSET(0xC26E570)
#define PILHBCFGLIA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC26E470)
#define PILHBCFGLIA_OBFHNAPFEIN_OFFSET UNITYSDK_OFFSET(0xC26E740)

inline static constexpr unsigned int PILHBCFGLIA_TypeDefinitionIndex = 61044;

	class PILHBCFGLIA : public ::System::Object
	{
	public:
		::BMPIEAPOJBJ* HDPGNKLCNAD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILHBCFGLIA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILHBCFGLIA_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::BMPIEAPOJBJ* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BMPIEAPOJBJ*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PILHBCFGLIA_NPAFMEBNFOB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILHBCFGLIA_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void JPHFDCIAAGM(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PILHBCFGLIA_JPHFDCIAAGM_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PILHBCFGLIA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::Client::WorkNodeState OBFHNAPFEIN()
		{
			return ((::RPG::Client::WorkNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + PILHBCFGLIA_OBFHNAPFEIN_OFFSET))(this);
		}

		::BMPIEAPOJBJ* DJAEIJOLNCO()
		{
			return ((::BMPIEAPOJBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PILHBCFGLIA_DJAEIJOLNCO_OFFSET))(this);
		}

	};
