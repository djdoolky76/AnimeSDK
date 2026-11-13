#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IGroup_1; }

#define EMBIIOPMEFG_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0x199BCB30)
#define EMBIIOPMEFG_BALJKCPPLNL_OFFSET UNITYSDK_OFFSET(0x187CA5F0)
#define EMBIIOPMEFG_CTOR_OFFSET UNITYSDK_OFFSET(0x199BBAC0)
#define EMBIIOPMEFG_DCABECMIBHL_OFFSET UNITYSDK_OFFSET(0x187CA510)
#define EMBIIOPMEFG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x199BC240)
#define EMBIIOPMEFG_GDGLHDBAEED_OFFSET UNITYSDK_OFFSET(0x199BCAE0)
#define EMBIIOPMEFG_HHALDJAJJJB_OFFSET UNITYSDK_OFFSET(0x187CA1D0)
#define EMBIIOPMEFG_KECNEEEBODC_OFFSET UNITYSDK_OFFSET(0x199BC9D0)
#define EMBIIOPMEFG_PPCFOMLMHBM_OFFSET UNITYSDK_OFFSET(0x199BC4C0)
#define EMBIIOPMEFG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x199BC890)

inline static constexpr unsigned int EMBIIOPMEFG_TypeDefinitionIndex = 79985;

	class EMBIIOPMEFG : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* GJAPGJBIDKC; // 0x10
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* AFGMKOGHIEJ; // 0x18
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* HPCHHOLEGHC; // 0x20
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* CKFMEABAKAC; // 0x28
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x30
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x38
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_TEARDOWN_OFFSET))(this);
		}

		::System::Void GDGLHDBAEED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_GDGLHDBAEED_OFFSET))(this);
		}

		::System::Void KECNEEEBODC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_KECNEEEBODC_OFFSET))(this);
		}

		::System::Void PPCFOMLMHBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_PPCFOMLMHBM_OFFSET))(this);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

		::System::Void HHALDJAJJJB(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_HHALDJAJJJB_OFFSET))(this, a1);
		}

		::System::Void DCABECMIBHL(::LPHINGPIEAJ* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::Int32))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_DCABECMIBHL_OFFSET))(this, a1, a2);
		}

		::System::Void BALJKCPPLNL(::LPHINGPIEAJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMBIIOPMEFG_BALJKCPPLNL_OFFSET))(this, a1, a2);
		}

	};
