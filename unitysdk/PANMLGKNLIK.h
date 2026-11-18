#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PANMLGKNLIK_AOHFNLNNINH_OFFSET UNITYSDK_OFFSET(0x150ADF10)
#define PANMLGKNLIK_NDHPGBIOKCL_OFFSET UNITYSDK_OFFSET(0x150ADF00)
#define PANMLGKNLIK__CTOR_OFFSET UNITYSDK_OFFSET(0x150ADE10)

inline static constexpr unsigned int PANMLGKNLIK_TypeDefinitionIndex = 74488;

class PANMLGKNLIK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* BGIACJEGPCG; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* PGJEEDHIFLK; // 0x18
	::System::Int32 _OOHCIANAIOP_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANMLGKNLIK__CTOR_OFFSET))(this);
	}

	::System::Void NDHPGBIOKCL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PANMLGKNLIK_NDHPGBIOKCL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AOHFNLNNINH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANMLGKNLIK_AOHFNLNNINH_OFFSET))(this);
	}
};
