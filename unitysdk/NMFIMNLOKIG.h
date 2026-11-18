#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NMFIMNLOKIG_KOAFMMCGEKF_OFFSET UNITYSDK_OFFSET(0x1376B0F0)
#define NMFIMNLOKIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1376B0E0)

inline static constexpr unsigned int NMFIMNLOKIG_TypeDefinitionIndex = 43979;

class NMFIMNLOKIG : public ::System::Object
{
public:
	::System::String* JNIAEBKPLBP; // 0x10
	::System::Boolean NGFEHENFMNB; // 0x18
	::System::Boolean JCCBPCGMBPO; // 0x19
	::System::Boolean MKFAKNJAGDN; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFIMNLOKIG__CTOR_OFFSET))(this);
	}

	::System::Void KOAFMMCGEKF(::System::Int32 LFMCJPKCGKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMFIMNLOKIG_KOAFMMCGEKF_OFFSET))(this, LFMCJPKCGKI);
	}
};
