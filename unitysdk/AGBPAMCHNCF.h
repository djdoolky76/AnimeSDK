#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class NKNLHELEAMN;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGBPAMCHNCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8818A0)
#define AGBPAMCHNCF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C881B40)
#define AGBPAMCHNCF_FILTER_OFFSET UNITYSDK_OFFSET(0x1C881A40)
#define AGBPAMCHNCF_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C881920)

inline static constexpr unsigned int AGBPAMCHNCF_TypeDefinitionIndex = 42872;

	class AGBPAMCHNCF
	{
	public:
		::System::Collections::Generic::List_1<::NKNLHELEAMN*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + AGBPAMCHNCF_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + AGBPAMCHNCF_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + AGBPAMCHNCF_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + AGBPAMCHNCF_EXECUTE_OFFSET))(this, a1);
		}

	};
