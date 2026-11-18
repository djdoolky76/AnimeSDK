#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_GROUPLEVELRESOLVER_GETASSOCIATEDMEMBERS_OFFSET UNITYSDK_OFFSET(0xF1532E0)
#define NPCCROWD_GROUPLEVELRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0xF1539A0)

namespace NPCCrowd
{
	inline static constexpr unsigned int GroupLevelResolver_TypeDefinitionIndex = 58440;

	class GroupLevelResolver : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GROUPLEVELRESOLVER__CTOR_OFFSET))(this);
		}

		::System::Void GetAssociatedMembers(::Foundation::ViewObject::ViewObjectHandle npcHandle, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* results)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_GROUPLEVELRESOLVER_GETASSOCIATEDMEMBERS_OFFSET))(this, npcHandle, results);
		}
	};
}
