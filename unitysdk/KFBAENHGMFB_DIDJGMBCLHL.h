#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGIFBOEJAMI;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_DIDJGMBCLHL_EOIOPCIFMNE_OFFSET UNITYSDK_OFFSET(0x12983700)
#define KFBAENHGMFB_DIDJGMBCLHL_HLKBAHHIMLF_OFFSET UNITYSDK_OFFSET(0x12983760)
#define KFBAENHGMFB_DIDJGMBCLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x129836F0)

inline static constexpr unsigned int KFBAENHGMFB_DIDJGMBCLHL_TypeDefinitionIndex = 78578;

class KFBAENHGMFB_DIDJGMBCLHL : public ::System::Object
{
public:
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x10
	::System::Action_1<::MGIFBOEJAMI*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_DIDJGMBCLHL__CTOR_OFFSET))(this);
	}

	::System::Void EOIOPCIFMNE(::OAEFGCLEHHO* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_DIDJGMBCLHL_EOIOPCIFMNE_OFFSET))(this, IMILJHBDOGJ);
	}

	::System::Void HLKBAHHIMLF(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_DIDJGMBCLHL_HLKBAHHIMLF_OFFSET))(this, JBLGEGMELPE);
	}
};
