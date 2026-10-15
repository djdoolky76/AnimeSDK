#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromiseInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHPMNMMGLHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB493F40)
#define BHPMNMMGLHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB493DF0)
#define BHPMNMMGLHI_OFBAIDIPKBI_OFFSET UNITYSDK_OFFSET(0xB493CE0)

	class BHPMNMMGLHI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::System::Action*>*>* HFAEJDDKEOJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::RPG::Client::Promises::IPromiseInfo*>* FIMFDOLGEBE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPMNMMGLHI_CTOR_OFFSET))(this);
		}

		::System::Void OFBAIDIPKBI(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + BHPMNMMGLHI_OFBAIDIPKBI_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPMNMMGLHI_DISPOSE_OFFSET))(this);
		}

	};
