#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraDeleteEffect; }

#define BFFKEABOKDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB160E70)
#define BFFKEABOKDM_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xB160EA0)
#define BFFKEABOKDM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB160EE0)

inline static constexpr unsigned int BFFKEABOKDM_TypeDefinitionIndex = 78410;

	class BFFKEABOKDM : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
		::RPG::GameCore::ChimeraDeleteEffect* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::ChimeraDeleteEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDeleteEffect*))((::PBYTE)hIl2Cpp + BFFKEABOKDM_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFKEABOKDM_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFKEABOKDM_NPAFMEBNFOB_OFFSET))(this);
		}

	};
