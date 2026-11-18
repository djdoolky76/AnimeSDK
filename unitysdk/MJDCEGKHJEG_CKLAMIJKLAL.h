#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NKJLGFPNLBD;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MJDCEGKHJEG_CKLAMIJKLAL_EAEDJACCELI_OFFSET UNITYSDK_OFFSET(0x1075C420)
#define MJDCEGKHJEG_CKLAMIJKLAL_FOIJKAEILIH_OFFSET UNITYSDK_OFFSET(0x1075C410)
#define MJDCEGKHJEG_CKLAMIJKLAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1075C400)

inline static constexpr unsigned int MJDCEGKHJEG_CKLAMIJKLAL_TypeDefinitionIndex = 56405;

class MJDCEGKHJEG_CKLAMIJKLAL : public ::System::Object
{
public:
	::System::Action_1<::NKJLGFPNLBD*>* IGAAKDOIPNN; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_CKLAMIJKLAL__CTOR_OFFSET))(this);
	}

	::System::Void FOIJKAEILIH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_CKLAMIJKLAL_FOIJKAEILIH_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EAEDJACCELI(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_CKLAMIJKLAL_EAEDJACCELI_OFFSET))(this, DJCNCELJPOM);
	}
};
