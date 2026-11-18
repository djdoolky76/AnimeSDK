#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKCGFNKLIBA;
class NLMHLJADDFG;
namespace System { class Action; }

#define NMMFMPFMDBE_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x11F89880)
#define NMMFMPFMDBE_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x11F895A0)
#define NMMFMPFMDBE_HIIONNEOKEN_OFFSET UNITYSDK_OFFSET(0x11F89920)
#define NMMFMPFMDBE_HLBKHEFJAPH_OFFSET UNITYSDK_OFFSET(0x11F898D0)
#define NMMFMPFMDBE_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x11F898C0)
#define NMMFMPFMDBE_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x11F89780)
#define NMMFMPFMDBE_PMLILGDNPPC_OFFSET UNITYSDK_OFFSET(0x11F89960)
#define NMMFMPFMDBE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F89910)

inline static constexpr unsigned int NMMFMPFMDBE_TypeDefinitionIndex = 52863;

class NMMFMPFMDBE : public ::System::Object
{
public:
	::NLMHLJADDFG* NOHEMOGNONL; // 0x10
	::System::Boolean _OHOMBEILHNF_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMFMPFMDBE__CTOR_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NMMFMPFMDBE_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMFMPFMDBE_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMFMPFMDBE_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMFMPFMDBE_JNENFEELMBP_OFFSET))(this);
	}

	::System::Int32 HLBKHEFJAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMFMPFMDBE_HLBKHEFJAPH_OFFSET))(this);
	}

	::System::Void HIIONNEOKEN(::AKCGFNKLIBA* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::AKCGFNKLIBA*))((::PBYTE)hIl2Cpp + NMMFMPFMDBE_HIIONNEOKEN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PMLILGDNPPC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMMFMPFMDBE_PMLILGDNPPC_OFFSET))(this, EGEGIMGMJHN);
	}
};
