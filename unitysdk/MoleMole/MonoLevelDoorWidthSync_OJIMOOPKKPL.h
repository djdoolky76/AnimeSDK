#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_OJIMOOPKKPL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13EFCB60)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_OJIMOOPKKPL__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFCB50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelDoorWidthSync_OJIMOOPKKPL_TypeDefinitionIndex = 72687;

	class MonoLevelDoorWidthSync_OJIMOOPKKPL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Int16>*>* JDFFCGJPHDO; // 0x10
		::System::Single OHBELMJILHB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_OJIMOOPKKPL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single JBGLCAFPGHK, ::System::Single GEPCAMBFMPH, ::System::Int16 CEMIPEBJGJG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int16))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_OJIMOOPKKPL__CTOR_1_OFFSET))(this, JBGLCAFPGHK, GEPCAMBFMPH, CEMIPEBJGJG);
		}
	};
}
