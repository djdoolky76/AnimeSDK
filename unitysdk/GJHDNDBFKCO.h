#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJHDNDBFKCO_ELFJMEJJEJH.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FBICDIEGANJ;
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GJHDNDBFKCO_BIMBNNOLKEM_OFFSET UNITYSDK_OFFSET(0x169A5ED0)
#define GJHDNDBFKCO_BPGPEFEIJEO_OFFSET UNITYSDK_OFFSET(0x169A5FB0)
#define GJHDNDBFKCO_CHKAEMLFNNP_OFFSET UNITYSDK_OFFSET(0x169A6560)
#define GJHDNDBFKCO_CTOR_OFFSET UNITYSDK_OFFSET(0x169A5290)
#define GJHDNDBFKCO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x169A5770)
#define GJHDNDBFKCO_FILTER_OFFSET UNITYSDK_OFFSET(0x169A5580)
#define GJHDNDBFKCO_GDGLHDBAEED_OFFSET UNITYSDK_OFFSET(0x169A6770)
#define GJHDNDBFKCO_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x169A5300)
#define GJHDNDBFKCO_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x169A6240)
#define GJHDNDBFKCO_OOGJFJGNOAO_OFFSET UNITYSDK_OFFSET(0x169A67D0)

inline static constexpr unsigned int GJHDNDBFKCO_TypeDefinitionIndex = 80002;

	class GJHDNDBFKCO
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x30
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void GDGLHDBAEED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_GDGLHDBAEED_OFFSET))(this);
		}

		::GJHDNDBFKCO_ELFJMEJJEJH BPGPEFEIJEO(::LPHINGPIEAJ* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::GJHDNDBFKCO_ELFJMEJJEJH(*)(::PVOID, ::LPHINGPIEAJ*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_BPGPEFEIJEO_OFFSET))(this, a1, a2);
		}

		::System::Void JDPGFIBLFOP(::LPHINGPIEAJ* a1, ::System::Boolean a2, ::GJHDNDBFKCO_ELFJMEJJEJH a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::Boolean, ::GJHDNDBFKCO_ELFJMEJJEJH, ::System::Boolean))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_JDPGFIBLFOP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OOGJFJGNOAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_OOGJFJGNOAO_OFFSET))(this);
		}

		static ::System::Void CHKAEMLFNNP(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_CHKAEMLFNNP_OFFSET))(a1);
		}

		::FBICDIEGANJ* BIMBNNOLKEM(::LPHINGPIEAJ* a1)
		{
			return ((::FBICDIEGANJ*(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_BIMBNNOLKEM_OFFSET))(this, a1);
		}

	};
