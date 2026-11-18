#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBJLLOBDKHH_GKBCDEBKMCH_DCNJOBCNOAA_OFFSET UNITYSDK_OFFSET(0xE17EEA0)
#define NBJLLOBDKHH_GKBCDEBKMCH__CTOR_OFFSET UNITYSDK_OFFSET(0xE17EE90)

inline static constexpr unsigned int NBJLLOBDKHH_GKBCDEBKMCH_TypeDefinitionIndex = 46247;

class NBJLLOBDKHH_GKBCDEBKMCH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LEGJIOOLJLL; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GKBCDEBKMCH__CTOR_OFFSET))(this);
	}

	::System::Void DCNJOBCNOAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GKBCDEBKMCH_DCNJOBCNOAA_OFFSET))(this);
	}
};
