#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLFCLDDCFCP;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define OIPAFACEMMK_CBGPDDMGECG_LBCENBKEAFH_OFFSET UNITYSDK_OFFSET(0xFD8A670)
#define OIPAFACEMMK_CBGPDDMGECG_OIHKJJGHAGF_OFFSET UNITYSDK_OFFSET(0xFD8A680)
#define OIPAFACEMMK_CBGPDDMGECG__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8A660)

inline static constexpr unsigned int OIPAFACEMMK_CBGPDDMGECG_TypeDefinitionIndex = 40833;

class OIPAFACEMMK_CBGPDDMGECG : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action_1<::GLFCLDDCFCP*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_CBGPDDMGECG__CTOR_OFFSET))(this);
	}

	::System::Void LBCENBKEAFH(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_CBGPDDMGECG_LBCENBKEAFH_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void OIHKJJGHAGF(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_CBGPDDMGECG_OIHKJJGHAGF_OFFSET))(this, DJCNCELJPOM);
	}
};
