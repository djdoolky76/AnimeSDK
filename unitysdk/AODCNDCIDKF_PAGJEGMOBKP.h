#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AODCNDCIDKF;
namespace MoleMole { class ServerListInfo; }
namespace System { class Action; }
namespace System { class String; }

#define AODCNDCIDKF_PAGJEGMOBKP_HNOOCIPOMDO_OFFSET UNITYSDK_OFFSET(0x14231A90)
#define AODCNDCIDKF_PAGJEGMOBKP__CTOR_OFFSET UNITYSDK_OFFSET(0x14231A80)

inline static constexpr unsigned int AODCNDCIDKF_PAGJEGMOBKP_TypeDefinitionIndex = 79619;

class AODCNDCIDKF_PAGJEGMOBKP : public ::System::Object
{
public:
	::MoleMole::ServerListInfo* LJBPECKCCEA; // 0x10
	::AODCNDCIDKF* KLHPEBKNIFB; // 0x18
	::System::Action* DOPOANGDJHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_PAGJEGMOBKP__CTOR_OFFSET))(this);
	}

	::System::Void HNOOCIPOMDO(::System::String* IICPDDLBHPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_PAGJEGMOBKP_HNOOCIPOMDO_OFFSET))(this, IICPDDLBHPH);
	}
};
