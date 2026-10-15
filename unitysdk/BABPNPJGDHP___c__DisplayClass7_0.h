#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABPNPJGDHP_EMKDEBMGDPO;
namespace RPG::GameCore { class TransformComponent; }

#define BABPNPJGDHP___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15BD1320)
#define BABPNPJGDHP___C__DISPLAYCLASS7_0__APPLYFORMATION_B__0_OFFSET UNITYSDK_OFFSET(0x15BD23C0)

	class BABPNPJGDHP___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TransformComponent* pTransCmpt; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABPNPJGDHP___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ApplyFormation_b__0(::BABPNPJGDHP_EMKDEBMGDPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BABPNPJGDHP_EMKDEBMGDPO*))((::PBYTE)hIl2Cpp + BABPNPJGDHP___C__DISPLAYCLASS7_0__APPLYFORMATION_B__0_OFFSET))(this, a1);
		}

	};
