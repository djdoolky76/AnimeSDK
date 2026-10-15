#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJKBKIIFLKE.h"
#include "unitysdk/System/Object.h"
class ENDEBAMMJHJ;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAADOANALGB_CEJBEODMBBM_OFFSET UNITYSDK_OFFSET(0xB5D51E0)
#define LAADOANALGB_CLFPHDFCLJL_OFFSET UNITYSDK_OFFSET(0xB5D4DF0)
#define LAADOANALGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D4D90)
#define LAADOANALGB_MCKBHJNIBMJ_OFFSET UNITYSDK_OFFSET(0xB5D50F0)
#define LAADOANALGB_MNEEAMNELKC_OFFSET UNITYSDK_OFFSET(0xB5D51F0)
#define LAADOANALGB_ONJKDFCMPPI_OFFSET UNITYSDK_OFFSET(0xB5D50B0)

inline static constexpr unsigned int LAADOANALGB_TypeDefinitionIndex = 60189;

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
