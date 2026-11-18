#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_APAMJIMFELG_CIMLPBAOMEL_OFFSET UNITYSDK_OFFSET(0x129AAF10)
#define KNLPPPOKJJM_APAMJIMFELG_EDBOHGGFIIO_OFFSET UNITYSDK_OFFSET(0x129AAE20)
#define KNLPPPOKJJM_APAMJIMFELG__CTOR_OFFSET UNITYSDK_OFFSET(0x129AAE10)

inline static constexpr unsigned int KNLPPPOKJJM_APAMJIMFELG_TypeDefinitionIndex = 67505;

class KNLPPPOKJJM_APAMJIMFELG : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_APAMJIMFELG__CTOR_OFFSET))(this);
	}

	::System::Void EDBOHGGFIIO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_APAMJIMFELG_EDBOHGGFIIO_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void CIMLPBAOMEL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_APAMJIMFELG_CIMLPBAOMEL_OFFSET))(this, BHDNBGLCNOM);
	}
};
