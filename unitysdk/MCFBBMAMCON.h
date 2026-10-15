#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BHAKOFNIGMN;
class HEKAMNMEEOK;
namespace RPG::Client { class PrefabLoadMeta; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCFBBMAMCON_CTOR_OFFSET UNITYSDK_OFFSET(0xB878930)
#define MCFBBMAMCON_DDPPBKPJGJN_OFFSET UNITYSDK_OFFSET(0xB8787E0)
#define MCFBBMAMCON_DENMNAKJFMD_OFFSET UNITYSDK_OFFSET(0xB878040)
#define MCFBBMAMCON_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB877F90)
#define MCFBBMAMCON_FACKKPEKKKO_OFFSET UNITYSDK_OFFSET(0xB877FE0)
#define MCFBBMAMCON_IHEGMBKMFIC_OFFSET UNITYSDK_OFFSET(0xB878470)
#define MCFBBMAMCON_KJMOANBLPFC_OFFSET UNITYSDK_OFFSET(0xB8788E0)
#define MCFBBMAMCON_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB878610)
#define MCFBBMAMCON_PACMHPGMNAM_OFFSET UNITYSDK_OFFSET(0xB878300)
#define MCFBBMAMCON__ONBIND_OFFSET UNITYSDK_OFFSET(0xB877F30)

inline static constexpr unsigned int MCFBBMAMCON_TypeDefinitionIndex = 71274;

	class MCFBBMAMCON : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::BHAKOFNIGMN*>* BEOJBPMIHJH; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::System::Collections::Generic::List_1<::HEKAMNMEEOK*>* KBBMLIADILP; // 0x70
		::RPG::Client::PrefabLoadMeta* KOHKMHPKAJO; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFBBMAMCON_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFBBMAMCON__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MCFBBMAMCON_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void FACKKPEKKKO(::System::Collections::Generic::List_1<::HEKAMNMEEOK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HEKAMNMEEOK*>*))((::PBYTE)hIl2Cpp + MCFBBMAMCON_FACKKPEKKKO_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFBBMAMCON_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void DDPPBKPJGJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFBBMAMCON_DDPPBKPJGJN_OFFSET))(this);
		}

		::System::Void DENMNAKJFMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFBBMAMCON_DENMNAKJFMD_OFFSET))(this);
		}

		::System::Void PACMHPGMNAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFBBMAMCON_PACMHPGMNAM_OFFSET))(this);
		}

		::System::Void IHEGMBKMFIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFBBMAMCON_IHEGMBKMFIC_OFFSET))(this);
		}

		::System::Int32 KJMOANBLPFC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFBBMAMCON_KJMOANBLPFC_OFFSET))(this);
		}

	};
