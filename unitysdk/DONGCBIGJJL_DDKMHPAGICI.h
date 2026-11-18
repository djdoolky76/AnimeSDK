#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class DEKIODMEFBD;
class DONGCBIGJJL_HFGEFGPIDHD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DONGCBIGJJL_DDKMHPAGICI_HACEIEDIABP_OFFSET UNITYSDK_OFFSET(0x132A9490)
#define DONGCBIGJJL_DDKMHPAGICI_JFNGHFJBAKI_OFFSET UNITYSDK_OFFSET(0x132A9970)
#define DONGCBIGJJL_DDKMHPAGICI__CTOR_OFFSET UNITYSDK_OFFSET(0x132A9480)

inline static constexpr unsigned int DONGCBIGJJL_DDKMHPAGICI_TypeDefinitionIndex = 70487;

class DONGCBIGJJL_DDKMHPAGICI : public ::System::Object
{
public:
	::DEKIODMEFBD* PPKHNALHCCM; // 0x10
	::System::Collections::Generic::List_1<::System::Boolean>* KACIGPMHKAB; // 0x18
	::DONGCBIGJJL_HFGEFGPIDHD* EEMOEMFLABI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_DDKMHPAGICI__CTOR_OFFSET))(this);
	}

	::System::Void HACEIEDIABP(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DONGCBIGJJL_DDKMHPAGICI_HACEIEDIABP_OFFSET))(this, MKHLBMMKCJL);
	}

	::System::Void JFNGHFJBAKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_DDKMHPAGICI_JFNGHFJBAKI_OFFSET))(this);
	}
};
