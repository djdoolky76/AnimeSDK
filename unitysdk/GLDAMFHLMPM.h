#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLDAMFHLMPM_ModeType.h"
#include "unitysdk/GLDAMFHLMPM_UIControllerType.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GLDAMFHLMPM_MHIDKLJJCKF.h"
class CELJIBODCAG;
class MEOKEBKGCJG;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLDAMFHLMPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15AAEA00)
#define GLDAMFHLMPM_DEHBEKNBJGM_OFFSET UNITYSDK_OFFSET(0x15AAE710)
#define GLDAMFHLMPM_DHDGCKLIDIM_OFFSET UNITYSDK_OFFSET(0x15AAE850)
#define GLDAMFHLMPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AAD0D0)
#define GLDAMFHLMPM_EDNJFHGLFLC_OFFSET UNITYSDK_OFFSET(0x15AAD260)
#define GLDAMFHLMPM_EONJGFAMFMA_OFFSET UNITYSDK_OFFSET(0x15AAD360)
#define GLDAMFHLMPM_HFGNGBOEJBB_OFFSET UNITYSDK_OFFSET(0x15AADF40)
#define GLDAMFHLMPM_IIJCLLCODKE_OFFSET UNITYSDK_OFFSET(0x15AAE8B0)
#define GLDAMFHLMPM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15AAD120)
#define GLDAMFHLMPM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15AACF00)
#define GLDAMFHLMPM_NHIIHNKGOGD_OFFSET UNITYSDK_OFFSET(0x15AAE580)
#define GLDAMFHLMPM_OEBAIFMNCOL_OFFSET UNITYSDK_OFFSET(0x15AAE050)
#define GLDAMFHLMPM_PBOMNPMKLKE_OFFSET UNITYSDK_OFFSET(0x15AAE1B0)

	class GLDAMFHLMPM : public ::System::Object
	{
	public:
		::System::String* KJALBAODJCH; // 0x10
		::CELJIBODCAG* ECGMNGNAFBI; // 0x18
		::System::String* OBHKMLEJONI; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudUIBattlePosRegion, ::MEOKEBKGCJG*>* CDKOLBHPCIJ; // 0x28
		::System::Single KDKGDKCKINH; // 0x30
		// static const ::System::Object LNBMMPPIDNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::GLDAMFHLMPM_MHIDKLJJCKF EDNJFHGLFLC()
		{
			return ((::GLDAMFHLMPM_MHIDKLJJCKF(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_EDNJFHGLFLC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* PBOMNPMKLKE()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_PBOMNPMKLKE_OFFSET))(this);
		}

		::System::Void NHIIHNKGOGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_NHIIHNKGOGD_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* EONJGFAMFMA(::GLDAMFHLMPM_MHIDKLJJCKF a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::GLDAMFHLMPM_MHIDKLJJCKF))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_EONJGFAMFMA_OFFSET))(this, a1);
		}

		::GLDAMFHLMPM_ModeType HFGNGBOEJBB()
		{
			return ((::GLDAMFHLMPM_ModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_HFGNGBOEJBB_OFFSET))(this);
		}

		::GLDAMFHLMPM_UIControllerType DEHBEKNBJGM()
		{
			return ((::GLDAMFHLMPM_UIControllerType(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_DEHBEKNBJGM_OFFSET))(this);
		}

		::System::Boolean DHDGCKLIDIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_DHDGCKLIDIM_OFFSET))(this);
		}

		::System::Boolean OEBAIFMNCOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_OEBAIFMNCOL_OFFSET))(this);
		}

		::System::Boolean IIJCLLCODKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAMFHLMPM_IIJCLLCODKE_OFFSET))(this);
		}

	};
