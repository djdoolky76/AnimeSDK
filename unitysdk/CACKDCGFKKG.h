#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CACKDCGFKKG_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xCB5FEE0)
#define CACKDCGFKKG_CTOR_OFFSET UNITYSDK_OFFSET(0xCB5F520)
#define CACKDCGFKKG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCB5F810)
#define CACKDCGFKKG_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xCB5F9C0)
#define CACKDCGFKKG_FILTER_OFFSET UNITYSDK_OFFSET(0xCB5F760)
#define CACKDCGFKKG_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0xCB5F640)
#define CACKDCGFKKG_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xCB5FC60)
#define CACKDCGFKKG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xCB5FDB0)

inline static constexpr unsigned int CACKDCGFKKG_TypeDefinitionIndex = 80013;

	class CACKDCGFKKG
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x30
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + CACKDCGFKKG_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + CACKDCGFKKG_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + CACKDCGFKKG_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + CACKDCGFKKG_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACKDCGFKKG_TEARDOWN_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + CACKDCGFKKG_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void NMPLHCJKEOI(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + CACKDCGFKKG_NMPLHCJKEOI_OFFSET))(this, a1);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CACKDCGFKKG_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

	};
