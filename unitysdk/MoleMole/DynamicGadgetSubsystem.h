#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_CANCREATE_OFFSET UNITYSDK_OFFSET(0x1B94B600)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_CONSUME_OFFSET UNITYSDK_OFFSET(0x1B94B930)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_GET_REMAININGCOUNT_OFFSET UNITYSDK_OFFSET(0x1B94B5F0)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B94B2E0)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B94B230)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94B970)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B94B990)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicGadgetSubsystem_TypeDefinitionIndex = 72316;

	class DynamicGadgetSubsystem
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* _limitedZKRewardIDSet; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* _limitedVOIDSet; // 0x18
		::System::Int32 _maxNum; // 0x20
		::System::Int32 _usedCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 maxNum, ::System::Collections::Generic::List_1<::System::Int32>* limitedVOIDList, ::System::Collections::Generic::List_1<::System::Int32>* limitedZKRewardIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_INITIALIZE_OFFSET))(this, maxNum, limitedVOIDList, limitedZKRewardIDList);
		}

		::System::Int32 get_RemainingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_GET_REMAININGCOUNT_OFFSET))(this);
		}

		::System::Boolean CanCreate(::System::Int32 viewObjectID, ::System::String*& reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_CANCREATE_OFFSET))(this, viewObjectID, reason);
		}

		::System::Void Consume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_CONSUME_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
