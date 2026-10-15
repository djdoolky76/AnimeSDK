#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class MDNCCFLNJFG;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGLFINGIMOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA12E40)
#define DGLFINGIMOE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CA29220)
#define DGLFINGIMOE_FILTER_OFFSET UNITYSDK_OFFSET(0x1CA29120)
#define DGLFINGIMOE_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1CA29000)

inline static constexpr unsigned int DGLFINGIMOE_TypeDefinitionIndex = 42863;

	class DGLFINGIMOE
	{
	public:
		::System::Collections::Generic::List_1<::MDNCCFLNJFG*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + DGLFINGIMOE_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + DGLFINGIMOE_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + DGLFINGIMOE_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + DGLFINGIMOE_EXECUTE_OFFSET))(this, a1);
		}

	};
