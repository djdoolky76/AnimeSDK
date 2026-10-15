#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFKJEGCNBHA_RuntimeDisableBudgetReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define MFKJEGCNBHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB905580)
#define MFKJEGCNBHA_HEMPLMHOEDG_OFFSET UNITYSDK_OFFSET(0xB9054F0)
#define MFKJEGCNBHA_HENNALGKFIN_OFFSET UNITYSDK_OFFSET(0xB9053A0)
#define MFKJEGCNBHA_MHDJMHEMKIE_OFFSET UNITYSDK_OFFSET(0xB905410)
#define MFKJEGCNBHA_PEMMNHMMMAE_OFFSET UNITYSDK_OFFSET(0xB905480)

	class MFKJEGCNBHA : public ::System::Object
	{
	public:
		::RPG::Client::ReasonBool_1<::System::Object*> JFNBENKMKPO; // 0x10
		// static const ::System::Object IJNOFNELMLE; // 0x0
		// static const ::System::Object CFHJINHPDJA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKJEGCNBHA_CTOR_OFFSET))(this);
		}

		::System::Boolean HENNALGKFIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKJEGCNBHA_HENNALGKFIN_OFFSET))(this);
		}

		::System::Void MHDJMHEMKIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKJEGCNBHA_MHDJMHEMKIE_OFFSET))(this);
		}

		::System::Boolean PEMMNHMMMAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKJEGCNBHA_PEMMNHMMMAE_OFFSET))(this);
		}

		::System::Void HEMPLMHOEDG(::System::Boolean a1, ::MFKJEGCNBHA_RuntimeDisableBudgetReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MFKJEGCNBHA_RuntimeDisableBudgetReason))((::PBYTE)hIl2Cpp + MFKJEGCNBHA_HEMPLMHOEDG_OFFSET))(this, a1, a2);
		}

	};
