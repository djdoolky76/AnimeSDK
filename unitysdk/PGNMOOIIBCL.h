#pragma once
#include "unitysdk/unitysdk.h"
class AFLCPIBOOFO;
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGNMOOIIBCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BA9C0)
#define PGNMOOIIBCL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C9BAC60)
#define PGNMOOIIBCL_FILTER_OFFSET UNITYSDK_OFFSET(0x1C9BAB60)
#define PGNMOOIIBCL_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C9BAA40)

inline static constexpr unsigned int PGNMOOIIBCL_TypeDefinitionIndex = 42871;

	class PGNMOOIIBCL
	{
	public:
		::System::Collections::Generic::List_1<::AFLCPIBOOFO*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + PGNMOOIIBCL_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + PGNMOOIIBCL_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + PGNMOOIIBCL_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + PGNMOOIIBCL_EXECUTE_OFFSET))(this, a1);
		}

	};
