#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGGLKGAEBAN_CTOR_OFFSET UNITYSDK_OFFSET(0x14518610)
#define EGGLKGAEBAN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14518880)
#define EGGLKGAEBAN_FILTER_OFFSET UNITYSDK_OFFSET(0x14518740)
#define EGGLKGAEBAN_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x14518670)

inline static constexpr unsigned int EGGLKGAEBAN_TypeDefinitionIndex = 75779;

	class EGGLKGAEBAN
	{
	public:
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + EGGLKGAEBAN_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + EGGLKGAEBAN_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + EGGLKGAEBAN_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + EGGLKGAEBAN_EXECUTE_OFFSET))(this, a1);
		}

	};
