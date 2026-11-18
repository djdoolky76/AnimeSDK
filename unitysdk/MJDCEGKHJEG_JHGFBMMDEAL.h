#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MIODKPBHOEB;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJDCEGKHJEG_JHGFBMMDEAL_BKHOMGFMDLE_OFFSET UNITYSDK_OFFSET(0x177C0C50)
#define MJDCEGKHJEG_JHGFBMMDEAL__CTOR_OFFSET UNITYSDK_OFFSET(0x177C0C40)

inline static constexpr unsigned int MJDCEGKHJEG_JHGFBMMDEAL_TypeDefinitionIndex = 56433;

class MJDCEGKHJEG_JHGFBMMDEAL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MIODKPBHOEB*>* FIGPFOLDLOJ; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JHGFBMMDEAL__CTOR_OFFSET))(this);
	}

	::System::Void BKHOMGFMDLE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JHGFBMMDEAL_BKHOMGFMDLE_OFFSET))(this, PIIPCLCCOIG);
	}
};
