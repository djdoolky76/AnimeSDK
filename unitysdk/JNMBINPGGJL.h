#pragma once
#include "unitysdk/unitysdk.h"
class DFMAEHCEIHC;
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNMBINPGGJL_AGDACAEONOH_OFFSET UNITYSDK_OFFSET(0x1B4C8460)
#define JNMBINPGGJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C7EA0)
#define JNMBINPGGJL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4C8260)
#define JNMBINPGGJL_FILTER_OFFSET UNITYSDK_OFFSET(0x1B4C8210)
#define JNMBINPGGJL_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B4C7F10)
#define JNMBINPGGJL_PDFJIGMPFEJ_OFFSET UNITYSDK_OFFSET(0x1B4C8600)

inline static constexpr unsigned int JNMBINPGGJL_TypeDefinitionIndex = 80027;

	class JNMBINPGGJL
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x30
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + JNMBINPGGJL_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + JNMBINPGGJL_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + JNMBINPGGJL_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + JNMBINPGGJL_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void PDFJIGMPFEJ(::DFMAEHCEIHC* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFMAEHCEIHC*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JNMBINPGGJL_PDFJIGMPFEJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGDACAEONOH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNMBINPGGJL_AGDACAEONOH_OFFSET))(this, a1);
		}

	};
