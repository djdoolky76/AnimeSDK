#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define GPPMPHICDEA_EDKMIMJONFL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10FFB620)
#define GPPMPHICDEA_EDKMIMJONFL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10FFBB30)
#define GPPMPHICDEA_EDKMIMJONFL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10FFBB90)
#define GPPMPHICDEA_EDKMIMJONFL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10FFBB40)
#define GPPMPHICDEA_EDKMIMJONFL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10FFB610)
#define GPPMPHICDEA_EDKMIMJONFL__CTOR_OFFSET UNITYSDK_OFFSET(0x10FFB600)

inline static constexpr unsigned int GPPMPHICDEA_EDKMIMJONFL_TypeDefinitionIndex = 42623;

class GPPMPHICDEA_EDKMIMJONFL : public ::System::Object
{
public:
	::System::String* FFCAOIMGJFK; // 0x10
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* GFKCABHFFEE; // 0x18
	::System::Object* IDBEJJEKGDI; // 0x20
	::UnityEngine::UI::Text* JAOFOJOANBN; // 0x28
	::System::Int64 PADJNMGMGHO; // 0x30
	::System::Single LOHNDMIDNBJ; // 0x38
	::System::Single EFJEPDPHGDF; // 0x3C
	::System::Int32 MNNOPCLCDML; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x44
	::System::Int64 KDEHMPGOCEP; // 0x48
	::System::Int32 AIEIFKNPLKD; // 0x50

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EDKMIMJONFL__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EDKMIMJONFL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EDKMIMJONFL_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EDKMIMJONFL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EDKMIMJONFL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EDKMIMJONFL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
