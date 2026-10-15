#pragma once
#include "unitysdk/unitysdk.h"
class BAIMNJOBDOD;
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HDCJCABMEIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C30AC0)
#define HDCJCABMEIG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15C30D00)
#define HDCJCABMEIG_FILTER_OFFSET UNITYSDK_OFFSET(0x15C30C40)
#define HDCJCABMEIG_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x15C30B20)

inline static constexpr unsigned int HDCJCABMEIG_TypeDefinitionIndex = 75782;

	class HDCJCABMEIG
	{
	public:
		::BAIMNJOBDOD* EGDPBMBBACG; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BAIMNJOBDOD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BAIMNJOBDOD*))((::PBYTE)hIl2Cpp + HDCJCABMEIG_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + HDCJCABMEIG_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + HDCJCABMEIG_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + HDCJCABMEIG_EXECUTE_OFFSET))(this, a1);
		}

	};
