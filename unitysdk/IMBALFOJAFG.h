#pragma once
#include "unitysdk/unitysdk.h"
class GDCBKFDNOCL;
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMBALFOJAFG_ADDNDLLBHIE_OFFSET UNITYSDK_OFFSET(0x1A5CC8B0)
#define IMBALFOJAFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CC3B0)
#define IMBALFOJAFG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A5CC600)
#define IMBALFOJAFG_FILTER_OFFSET UNITYSDK_OFFSET(0x1A5CC530)
#define IMBALFOJAFG_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A5CC410)

inline static constexpr unsigned int IMBALFOJAFG_TypeDefinitionIndex = 79982;

	class IMBALFOJAFG
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + IMBALFOJAFG_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + IMBALFOJAFG_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + IMBALFOJAFG_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + IMBALFOJAFG_EXECUTE_OFFSET))(this, a1);
		}

		static ::System::Boolean ADDNDLLBHIE(::System::Collections::Generic::List_1<::GDCBKFDNOCL*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::GDCBKFDNOCL*>*))((::PBYTE)hIl2Cpp + IMBALFOJAFG_ADDNDLLBHIE_OFFSET))(a1);
		}

	};
