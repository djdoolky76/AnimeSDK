#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class MKNPPBCJPCO;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJJIBNNEOGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BB9C0)
#define BJJIBNNEOGL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C8BBC60)
#define BJJIBNNEOGL_FILTER_OFFSET UNITYSDK_OFFSET(0x1C8BBB60)
#define BJJIBNNEOGL_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C8BBA40)

	class BJJIBNNEOGL
	{
	public:
		::System::Collections::Generic::List_1<::MKNPPBCJPCO*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + BJJIBNNEOGL_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + BJJIBNNEOGL_GETTRIGGER_OFFSET))(this, a1);
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
