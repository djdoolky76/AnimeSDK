#pragma once
#include "unitysdk/unitysdk.h"
class EOLDAGHJDPI;
class GIFNELLKBFE;
class KHPOKIKCOFO;
class PLAGENLANML;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OIEKEIAHPIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C994A90)
#define OIEKEIAHPIB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C994D20)
#define OIEKEIAHPIB_FILTER_OFFSET UNITYSDK_OFFSET(0x1C994C30)
#define OIEKEIAHPIB_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C994B10)

inline static constexpr unsigned int OIEKEIAHPIB_TypeDefinitionIndex = 42167;

	class OIEKEIAHPIB
	{
	public:
		::EOLDAGHJDPI* OFJNMDOGNDP; // 0x28
		::PLAGENLANML* MBKIEFPKECG; // 0x30
		::System::Boolean EGPMPLCFHEG; // 0x38
		::System::Void _ctor(::PLAGENLANML* a1, ::GIFNELLKBFE* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::GIFNELLKBFE*, ::System::Boolean))((::PBYTE)hIl2Cpp + OIEKEIAHPIB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + OIEKEIAHPIB_GETTRIGGER_OFFSET))(this, a1);
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
