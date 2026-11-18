#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEMPJCOPMDE;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_MDEHGGFKFAB_ADBJHBLAACM_OFFSET UNITYSDK_OFFSET(0x176457D0)
#define KFBAENHGMFB_MDEHGGFKFAB_DFLKEBEOKMP_OFFSET UNITYSDK_OFFSET(0x17645760)
#define KFBAENHGMFB_MDEHGGFKFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x17645750)

inline static constexpr unsigned int KFBAENHGMFB_MDEHGGFKFAB_TypeDefinitionIndex = 78602;

class KFBAENHGMFB_MDEHGGFKFAB : public ::System::Object
{
public:
	::System::Action_1<::MEMPJCOPMDE*>* LJFKEJMODMK; // 0x10
	::System::Action_1<::MEMPJCOPMDE*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_MDEHGGFKFAB__CTOR_OFFSET))(this);
	}

	::System::Void DFLKEBEOKMP(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_MDEHGGFKFAB_DFLKEBEOKMP_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void ADBJHBLAACM(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_MDEHGGFKFAB_ADBJHBLAACM_OFFSET))(this, GLAOEHCGCFO);
	}
};
