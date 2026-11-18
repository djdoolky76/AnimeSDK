#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCMENEMPLGF_NIALPKNLOOJ_GICGBDGFAHO_OFFSET UNITYSDK_OFFSET(0x11955F70)
#define PCMENEMPLGF_NIALPKNLOOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11955F60)

inline static constexpr unsigned int PCMENEMPLGF_NIALPKNLOOJ_TypeDefinitionIndex = 62866;

class PCMENEMPLGF_NIALPKNLOOJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* FNLFIGOIPMM; // 0x10
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MJMEDDHCABL; // 0x20
	::System::Int32 EOGLMAEPALE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NIALPKNLOOJ__CTOR_OFFSET))(this);
	}

	::System::Void GICGBDGFAHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NIALPKNLOOJ_GICGBDGFAHO_OFFSET))(this);
	}
};
