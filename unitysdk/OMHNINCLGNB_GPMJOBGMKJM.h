#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CIMOBIDENBF;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define OMHNINCLGNB_GPMJOBGMKJM_MMFNEPMMJBO_OFFSET UNITYSDK_OFFSET(0xFD93C60)
#define OMHNINCLGNB_GPMJOBGMKJM_NPNABPLNIBD_OFFSET UNITYSDK_OFFSET(0xFD93BC0)
#define OMHNINCLGNB_GPMJOBGMKJM__CTOR_OFFSET UNITYSDK_OFFSET(0xFD93BB0)

inline static constexpr unsigned int OMHNINCLGNB_GPMJOBGMKJM_TypeDefinitionIndex = 85376;

class OMHNINCLGNB_GPMJOBGMKJM : public ::System::Object
{
public:
	::MonoUITableScrollV2* FAMGIABLFPH; // 0x10
	::CIMOBIDENBF* ALDLFJOJLDB; // 0x18
	::UnityEngine::RectTransform* KMEKDKFLGEE; // 0x20
	::System::Collections::Generic::List_1<::System::Boolean>* LCIPFMADGIO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHNINCLGNB_GPMJOBGMKJM__CTOR_OFFSET))(this);
	}

	::System::Void NPNABPLNIBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHNINCLGNB_GPMJOBGMKJM_NPNABPLNIBD_OFFSET))(this);
	}

	::System::Void MMFNEPMMJBO(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OMHNINCLGNB_GPMJOBGMKJM_MMFNEPMMJBO_OFFSET))(this, MKHLBMMKCJL);
	}
};
