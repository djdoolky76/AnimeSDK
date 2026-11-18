#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLNGLIBJBID;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MJDCEGKHJEG_JNINIEPJDPM_APHMHECIDMH_OFFSET UNITYSDK_OFFSET(0x17D364A0)
#define MJDCEGKHJEG_JNINIEPJDPM_JGGLNFIMDCN_OFFSET UNITYSDK_OFFSET(0x17D36550)
#define MJDCEGKHJEG_JNINIEPJDPM__CTOR_OFFSET UNITYSDK_OFFSET(0x17D36490)

inline static constexpr unsigned int MJDCEGKHJEG_JNINIEPJDPM_TypeDefinitionIndex = 56426;

class MJDCEGKHJEG_JNINIEPJDPM : public ::System::Object
{
public:
	::System::Action_1<::BLNGLIBJBID*>* IGAAKDOIPNN; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JNINIEPJDPM__CTOR_OFFSET))(this);
	}

	::System::Void APHMHECIDMH(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JNINIEPJDPM_APHMHECIDMH_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void JGGLNFIMDCN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JNINIEPJDPM_JGGLNFIMDCN_OFFSET))(this, PIIPCLCCOIG);
	}
};
