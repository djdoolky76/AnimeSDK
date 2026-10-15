#pragma once
#include "unitysdk/unitysdk.h"
class EOLDAGHJDPI;
class GIFNELLKBFE;
class KHPOKIKCOFO;
class PLAGENLANML;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOEOHKNBMOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C975C20)
#define NOEOHKNBMOP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C975F20)
#define NOEOHKNBMOP_FILTER_OFFSET UNITYSDK_OFFSET(0x1C975DB0)
#define NOEOHKNBMOP_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C975C90)

inline static constexpr unsigned int NOEOHKNBMOP_TypeDefinitionIndex = 42168;

	class NOEOHKNBMOP
	{
	public:
		::EOLDAGHJDPI* OFJNMDOGNDP; // 0x28
		::PLAGENLANML* MBKIEFPKECG; // 0x30
		::System::Void _ctor(::PLAGENLANML* a1, ::GIFNELLKBFE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::GIFNELLKBFE*))((::PBYTE)hIl2Cpp + NOEOHKNBMOP_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + NOEOHKNBMOP_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + NOEOHKNBMOP_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + NOEOHKNBMOP_EXECUTE_OFFSET))(this, a1);
		}

	};
