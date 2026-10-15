#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraTriggerTutorial; }

#define AFLCDFDBBAB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0B620)
#define AFLCDFDBBAB_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xCF0B6D0)
#define AFLCDFDBBAB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xCF0B660)

inline static constexpr unsigned int AFLCDFDBBAB_TypeDefinitionIndex = 78419;

	class AFLCDFDBBAB : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
		::RPG::GameCore::ChimeraTriggerTutorial* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::ChimeraTriggerTutorial* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTriggerTutorial*))((::PBYTE)hIl2Cpp + AFLCDFDBBAB_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLCDFDBBAB_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLCDFDBBAB_KMFNKDMEJBC_OFFSET))(this);
		}

	};
