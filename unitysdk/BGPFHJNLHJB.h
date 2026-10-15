#pragma once
#include "unitysdk/unitysdk.h"
class CCJFANKEDJD;
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BGPFHJNLHJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88C3E0)
#define BGPFHJNLHJB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C88C680)
#define BGPFHJNLHJB_FILTER_OFFSET UNITYSDK_OFFSET(0x1C88C580)
#define BGPFHJNLHJB_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C88C460)

inline static constexpr unsigned int BGPFHJNLHJB_TypeDefinitionIndex = 42873;

	class BGPFHJNLHJB
	{
	public:
		::System::Collections::Generic::List_1<::CCJFANKEDJD*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + BGPFHJNLHJB_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + BGPFHJNLHJB_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + BGPFHJNLHJB_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + BGPFHJNLHJB_EXECUTE_OFFSET))(this, a1);
		}

	};
