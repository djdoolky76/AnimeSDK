#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_LJAKIBJECAJ_APLEHDGENHM_OFFSET UNITYSDK_OFFSET(0x15207990)
#define KFBAENHGMFB_LJAKIBJECAJ_DHBEFCEAAOC_OFFSET UNITYSDK_OFFSET(0x15207930)
#define KFBAENHGMFB_LJAKIBJECAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15207920)

inline static constexpr unsigned int KFBAENHGMFB_LJAKIBJECAJ_TypeDefinitionIndex = 78594;

class KFBAENHGMFB_LJAKIBJECAJ : public ::System::Object
{
public:
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LJAKIBJECAJ__CTOR_OFFSET))(this);
	}

	::System::Void DHBEFCEAAOC(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LJAKIBJECAJ_DHBEFCEAAOC_OFFSET))(this, JBLGEGMELPE);
	}

	::System::Void APLEHDGENHM(::OAEFGCLEHHO* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LJAKIBJECAJ_APLEHDGENHM_OFFSET))(this, IMILJHBDOGJ);
	}
};
