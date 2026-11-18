#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_HFEHHDKHKOM_MODILGLJINK_OFFSET UNITYSDK_OFFSET(0xD3F21C0)
#define KFBAENHGMFB_HFEHHDKHKOM_PPIGPEFODNM_OFFSET UNITYSDK_OFFSET(0xD3F2090)
#define KFBAENHGMFB_HFEHHDKHKOM__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F2080)

inline static constexpr unsigned int KFBAENHGMFB_HFEHHDKHKOM_TypeDefinitionIndex = 78582;

class KFBAENHGMFB_HFEHHDKHKOM : public ::System::Object
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x18
	::System::Action_1<::OAEFGCLEHHO*>* EJGDHCIBCJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_HFEHHDKHKOM__CTOR_OFFSET))(this);
	}

	::System::Void PPIGPEFODNM(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_HFEHHDKHKOM_PPIGPEFODNM_OFFSET))(this, JBLGEGMELPE);
	}

	::System::Void MODILGLJINK(::OAEFGCLEHHO* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_HFEHHDKHKOM_MODILGLJINK_OFFSET))(this, IMILJHBDOGJ);
	}
};
