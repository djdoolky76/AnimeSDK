#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJDCEGKHJEG_GAPNBACDAEC_MIKMCBHOELK_OFFSET UNITYSDK_OFFSET(0x13191180)
#define MJDCEGKHJEG_GAPNBACDAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x13191170)

inline static constexpr unsigned int MJDCEGKHJEG_GAPNBACDAEC_TypeDefinitionIndex = 56448;

class MJDCEGKHJEG_GAPNBACDAEC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* OBDILMIOOOL; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_GAPNBACDAEC__CTOR_OFFSET))(this);
	}

	::System::Void MIKMCBHOELK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_GAPNBACDAEC_MIKMCBHOELK_OFFSET))(this, PIIPCLCCOIG);
	}
};
