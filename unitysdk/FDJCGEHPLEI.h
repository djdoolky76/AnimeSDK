#pragma once
#include "unitysdk/unitysdk.h"
class BOGCBDLBHFK;
class FDPALAEIHPB;
class GAIMCNKMJMD;
class PEMFMPIPNJN;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDJCGEHPLEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA665A0)
#define FDJCGEHPLEI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CA667F0)
#define FDJCGEHPLEI_FILTER_OFFSET UNITYSDK_OFFSET(0x1CA66730)
#define FDJCGEHPLEI_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1CA66610)
#define FDJCGEHPLEI_IKHJMENJMHJ_OFFSET UNITYSDK_OFFSET(0x1CA66A20)

inline static constexpr unsigned int FDJCGEHPLEI_TypeDefinitionIndex = 42487;

	class FDJCGEHPLEI
	{
	public:
		::GAIMCNKMJMD* HINDODOFCLK; // 0x28
		::FDPALAEIHPB* FKINCGODJEP; // 0x30
		::System::Void _ctor(::FDPALAEIHPB* a1, ::PEMFMPIPNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::PEMFMPIPNJN*))((::PBYTE)hIl2Cpp + FDJCGEHPLEI_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + FDJCGEHPLEI_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::BOGCBDLBHFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOGCBDLBHFK*))((::PBYTE)hIl2Cpp + FDJCGEHPLEI_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::BOGCBDLBHFK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BOGCBDLBHFK*>*))((::PBYTE)hIl2Cpp + FDJCGEHPLEI_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void IKHJMENJMHJ(::BOGCBDLBHFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOGCBDLBHFK*))((::PBYTE)hIl2Cpp + FDJCGEHPLEI_IKHJMENJMHJ_OFFSET))(this, a1);
		}

	};
