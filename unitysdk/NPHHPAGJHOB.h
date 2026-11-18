#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class OBFDFHGIAKP;

#define NPHHPAGJHOB_GNHAKOFHNLK_OFFSET UNITYSDK_OFFSET(0x15FB6A60)
#define NPHHPAGJHOB_IDHOMHHFPOH_OFFSET UNITYSDK_OFFSET(0x15FB6AB0)
#define NPHHPAGJHOB_INHJAHFNEOC_OFFSET UNITYSDK_OFFSET(0x15FB6940)
#define NPHHPAGJHOB_NJPIMMEAANM_OFFSET UNITYSDK_OFFSET(0x15FB6A10)
#define NPHHPAGJHOB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15FB6640)
#define NPHHPAGJHOB__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB6570)

inline static constexpr unsigned int NPHHPAGJHOB_TypeDefinitionIndex = 50068;

class NPHHPAGJHOB : public ::System::Object
{
public:
	::OBFDFHGIAKP* POMCIJKPHLI; // 0x10
	::OBFDFHGIAKP* GBJABHBNKAG; // 0x18
	::OBFDFHGIAKP* LDLMFBBANNF; // 0x20
	::OBFDFHGIAKP* MNCBHGJLCAF; // 0x28
	::OBFDFHGIAKP* IFAPNDOMEGO; // 0x30
	::OBFDFHGIAKP* BGAEIBINPEI; // 0x38
	::System::Boolean KFECHBFGCPN; // 0x40
	::System::Boolean NAGBCEIMGGJ; // 0x41
	::System::Boolean OHLKJCIJPBO; // 0x42
	::System::Boolean BPEMEIBENJK; // 0x43
	::System::Single KIPOMMGNGEF; // 0x44
	::System::Single CHDBLEJCHGJ; // 0x48
	::UnityEngine::Vector2 EDPEJHLPDGF; // 0x4C
	::UnityEngine::Vector2 KMCEFLLIJFB; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHHPAGJHOB__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHHPAGJHOB_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean INHJAHFNEOC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHHPAGJHOB_INHJAHFNEOC_OFFSET))(this);
	}

	::System::Boolean NJPIMMEAANM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHHPAGJHOB_NJPIMMEAANM_OFFSET))(this);
	}

	::System::Boolean GNHAKOFHNLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHHPAGJHOB_GNHAKOFHNLK_OFFSET))(this);
	}

	::System::Boolean IDHOMHHFPOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHHPAGJHOB_IDHOMHHFPOH_OFFSET))(this);
	}
};
