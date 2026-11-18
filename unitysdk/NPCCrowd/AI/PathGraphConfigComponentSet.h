#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphConfigComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHCONFIGCOMPONENTSET_GET_ENUMERATOR_OFFSET UNITYSDK_OFFSET(0x105D2EB0)
#define NPCCROWD_AI_PATHGRAPHCONFIGCOMPONENTSET__CTOR_OFFSET UNITYSDK_OFFSET(0x105D2F40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConfigComponentSet_TypeDefinitionIndex = 59662;

	class PathGraphConfigComponentSet : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphConfigComponent*>* components; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONFIGCOMPONENTSET__CTOR_OFFSET))(this);
		}

		::System::Object* get_Enumerator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONFIGCOMPONENTSET_GET_ENUMERATOR_OFFSET))(this);
		}
	};
}
