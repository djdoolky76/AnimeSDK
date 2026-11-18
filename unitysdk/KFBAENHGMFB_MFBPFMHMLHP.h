#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBFPMLALDOK;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_MFBPFMHMLHP_BJFFMNOBOAB_OFFSET UNITYSDK_OFFSET(0x1633A4B0)
#define KFBAENHGMFB_MFBPFMHMLHP_JBELNNODLGH_OFFSET UNITYSDK_OFFSET(0x1633A440)
#define KFBAENHGMFB_MFBPFMHMLHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1633A430)

inline static constexpr unsigned int KFBAENHGMFB_MFBPFMHMLHP_TypeDefinitionIndex = 78599;

class KFBAENHGMFB_MFBPFMHMLHP : public ::System::Object
{
public:
	::System::Action_1<::IBFPMLALDOK*>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::IBFPMLALDOK*>* LJFKEJMODMK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_MFBPFMHMLHP__CTOR_OFFSET))(this);
	}

	::System::Void JBELNNODLGH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_MFBPFMHMLHP_JBELNNODLGH_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void BJFFMNOBOAB(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_MFBPFMHMLHP_BJFFMNOBOAB_OFFSET))(this, GLAOEHCGCFO);
	}
};
