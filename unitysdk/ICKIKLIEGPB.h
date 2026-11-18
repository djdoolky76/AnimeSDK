#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPGMHIMBOK.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ICKIKLIEGPB_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1F7A3CF0)
#define ICKIKLIEGPB_NGKMNINKOKA_OFFSET UNITYSDK_OFFSET(0x1F7A3CE0)
#define ICKIKLIEGPB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7A3CD0)
#define ICKIKLIEGPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A3C90)

inline static constexpr unsigned int ICKIKLIEGPB_TypeDefinitionIndex = 28904;

class ICKIKLIEGPB : public ::System::Attribute
{
public:
	::System::String* _PFONOBKABKP_k__BackingField; // 0x10
	::DJPGMHIMBOK BNFJEHFMHJL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKIKLIEGPB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* JNFFAMDMCML)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICKIKLIEGPB__CTOR_1_OFFSET))(this, JNFFAMDMCML);
	}

	::System::Void NGKMNINKOKA(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICKIKLIEGPB_NGKMNINKOKA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKIKLIEGPB_IFDIOIOCGDP_OFFSET))(this);
	}
};
