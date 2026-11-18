#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/UITextStyleMatchCondition.h"
#include "unitysdk/MoleMole/Config/UITextStyleParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LABDAGJPPLO.h"

namespace System { class String; }

#define DGBFDMAJHJE_JBNDGJJEBGE_OFFSET UNITYSDK_OFFSET(0x1940FC80)
#define DGBFDMAJHJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1940FC70)

inline static constexpr unsigned int DGBFDMAJHJE_TypeDefinitionIndex = 88137;

class DGBFDMAJHJE : public ::System::Object
{
public:
	::System::String* COGKNCIJCMG; // 0x10
	::MoleMole::Config::UITextStyleMatchCondition KANJODNFFOI; // 0x18
	::System::Int32 CADLHJJOGCC; // 0x30
	::MoleMole::Config::UITextStyleParams BJPBJALPGIK; // 0x34
	::System::Int32 DKOFFFNEFJC; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBFDMAJHJE__CTOR_OFFSET))(this);
	}

	::System::Boolean JBNDGJJEBGE(::LABDAGJPPLO& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::LABDAGJPPLO&))((::PBYTE)hIl2Cpp + DGBFDMAJHJE_JBNDGJJEBGE_OFFSET))(this, AAOCANGHBDG);
	}
};
