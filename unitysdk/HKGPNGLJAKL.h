#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ClickBehaviour.h"
class DGGKHIDCGIE;
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKGPNGLJAKL_ALDIKBDNFFE_OFFSET UNITYSDK_OFFSET(0x16C98BA0)
#define HKGPNGLJAKL_CTOR_OFFSET UNITYSDK_OFFSET(0x16C981B0)
#define HKGPNGLJAKL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16C98830)
#define HKGPNGLJAKL_FILTER_OFFSET UNITYSDK_OFFSET(0x16C98730)
#define HKGPNGLJAKL_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x16C984C0)

inline static constexpr unsigned int HKGPNGLJAKL_TypeDefinitionIndex = 80000;

	class HKGPNGLJAKL
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ComicDessert::ClickBehaviour, ::DGGKHIDCGIE*>* LGEKBEEHKPC; // 0x28
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x30
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x38
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + HKGPNGLJAKL_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + HKGPNGLJAKL_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + HKGPNGLJAKL_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + HKGPNGLJAKL_EXECUTE_OFFSET))(this, a1);
		}

		::System::Boolean ALDIKBDNFFE(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + HKGPNGLJAKL_ALDIKBDNFFE_OFFSET))(this, a1);
		}

	};
