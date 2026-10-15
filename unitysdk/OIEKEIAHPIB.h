#pragma once
#include "unitysdk/unitysdk.h"
class EOLDAGHJDPI;
class GIFNELLKBFE;
class KHPOKIKCOFO;
class PLAGENLANML;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OIEKEIAHPIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9667C0)
#define OIEKEIAHPIB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C966A50)
#define OIEKEIAHPIB_FILTER_OFFSET UNITYSDK_OFFSET(0x1C966960)
#define OIEKEIAHPIB_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C966840)

inline static constexpr unsigned int OIEKEIAHPIB_TypeDefinitionIndex = 42167;

	class OIEKEIAHPIB
	{
	public:
		::PLAGENLANML* MBKIEFPKECG; // 0x28
		::EOLDAGHJDPI* OFJNMDOGNDP; // 0x30
		::System::Boolean EGPMPLCFHEG; // 0x38
		::System::Void _ctor(::PLAGENLANML* a1, ::GIFNELLKBFE* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::GIFNELLKBFE*, ::System::Boolean))((::PBYTE)hIl2Cpp + OIEKEIAHPIB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + OIEKEIAHPIB_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + OIEKEIAHPIB_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + OIEKEIAHPIB_EXECUTE_OFFSET))(this, a1);
		}

	};
