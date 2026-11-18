#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IPNCFCFIKCF_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x13AB6FB0)
#define IPNCFCFIKCF_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x13AB6FF0)
#define IPNCFCFIKCF_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x13AB7000)
#define IPNCFCFIKCF_OLHKMNODFIH_OFFSET UNITYSDK_OFFSET(0x13AB7050)
#define IPNCFCFIKCF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB7040)

inline static constexpr unsigned int IPNCFCFIKCF_TypeDefinitionIndex = 60633;

class IPNCFCFIKCF : public ::System::Object
{
public:
	::System::Boolean CNFGPELOPNM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNCFCFIKCF__CTOR_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNCFCFIKCF_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNCFCFIKCF_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNCFCFIKCF_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Void OLHKMNODFIH(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IPNCFCFIKCF_OLHKMNODFIH_OFFSET))(this, EJGDHCIBCJH);
	}
};
