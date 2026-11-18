#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPFLIJIFONJ_MJHIPJOGGCD;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPFLIJIFONJ_CNJLMFEMODO_DHAJFCGJIFK_OFFSET UNITYSDK_OFFSET(0x15CB4FD0)
#define FPFLIJIFONJ_CNJLMFEMODO__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB4FC0)

inline static constexpr unsigned int FPFLIJIFONJ_CNJLMFEMODO_TypeDefinitionIndex = 86226;

class FPFLIJIFONJ_CNJLMFEMODO : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NEMJJNIDKFN; // 0x10
	::System::String* PMOGGCDIDHJ; // 0x18
	::System::Func_2<::MonoUITableScrollV2*, ::UIWidgetGroup*>* NGFEFJFKFGI; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* NIPAFPFKMEF; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* DKHLFAAIIMK; // 0x30
	::System::Boolean CDFBHPPGMDC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFLIJIFONJ_CNJLMFEMODO__CTOR_OFFSET))(this);
	}

	::FPFLIJIFONJ_MJHIPJOGGCD* DHAJFCGJIFK(::System::Int32 ABHBKFJKINO)
	{
		return ((::FPFLIJIFONJ_MJHIPJOGGCD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPFLIJIFONJ_CNJLMFEMODO_DHAJFCGJIFK_OFFSET))(this, ABHBKFJKINO);
	}
};
