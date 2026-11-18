#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OKPDMJIGIMH_AOCGDDCDNBB_BIOKFFHCHAK_OFFSET UNITYSDK_OFFSET(0x14F899E0)
#define OKPDMJIGIMH_AOCGDDCDNBB__CTOR_OFFSET UNITYSDK_OFFSET(0x14F899D0)

inline static constexpr unsigned int OKPDMJIGIMH_AOCGDDCDNBB_TypeDefinitionIndex = 70743;

class OKPDMJIGIMH_AOCGDDCDNBB : public ::System::Object
{
public:
	::System::Action* OLBIFDKONEK; // 0x10
	::System::Action_1<::System::String*>* FEIJCNAMELJ; // 0x18
	::System::Action_1<::System::String*>* CAAFEGLOALC; // 0x20
	::System::Int32 BABKLDMHKEB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_AOCGDDCDNBB__CTOR_OFFSET))(this);
	}

	::System::Void BIOKFFHCHAK(::System::String* OIKFDBDFIID)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_AOCGDDCDNBB_BIOKFFHCHAK_OFFSET))(this, OIKFDBDFIID);
	}
};
