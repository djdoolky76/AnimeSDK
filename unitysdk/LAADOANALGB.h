#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJKBKIIFLKE.h"
#include "unitysdk/System/Object.h"
class ENDEBAMMJHJ;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAADOANALGB_CEJBEODMBBM_OFFSET UNITYSDK_OFFSET(0x1B271EC0)
#define LAADOANALGB_CLFPHDFCLJL_OFFSET UNITYSDK_OFFSET(0x1B271A80)
#define LAADOANALGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2719E0)
#define LAADOANALGB_MCKBHJNIBMJ_OFFSET UNITYSDK_OFFSET(0x1B271DD0)
#define LAADOANALGB_MNEEAMNELKC_OFFSET UNITYSDK_OFFSET(0x1B271ED0)
#define LAADOANALGB_ONJKDFCMPPI_OFFSET UNITYSDK_OFFSET(0x1B271D90)

inline static constexpr unsigned int LAADOANALGB_TypeDefinitionIndex = 61473;

	class LAADOANALGB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EJKBKIIFLKE>* MFGEADHPLHO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAADOANALGB_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EJKBKIIFLKE>* ONJKDFCMPPI()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EJKBKIIFLKE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAADOANALGB_ONJKDFCMPPI_OFFSET))(this);
		}

		::ENDEBAMMJHJ* MCKBHJNIBMJ()
		{
			return ((::ENDEBAMMJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAADOANALGB_MCKBHJNIBMJ_OFFSET))(this);
		}

		::System::Boolean CEJBEODMBBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAADOANALGB_CEJBEODMBBM_OFFSET))(this);
		}

		::System::Int32 MNEEAMNELKC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAADOANALGB_MNEEAMNELKC_OFFSET))(this);
		}

		::System::Void CLFPHDFCLJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAADOANALGB_CLFPHDFCLJL_OFFSET))(this);
		}

	};
