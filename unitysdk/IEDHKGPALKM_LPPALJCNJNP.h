#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PAINLMNPMDD;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define IEDHKGPALKM_LPPALJCNJNP_KEJBIPIDLID_OFFSET UNITYSDK_OFFSET(0x1A39B100)
#define IEDHKGPALKM_LPPALJCNJNP_LLOFLLMOIEC_OFFSET UNITYSDK_OFFSET(0x1A39B090)
#define IEDHKGPALKM_LPPALJCNJNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39B080)

inline static constexpr unsigned int IEDHKGPALKM_LPPALJCNJNP_TypeDefinitionIndex = 89872;

class IEDHKGPALKM_LPPALJCNJNP : public ::System::Object
{
public:
	::System::Action_1<::PAINLMNPMDD*>* FKHOJLMBILE; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_LPPALJCNJNP__CTOR_OFFSET))(this);
	}

	::System::Void LLOFLLMOIEC(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_LPPALJCNJNP_LLOFLLMOIEC_OFFSET))(this, JCHFKGGDDFB);
	}

	::System::Void KEJBIPIDLID(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_LPPALJCNJNP_KEJBIPIDLID_OFFSET))(this, PIIPCLCCOIG);
	}
};
