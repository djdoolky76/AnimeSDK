#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NLPMJOJADCH_ELIKGDBILDC_OMELBKOLAMM_OFFSET UNITYSDK_OFFSET(0x11F878C0)
#define NLPMJOJADCH_ELIKGDBILDC__CTOR_OFFSET UNITYSDK_OFFSET(0x11F878B0)

inline static constexpr unsigned int NLPMJOJADCH_ELIKGDBILDC_TypeDefinitionIndex = 78038;

class NLPMJOJADCH_ELIKGDBILDC : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* NPFIONPDFED; // 0x10
	::System::String* HIAIKHDFCLN; // 0x18
	::System::Action_1<::System::Single>* HAAJELGELCC; // 0x20
	::System::Single OGKEBCPEPED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPMJOJADCH_ELIKGDBILDC__CTOR_OFFSET))(this);
	}

	::System::Void OMELBKOLAMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPMJOJADCH_ELIKGDBILDC_OMELBKOLAMM_OFFSET))(this);
	}
};
