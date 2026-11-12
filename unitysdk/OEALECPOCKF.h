#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEALECPOCKF_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B4E20)
#define OEALECPOCKF_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC6B50B0)
#define OEALECPOCKF_FILTER_OFFSET UNITYSDK_OFFSET(0xC6B4FB0)
#define OEALECPOCKF_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0xC6B4E90)

inline static constexpr unsigned int OEALECPOCKF_TypeDefinitionIndex = 80005;

	class OEALECPOCKF
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x28
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x30
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + OEALECPOCKF_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + OEALECPOCKF_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + OEALECPOCKF_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + OEALECPOCKF_EXECUTE_OFFSET))(this, a1);
		}

	};
