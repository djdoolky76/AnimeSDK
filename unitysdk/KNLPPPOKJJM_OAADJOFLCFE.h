#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEKNLIIDKCM;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_OAADJOFLCFE_BPPIDLAGGPG_OFFSET UNITYSDK_OFFSET(0x129AAF30)
#define KNLPPPOKJJM_OAADJOFLCFE_MMJDIJBKBAM_OFFSET UNITYSDK_OFFSET(0x129AAFB0)
#define KNLPPPOKJJM_OAADJOFLCFE__CTOR_OFFSET UNITYSDK_OFFSET(0x129AAF20)

inline static constexpr unsigned int KNLPPPOKJJM_OAADJOFLCFE_TypeDefinitionIndex = 67502;

class KNLPPPOKJJM_OAADJOFLCFE : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::GEKNLIIDKCM* JDPKJJCKJLG; // 0x18
	::System::Action_1<::System::UInt64>* EJGDHCIBCJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_OAADJOFLCFE__CTOR_OFFSET))(this);
	}

	::System::Void BPPIDLAGGPG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_OAADJOFLCFE_BPPIDLAGGPG_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void MMJDIJBKBAM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_OAADJOFLCFE_MMJDIJBKBAM_OFFSET))(this, BHDNBGLCNOM);
	}
};
