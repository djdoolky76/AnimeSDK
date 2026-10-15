#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PedestrianMemberExternalConfig_Floating; }

#define FOOAGAGJKIH_CTOR_OFFSET UNITYSDK_OFFSET(0x158FF2E0)
#define FOOAGAGJKIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158FF340)
#define FOOAGAGJKIH_ELGGMMHMOEE_OFFSET UNITYSDK_OFFSET(0x158FF410)
#define FOOAGAGJKIH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x158FF390)

	class FOOAGAGJKIH : public ::System::Object
	{
	public:
		::RPG::Client::PedestrianMemberExternalConfig_Floating* IGHAHBNLIJA; // 0x10
		::System::Int32 FFNBLDFFMCN; // 0x18
		::System::Single NPINECOCALC; // 0x1C
		::System::Void _ctor(::RPG::Client::PedestrianMemberExternalConfig_Floating* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_Floating*))((::PBYTE)hIl2Cpp + FOOAGAGJKIH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOAGAGJKIH_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOOAGAGJKIH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single ELGGMMHMOEE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOAGAGJKIH_ELGGMMHMOEE_OFFSET))(this);
		}

	};
