#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_DERIVEDSERIALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF61F80)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree_DerivedSerializationData_TypeDefinitionIndex = 30490;

	class DialogueTree_DerivedSerializationData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* actorParameters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_DERIVEDSERIALIZATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
