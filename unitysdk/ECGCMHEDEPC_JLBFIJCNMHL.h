#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIInLevelNPCNameWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECGCMHEDEPC_JLBFIJCNMHL_KMCFAGJHOLB_OFFSET UNITYSDK_OFFSET(0x7FE5D20)
#define ECGCMHEDEPC_JLBFIJCNMHL__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE5D10)

inline static constexpr unsigned int ECGCMHEDEPC_JLBFIJCNMHL_TypeDefinitionIndex = 55297;

class ECGCMHEDEPC_JLBFIJCNMHL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*>>* ONIFPCCBBLO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLBFIJCNMHL__CTOR_OFFSET))(this);
	}

	::System::Void KMCFAGJHOLB(::System::UInt32 MGMDLMBEDJF, ::MoleMole::UIInLevelNPCNameWidgetController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLBFIJCNMHL_KMCFAGJHOLB_OFFSET))(this, MGMDLMBEDJF, JOLDOMEIKEF);
	}
};
