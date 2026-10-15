#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBOAMEBAOE.h"
class GELIALJDFBL;
namespace RPG::GameCore { class SelectorConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNHDGEHMMIO_BCMCICLDNJC_OFFSET UNITYSDK_OFFSET(0xBDD5FC0)
#define BNHDGEHMMIO_BNFFEHKCKMK_OFFSET UNITYSDK_OFFSET(0xBDD5DC0)
#define BNHDGEHMMIO_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0xBDD6180)
#define BNHDGEHMMIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBDD4FE0)
#define BNHDGEHMMIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD4F80)
#define BNHDGEHMMIO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDD5030)
#define BNHDGEHMMIO_DONLEIOIEHM_OFFSET UNITYSDK_OFFSET(0xBDD5A30)
#define BNHDGEHMMIO_FCLLGLNIHBK_OFFSET UNITYSDK_OFFSET(0xBDD6090)
#define BNHDGEHMMIO_HPPOGEJAKDN_OFFSET UNITYSDK_OFFSET(0xBDD5EC0)
#define BNHDGEHMMIO_KDNPFOLIIBL_OFFSET UNITYSDK_OFFSET(0xBDD51E0)
#define BNHDGEHMMIO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDD5190)
#define BNHDGEHMMIO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDD59E0)
#define BNHDGEHMMIO_TICK_OFFSET UNITYSDK_OFFSET(0xBDD5D10)

inline static constexpr unsigned int BNHDGEHMMIO_TypeDefinitionIndex = 54768;

	class BNHDGEHMMIO : public ::BNBOAMEBAOE
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* ECMFFNPIHGD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectorConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectorConfig*))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_TICK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::GELIALJDFBL*>* BCMCICLDNJC()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::GELIALJDFBL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_BCMCICLDNJC_OFFSET))(this);
		}

		::System::Void FCLLGLNIHBK(::RPG::GameCore::TaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_FCLLGLNIHBK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* CIADCOCBJDB()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_CIADCOCBJDB_OFFSET))(this);
		}

		::System::Void KDNPFOLIIBL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_KDNPFOLIIBL_OFFSET))(this, a1);
		}

		::System::Boolean HPPOGEJAKDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_HPPOGEJAKDN_OFFSET))(this);
		}

		::System::Boolean BNFFEHKCKMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_BNFFEHKCKMK_OFFSET))(this);
		}

		::System::Void DONLEIOIEHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHDGEHMMIO_DONLEIOIEHM_OFFSET))(this);
		}

	};
