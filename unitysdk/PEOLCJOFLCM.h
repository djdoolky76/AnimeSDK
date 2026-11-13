#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEOLCJOFLCM_ABDJEHBGIIA_OFFSET UNITYSDK_OFFSET(0x14545D40)
#define PEOLCJOFLCM_CTOR_OFFSET UNITYSDK_OFFSET(0x145455D0)
#define PEOLCJOFLCM_DADLLGGIKHP_OFFSET UNITYSDK_OFFSET(0x14545B40)
#define PEOLCJOFLCM_EMCLKINMICK_OFFSET UNITYSDK_OFFSET(0x14545AF0)
#define PEOLCJOFLCM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14545990)
#define PEOLCJOFLCM_FILTER_OFFSET UNITYSDK_OFFSET(0x14545940)
#define PEOLCJOFLCM_GANAAOJCBHG_OFFSET UNITYSDK_OFFSET(0x14545BB0)
#define PEOLCJOFLCM_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x14545640)
#define PEOLCJOFLCM_LPECJOHCAFE_OFFSET UNITYSDK_OFFSET(0x14545CC0)

inline static constexpr unsigned int PEOLCJOFLCM_TypeDefinitionIndex = 79974;

	class PEOLCJOFLCM
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x28
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x30
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + PEOLCJOFLCM_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + PEOLCJOFLCM_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + PEOLCJOFLCM_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + PEOLCJOFLCM_EXECUTE_OFFSET))(this, a1);
		}

		::System::Boolean GANAAOJCBHG(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEOLCJOFLCM_GANAAOJCBHG_OFFSET))(this, a1);
		}

		::System::Void LPECJOHCAFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOLCJOFLCM_LPECJOHCAFE_OFFSET))(this);
		}

		::System::Void ABDJEHBGIIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOLCJOFLCM_ABDJEHBGIIA_OFFSET))(this);
		}

		::System::Void DADLLGGIKHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOLCJOFLCM_DADLLGGIKHP_OFFSET))(this);
		}

		::System::Void EMCLKINMICK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOLCJOFLCM_EMCLKINMICK_OFFSET))(this);
		}

	};
