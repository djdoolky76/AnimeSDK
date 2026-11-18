#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IHLLEPCIGGO;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define FMLGGJAPPPF_FIIDGMMKCDM_BNHNDLKHFKN_OFFSET UNITYSDK_OFFSET(0x11D83C60)
#define FMLGGJAPPPF_FIIDGMMKCDM_INHDFMEHAPB_OFFSET UNITYSDK_OFFSET(0x11D83BD0)
#define FMLGGJAPPPF_FIIDGMMKCDM__CTOR_OFFSET UNITYSDK_OFFSET(0x11D83BC0)

inline static constexpr unsigned int FMLGGJAPPPF_FIIDGMMKCDM_TypeDefinitionIndex = 64633;

class FMLGGJAPPPF_FIIDGMMKCDM : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::IHLLEPCIGGO*>* HKEBHFKHBCC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_FIIDGMMKCDM__CTOR_OFFSET))(this);
	}

	::System::Void INHDFMEHAPB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_FIIDGMMKCDM_INHDFMEHAPB_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void BNHNDLKHFKN(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_FIIDGMMKCDM_BNHNDLKHFKN_OFFSET))(this, BLLNHDIDKPA);
	}
};
