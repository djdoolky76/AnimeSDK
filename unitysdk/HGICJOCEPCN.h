#pragma once
#include "unitysdk/unitysdk.h"
class EFHNDMENDHI;
class FDPALAEIHPB;
class JKLGDLGFOPI;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGICJOCEPCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACA660)
#define HGICJOCEPCN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CACA900)
#define HGICJOCEPCN_FILTER_OFFSET UNITYSDK_OFFSET(0x1CACA800)
#define HGICJOCEPCN_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1CACA6E0)

inline static constexpr unsigned int HGICJOCEPCN_TypeDefinitionIndex = 42869;

	class HGICJOCEPCN
	{
	public:
		::System::Collections::Generic::List_1<::JKLGDLGFOPI*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + HGICJOCEPCN_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + HGICJOCEPCN_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::EFHNDMENDHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + HGICJOCEPCN_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::EFHNDMENDHI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EFHNDMENDHI*>*))((::PBYTE)hIl2Cpp + HGICJOCEPCN_EXECUTE_OFFSET))(this, a1);
		}

	};
