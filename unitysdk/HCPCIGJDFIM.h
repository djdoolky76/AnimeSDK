#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCPCIGJDFIM_CTOR_OFFSET UNITYSDK_OFFSET(0x16B72250)
#define HCPCIGJDFIM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16B724D0)
#define HCPCIGJDFIM_FILTER_OFFSET UNITYSDK_OFFSET(0x16B723D0)
#define HCPCIGJDFIM_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x16B722B0)
#define HCPCIGJDFIM_PPHFGPNOLNK_OFFSET UNITYSDK_OFFSET(0x16B725F0)

inline static constexpr unsigned int HCPCIGJDFIM_TypeDefinitionIndex = 80030;

	class HCPCIGJDFIM
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + HCPCIGJDFIM_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + HCPCIGJDFIM_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + HCPCIGJDFIM_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + HCPCIGJDFIM_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void PPHFGPNOLNK(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + HCPCIGJDFIM_PPHFGPNOLNK_OFFSET))(this, a1);
		}

	};
