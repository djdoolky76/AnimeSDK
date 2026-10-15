#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMCFDLNCGGA_CTOR_OFFSET UNITYSDK_OFFSET(0x155245F0)
#define EMCFDLNCGGA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15524810)
#define EMCFDLNCGGA_FILTER_OFFSET UNITYSDK_OFFSET(0x15524710)
#define EMCFDLNCGGA_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x15524640)

inline static constexpr unsigned int EMCFDLNCGGA_TypeDefinitionIndex = 75782;

	class EMCFDLNCGGA
	{
	public:
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + EMCFDLNCGGA_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + EMCFDLNCGGA_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + EMCFDLNCGGA_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + EMCFDLNCGGA_EXECUTE_OFFSET))(this, a1);
		}

	};
