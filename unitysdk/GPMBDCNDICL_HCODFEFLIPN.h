#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPMBDCNDICL_HCODFEFLIPN__CTOR_OFFSET UNITYSDK_OFFSET(0x17A30890)

inline static constexpr unsigned int GPMBDCNDICL_HCODFEFLIPN_TypeDefinitionIndex = 76848;

class GPMBDCNDICL_HCODFEFLIPN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* IBIAPDHOEMB; // 0x10
	::MoleMole::Config::MonsterFunctionType IHNJJIJJJJG; // 0x18
	::System::UInt32 CCMBEHEDOED; // 0x1C
	::MoleMole::Config::MonsterFunctionType IIOJILIIJGN; // 0x20
	::System::Int32 IIFMJFJOOCK; // 0x24
	::System::Single CDALFIJGDPB; // 0x28
	::System::Boolean KDJLPDNALMH; // 0x2C
	::System::Byte _padding0[0x3];
	::System::UInt32 FJHKFEJAKMD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMBDCNDICL_HCODFEFLIPN__CTOR_OFFSET))(this);
	}
};
