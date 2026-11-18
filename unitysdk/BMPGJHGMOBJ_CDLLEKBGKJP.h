#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"
#include "unitysdk/System/Object.h"

class BMPGJHGMOBJ_MKJIBEBMOBN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define BMPGJHGMOBJ_CDLLEKBGKJP_NNINDEBIAPI_OFFSET UNITYSDK_OFFSET(0x16A01300)
#define BMPGJHGMOBJ_CDLLEKBGKJP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A012F0)

inline static constexpr unsigned int BMPGJHGMOBJ_CDLLEKBGKJP_TypeDefinitionIndex = 58011;

class BMPGJHGMOBJ_CDLLEKBGKJP : public ::System::Object
{
public:
	::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry AAIJGGIEOGK; // 0x10
	::BMPGJHGMOBJ_MKJIBEBMOBN* FGBNBFHOKAA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_CDLLEKBGKJP__CTOR_OFFSET))(this);
	}

	::System::Void NNINDEBIAPI(::System::Boolean CAAFEGLOALC, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* NJKCPGDNAED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_CDLLEKBGKJP_NNINDEBIAPI_OFFSET))(this, CAAFEGLOALC, NJKCPGDNAED);
	}
};
