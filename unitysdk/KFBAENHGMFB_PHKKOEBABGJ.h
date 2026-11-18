#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHOGLKMCDLG;
class KFBAENHGMFB;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_PHKKOEBABGJ_HOJDPLMBAPM_OFFSET UNITYSDK_OFFSET(0x15159970)
#define KFBAENHGMFB_PHKKOEBABGJ_KMCKCHOKMHF_OFFSET UNITYSDK_OFFSET(0x15159910)
#define KFBAENHGMFB_PHKKOEBABGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15159900)

inline static constexpr unsigned int KFBAENHGMFB_PHKKOEBABGJ_TypeDefinitionIndex = 78584;

class KFBAENHGMFB_PHKKOEBABGJ : public ::System::Object
{
public:
	::System::Action_1<::JHOGLKMCDLG*>* OIPJFHJAKLA; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x18
	::KFBAENHGMFB* KLHPEBKNIFB; // 0x20
	::System::UInt32 IEJMAHCLOLL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_PHKKOEBABGJ__CTOR_OFFSET))(this);
	}

	::System::Void KMCKCHOKMHF(::OAEFGCLEHHO* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_PHKKOEBABGJ_KMCKCHOKMHF_OFFSET))(this, IMILJHBDOGJ);
	}

	::System::Void HOJDPLMBAPM(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_PHKKOEBABGJ_HOJDPLMBAPM_OFFSET))(this, GLAOEHCGCFO);
	}
};
