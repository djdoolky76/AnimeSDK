#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHLHAIALAKE;
namespace System { class String; }

#define EIAGDGALHPF__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D0430)

inline static constexpr unsigned int EIAGDGALHPF_TypeDefinitionIndex = 84540;

class EIAGDGALHPF : public ::System::Object
{
public:
	::GHLHAIALAKE* LMHOLDDIHPF; // 0x10
	::System::String* KKOEDKIPHHN; // 0x18
	::System::Int32 CNBIILAANGA; // 0x20
	::System::Boolean CJAILHCNJIL; // 0x24
	::System::Boolean HGCCPMMNGAG; // 0x25
	::System::Boolean ADNPFJMKDNM; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAGDGALHPF__CTOR_OFFSET))(this);
	}
};
