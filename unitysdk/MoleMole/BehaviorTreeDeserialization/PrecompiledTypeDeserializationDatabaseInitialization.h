#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class PrecompiledTypeDeserializer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_EDBBFFMAAAP_OFFSET UNITYSDK_OFFSET(0x1E029DB0)
#define MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1E045B90)
#define MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_SETPRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZER_OFFSET UNITYSDK_OFFSET(0x1E029D50)

namespace MoleMole::BehaviorTreeDeserialization
{
	inline static constexpr unsigned int PrecompiledTypeDeserializationDatabaseInitialization_TypeDefinitionIndex = 95582;

	class PrecompiledTypeDeserializationDatabaseInitialization : public ::System::Object
	{
	public:
		static ::System::Void SetPrecompiledTypeDeserializationDatabaseInitializer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_SETPRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZER_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>* EDBBFFMAAAP()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_EDBBFFMAAAP_OFFSET))();
		}

		static ::System::Void JMDEKPONKMF(::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*& JOLOMBILNJJ)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_JMDEKPONKMF_OFFSET))(JOLOMBILNJJ);
		}
	};
}
