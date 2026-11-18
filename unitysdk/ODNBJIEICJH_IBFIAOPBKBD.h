#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define ODNBJIEICJH_IBFIAOPBKBD_BEOBOIDMNHI_OFFSET UNITYSDK_OFFSET(0x1CEB44E0)
#define ODNBJIEICJH_IBFIAOPBKBD_DHMAMMDMNIG_OFFSET UNITYSDK_OFFSET(0x1CEB4500)
#define ODNBJIEICJH_IBFIAOPBKBD_MJHALOPDJDO_OFFSET UNITYSDK_OFFSET(0x1CEB44D0)
#define ODNBJIEICJH_IBFIAOPBKBD_NKFLKIGJBIJ_OFFSET UNITYSDK_OFFSET(0x1CEB44C0)
#define ODNBJIEICJH_IBFIAOPBKBD_NLNAJEDPAPA_OFFSET UNITYSDK_OFFSET(0x1CEB44F0)
#define ODNBJIEICJH_IBFIAOPBKBD_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x1CEB44B0)
#define ODNBJIEICJH_IBFIAOPBKBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8DA70)

inline static constexpr unsigned int ODNBJIEICJH_IBFIAOPBKBD_TypeDefinitionIndex = 34814;

class ODNBJIEICJH_IBFIAOPBKBD : public ::System::Object
{
public:
	::System::Action* _BELPJICGEGC_k__BackingField; // 0x10
	::System::String* _IBEDOHPILNE_k__BackingField; // 0x18
	::System::Boolean _FHOECKJOPMD_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNBJIEICJH_IBFIAOPBKBD__CTOR_OFFSET))(this);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNBJIEICJH_IBFIAOPBKBD_PBFKHLEHIGG_OFFSET))(this);
	}

	::System::Action* NKFLKIGJBIJ()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNBJIEICJH_IBFIAOPBKBD_NKFLKIGJBIJ_OFFSET))(this);
	}

	::System::Void MJHALOPDJDO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODNBJIEICJH_IBFIAOPBKBD_MJHALOPDJDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BEOBOIDMNHI(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ODNBJIEICJH_IBFIAOPBKBD_BEOBOIDMNHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NLNAJEDPAPA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNBJIEICJH_IBFIAOPBKBD_NLNAJEDPAPA_OFFSET))(this);
	}

	::System::Void DHMAMMDMNIG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODNBJIEICJH_IBFIAOPBKBD_DHMAMMDMNIG_OFFSET))(this, EGEGIMGMJHN);
	}
};
