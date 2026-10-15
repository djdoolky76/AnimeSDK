#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMNJCDDMLHI;
namespace RPG::Client { class UIController; }

#define ALCCPLJJOOE_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x15562500)
#define ALCCPLJJOOE_CTOR_OFFSET UNITYSDK_OFFSET(0x15562550)
#define ALCCPLJJOOE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15561B30)
#define ALCCPLJJOOE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x155617E0)

	class ALCCPLJJOOE : public ::System::Object
	{
	public:
		::RPG::Client::UIController* EGEMDGDMPHF; // 0x10
		::System::Single JBLEPAHMNHN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCCPLJJOOE_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + ALCCPLJJOOE_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + ALCCPLJJOOE_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Void BJPFKNECHPL(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + ALCCPLJJOOE_BJPFKNECHPL_OFFSET))(this, a1);
		}

	};
