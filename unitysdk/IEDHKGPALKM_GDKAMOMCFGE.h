#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OMCHKLCJIPM;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define IEDHKGPALKM_GDKAMOMCFGE_AJEPCBCIDED_OFFSET UNITYSDK_OFFSET(0x1656D950)
#define IEDHKGPALKM_GDKAMOMCFGE_FCPDKCDDNEI_OFFSET UNITYSDK_OFFSET(0x1656D960)
#define IEDHKGPALKM_GDKAMOMCFGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1656D940)

inline static constexpr unsigned int IEDHKGPALKM_GDKAMOMCFGE_TypeDefinitionIndex = 89867;

class IEDHKGPALKM_GDKAMOMCFGE : public ::System::Object
{
public:
	::System::Action_1<::OMCHKLCJIPM*>* FKHOJLMBILE; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_GDKAMOMCFGE__CTOR_OFFSET))(this);
	}

	::System::Void AJEPCBCIDED(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_GDKAMOMCFGE_AJEPCBCIDED_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FCPDKCDDNEI(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_GDKAMOMCFGE_FCPDKCDDNEI_OFFSET))(this, JCHFKGGDDFB);
	}
};
