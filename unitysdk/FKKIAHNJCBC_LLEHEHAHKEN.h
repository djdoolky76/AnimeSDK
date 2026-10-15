#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentAssistantState.h"
#include "unitysdk/System/Object.h"
class BEEJHBCIGGI;
class FKKIAHNJCBC;
class KNHCNPDALBB;

#define FKKIAHNJCBC_LLEHEHAHKEN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158072A0)
#define FKKIAHNJCBC_LLEHEHAHKEN_CTOR_OFFSET UNITYSDK_OFFSET(0x15807290)

	class FKKIAHNJCBC_LLEHEHAHKEN : public ::System::Object
	{
	public:
		::BEEJHBCIGGI* ILPEEPDIPHL; // 0x10
		::System::Void _ctor(::BEEJHBCIGGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEJHBCIGGI*))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_LLEHEHAHKEN_CTOR_OFFSET))(this, a1);
		}

		::FKKIAHNJCBC* BPLPBPMEODA(::KNHCNPDALBB* a1, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState a2)
		{
			return ((::FKKIAHNJCBC*(*)(::PVOID, ::KNHCNPDALBB*, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState))((::PBYTE)hIl2Cpp + FKKIAHNJCBC_LLEHEHAHKEN_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
