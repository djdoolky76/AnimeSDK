#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACPNMIAAMLJ_BFCPFBPDHHN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACPNMIAAMLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8E3E0)

inline static constexpr unsigned int ACPNMIAAMLJ_TypeDefinitionIndex = 38817;

class ACPNMIAAMLJ : public ::System::Object
{
public:
	::System::String* ADGKNLFBFIP; // 0x10
	::System::Action_1<::System::Int32>* CCDHFIKFOAJ; // 0x18
	::System::String* FJBAMMBENNL; // 0x20
	::System::String* MOLHMBNJPFG; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* NOGPMAKCPJN; // 0x30
	::System::Int32 LEEHNIMEPJM; // 0x38
	::ACPNMIAAMLJ_BFCPFBPDHHN DAFHBECFMPD; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPNMIAAMLJ__CTOR_OFFSET))(this);
	}
};
