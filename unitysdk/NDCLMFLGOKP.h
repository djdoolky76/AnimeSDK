#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class PDADGGHNJKF;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDCLMFLGOKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C915680)
#define NDCLMFLGOKP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C915980)
#define NDCLMFLGOKP_FILTER_OFFSET UNITYSDK_OFFSET(0x1C9158D0)
#define NDCLMFLGOKP_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C9157B0)

inline static constexpr unsigned int NDCLMFLGOKP_TypeDefinitionIndex = 42866;

	class NDCLMFLGOKP
	{
	public:
		::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* DBNOOEHAEAC; // 0x28
		::Entitas::IGroup_1<::KHPOKIKCOFO*>* PMBNNOOFAOM; // 0x30
		::System::Collections::Generic::List_1<::PDADGGHNJKF*>* BGKHCJPFFLN; // 0x38
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + NDCLMFLGOKP_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + NDCLMFLGOKP_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + NDCLMFLGOKP_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + NDCLMFLGOKP_EXECUTE_OFFSET))(this, a1);
		}

	};
