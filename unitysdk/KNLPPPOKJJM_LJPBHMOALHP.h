#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_LJPBHMOALHP_DBEBIAKFMFJ_OFFSET UNITYSDK_OFFSET(0x1772EF50)
#define KNLPPPOKJJM_LJPBHMOALHP_POJENHHBCEA_OFFSET UNITYSDK_OFFSET(0x1772EF60)
#define KNLPPPOKJJM_LJPBHMOALHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1772EF40)

inline static constexpr unsigned int KNLPPPOKJJM_LJPBHMOALHP_TypeDefinitionIndex = 67501;

class KNLPPPOKJJM_LJPBHMOALHP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LJPBHMOALHP__CTOR_OFFSET))(this);
	}

	::System::Void DBEBIAKFMFJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LJPBHMOALHP_DBEBIAKFMFJ_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void POJENHHBCEA(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LJPBHMOALHP_POJENHHBCEA_OFFSET))(this, BLLNHDIDKPA);
	}
};
