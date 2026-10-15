#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class MKNPPBCJPCO;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJJIBNNEOGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88D880)
#define BJJIBNNEOGL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C88DB20)
#define BJJIBNNEOGL_FILTER_OFFSET UNITYSDK_OFFSET(0x1C88DA20)
#define BJJIBNNEOGL_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C88D900)

inline static constexpr unsigned int BJJIBNNEOGL_TypeDefinitionIndex = 42864;

	class BJJIBNNEOGL
	{
	public:
		::System::Collections::Generic::List_1<::MKNPPBCJPCO*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + BJJIBNNEOGL_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + BJJIBNNEOGL_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + BJJIBNNEOGL_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + BJJIBNNEOGL_EXECUTE_OFFSET))(this, a1);
		}

	};
