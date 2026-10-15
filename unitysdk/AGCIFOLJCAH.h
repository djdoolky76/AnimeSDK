#pragma once
#include "unitysdk/unitysdk.h"
class BCLKDMAHONE;
class FDPALAEIHPB;
class MOEIAKJOONB;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGCIFOLJCAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C853F80)
#define AGCIFOLJCAH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C854220)
#define AGCIFOLJCAH_FILTER_OFFSET UNITYSDK_OFFSET(0x1C854120)
#define AGCIFOLJCAH_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C854000)

inline static constexpr unsigned int AGCIFOLJCAH_TypeDefinitionIndex = 42877;

	class AGCIFOLJCAH
	{
	public:
		::System::Collections::Generic::List_1<::MOEIAKJOONB*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + AGCIFOLJCAH_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::BCLKDMAHONE*>* GetTrigger(::Entitas::IContext_1<::BCLKDMAHONE*>* a1)
		{
			return ((::Entitas::ICollector_1<::BCLKDMAHONE*>*(*)(::PVOID, ::Entitas::IContext_1<::BCLKDMAHONE*>*))((::PBYTE)hIl2Cpp + AGCIFOLJCAH_GETTRIGGER_OFFSET))(this, a1);
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
