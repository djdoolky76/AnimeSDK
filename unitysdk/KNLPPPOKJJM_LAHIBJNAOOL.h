#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_LAHIBJNAOOL_GNPLPIAJFHL_OFFSET UNITYSDK_OFFSET(0xD40FB40)
#define KNLPPPOKJJM_LAHIBJNAOOL_MNPBCBIKPOH_OFFSET UNITYSDK_OFFSET(0xD40FA50)
#define KNLPPPOKJJM_LAHIBJNAOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xD40FA40)

inline static constexpr unsigned int KNLPPPOKJJM_LAHIBJNAOOL_TypeDefinitionIndex = 67498;

class KNLPPPOKJJM_LAHIBJNAOOL : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LAHIBJNAOOL__CTOR_OFFSET))(this);
	}

	::System::Void MNPBCBIKPOH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LAHIBJNAOOL_MNPBCBIKPOH_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void GNPLPIAJFHL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LAHIBJNAOOL_GNPLPIAJFHL_OFFSET))(this, BHDNBGLCNOM);
	}
};
