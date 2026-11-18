#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class IFLPGOKHDJI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION_CHECKEXECUTE_OFFSET UNITYSDK_OFFSET(0x7A9BC0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7A9BD0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x7A9B90)

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FMemberAliveStateCheckAction_TypeDefinitionIndex = 84059;

	struct alignas(8) FMemberAliveStateCheckAction
	{
		::System::String* Name; // 0x10
		::Foundation::ViewObject::ViewObjectHandle GroupHandle; // 0x18
		::IFLPGOKHDJI* Graph; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* TargetList; // 0x30

		::System::Void _ctor(::System::String* name, ::Foundation::ViewObject::ViewObjectHandle groupHandle, ::IFLPGOKHDJI* graph, ::System::Collections::Generic::List_1<::System::Int32>* targetList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::IFLPGOKHDJI*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION__CTOR_OFFSET))(this, name, groupHandle, graph, targetList);
		}

		::System::Boolean CheckExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION_CHECKEXECUTE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION_DISPOSE_OFFSET))(this);
		}
	};
}
