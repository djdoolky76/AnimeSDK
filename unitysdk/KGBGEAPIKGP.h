#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define KGBGEAPIKGP__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F56E0)

inline static constexpr unsigned int KGBGEAPIKGP_TypeDefinitionIndex = 50921;

class KGBGEAPIKGP : public ::System::Attribute
{
public:
	::System::String* FKLAHPCKPCA; // 0x10
	::System::String* JOCABGIAGFP; // 0x18
	::System::Int32 LNGGJIBENEG; // 0x20
	::System::Boolean EONKJEDJBGJ; // 0x24
	::System::Boolean FENKEDFIJGL; // 0x25
	::System::Boolean MNMGKMJFKJH; // 0x26
	::System::Boolean MBIEEGDCLIE; // 0x27
	::System::Boolean KGBOMHJGBHF; // 0x28
	::System::Boolean OHEIFLDMANB; // 0x29
	::System::Boolean PBHCGNLAKAL; // 0x2A
	::System::Boolean NMJKKMBDKHP; // 0x2B
	::System::Int32 OGFABONNBJN; // 0x2C
	::System::Int32 HLHCOLHIIBO; // 0x30
	::System::Boolean DOIHKEBFNKP; // 0x34
	::System::Boolean FJBINODKNBF; // 0x35
	::System::Boolean LDGKPAFPKHF; // 0x36

	::System::Void _ctor(::System::String* FEMDEHJEDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGBGEAPIKGP__CTOR_OFFSET))(this, FEMDEHJEDKF);
	}
};
