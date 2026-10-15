#pragma once
#include "unitysdk/unitysdk.h"
class BCLKDMAHONE;
class FDPALAEIHPB;
class MOEIAKJOONB;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGCIFOLJCAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8820C0)
#define AGCIFOLJCAH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C882360)
#define AGCIFOLJCAH_FILTER_OFFSET UNITYSDK_OFFSET(0x1C882260)
#define AGCIFOLJCAH_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C882140)

	class AGCIFOLJCAH
	{
	public:
		::System::Collections::Generic::List_1<::MOEIAKJOONB*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + AGCIFOLJCAH_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + AGCIFOLJCAH_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::BCLKDMAHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + AGCIFOLJCAH_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::BCLKDMAHONE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BCLKDMAHONE*>*))((::PBYTE)hIl2Cpp + AGCIFOLJCAH_EXECUTE_OFFSET))(this, a1);
		}

	};
