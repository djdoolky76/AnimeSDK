#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LMPJJDOEPEH;
class MonoUITableScrollV2;
namespace System { class String; }

#define LMPJJDOEPEH_LOLBKEDPGCB_HGMCGMDMANJ_OFFSET UNITYSDK_OFFSET(0x13D08450)
#define LMPJJDOEPEH_LOLBKEDPGCB_MJHMHMABFCG_OFFSET UNITYSDK_OFFSET(0x13D08280)
#define LMPJJDOEPEH_LOLBKEDPGCB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D08270)

inline static constexpr unsigned int LMPJJDOEPEH_LOLBKEDPGCB_TypeDefinitionIndex = 69541;

class LMPJJDOEPEH_LOLBKEDPGCB : public ::System::Object
{
public:
	::LMPJJDOEPEH* KLHPEBKNIFB; // 0x10
	::MonoUITableScrollV2* FAMGIABLFPH; // 0x18
	::System::Int32 LEBMFIMFKKD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPJJDOEPEH_LOLBKEDPGCB__CTOR_OFFSET))(this);
	}

	::System::String* MJHMHMABFCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPJJDOEPEH_LOLBKEDPGCB_MJHMHMABFCG_OFFSET))(this);
	}

	::System::Void HGMCGMDMANJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPJJDOEPEH_LOLBKEDPGCB_HGMCGMDMANJ_OFFSET))(this);
	}
};
