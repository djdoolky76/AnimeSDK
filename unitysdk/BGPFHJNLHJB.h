#pragma once
#include "unitysdk/unitysdk.h"
class CCJFANKEDJD;
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BGPFHJNLHJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BA520)
#define BGPFHJNLHJB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C8BA7C0)
#define BGPFHJNLHJB_FILTER_OFFSET UNITYSDK_OFFSET(0x1C8BA6C0)
#define BGPFHJNLHJB_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C8BA5A0)

inline static constexpr unsigned int BGPFHJNLHJB_TypeDefinitionIndex = 42873;

	class BGPFHJNLHJB
	{
	public:
		::System::Collections::Generic::List_1<::CCJFANKEDJD*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + BGPFHJNLHJB_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + BGPFHJNLHJB_GETTRIGGER_OFFSET))(this, a1);
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
