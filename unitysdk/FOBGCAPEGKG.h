#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class MonoEffectExtensionBehaviour; }

#define FOBGCAPEGKG_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x13234950)
#define FOBGCAPEGKG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x132347F0)
#define FOBGCAPEGKG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x132348D0)
#define FOBGCAPEGKG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x132349A0)
#define FOBGCAPEGKG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x132347A0)
#define FOBGCAPEGKG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13234840)
#define FOBGCAPEGKG__CTOR_OFFSET UNITYSDK_OFFSET(0x132348C0)

inline static constexpr unsigned int FOBGCAPEGKG_TypeDefinitionIndex = 79195;

class FOBGCAPEGKG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xBE; // 0x0
	::MoleMole::MonoEffectExtensionBehaviour* FOMFKBCGPMJ; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOBGCAPEGKG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBGCAPEGKG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBGCAPEGKG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBGCAPEGKG_GETCLASSID_OFFSET))(this);
	}

	static ::FOBGCAPEGKG* JFDOOELFAOA()
	{
		return ((::FOBGCAPEGKG*(*)())((::PBYTE)hIl2Cpp + FOBGCAPEGKG_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::MoleMole::MonoEffectExtensionBehaviour* HJAOFKFDLJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectExtensionBehaviour*))((::PBYTE)hIl2Cpp + FOBGCAPEGKG_GALGFCPKMGC_OFFSET))(this, HJAOFKFDLJF);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBGCAPEGKG_MEFBHFEOKGH_OFFSET))(this);
	}
};
