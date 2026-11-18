#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DAIGIGNHLGB_AAKIBMINION_OFFSET UNITYSDK_OFFSET(0x193F5600)
#define DAIGIGNHLGB_NHFIFDMCFNI_OFFSET UNITYSDK_OFFSET(0x193F5560)
#define DAIGIGNHLGB__CTOR_OFFSET UNITYSDK_OFFSET(0x193F5550)

inline static constexpr unsigned int DAIGIGNHLGB_TypeDefinitionIndex = 89636;

class DAIGIGNHLGB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIGIGNHLGB__CTOR_OFFSET))(this);
	}

	static ::System::String* NHFIFDMCFNI(::MoleMole::Config::ScreenEffectType IHIMDLELPAG)
	{
		return ((::System::String*(*)(::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + DAIGIGNHLGB_NHFIFDMCFNI_OFFSET))(IHIMDLELPAG);
	}

	static ::System::Void AAKIBMINION(::System::String* EEGLHMNIGLM, ::System::String*& JLHMFFIEDEN, ::System::String*& CDAGCAPACOC, ::System::String*& GDKCMJKMGPN, ::System::String*& AHJJIKHPGKO)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + DAIGIGNHLGB_AAKIBMINION_OFFSET))(EEGLHMNIGLM, JLHMFFIEDEN, CDAGCAPACOC, GDKCMJKMGPN, AHJJIKHPGKO);
	}
};
