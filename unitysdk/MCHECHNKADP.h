#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCHECHNKADP_Category.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventureAudioManager; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MCHECHNKADP_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB87E260)
#define MCHECHNKADP_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0xB87DC70)
#define MCHECHNKADP_BOMJIOFEAAN_OFFSET UNITYSDK_OFFSET(0xB87E880)
#define MCHECHNKADP_CTOR_OFFSET UNITYSDK_OFFSET(0xB87EAE0)
#define MCHECHNKADP_FCAPIPCKAGE_OFFSET UNITYSDK_OFFSET(0xB87E6E0)
#define MCHECHNKADP_FJIGLMMACBG_OFFSET UNITYSDK_OFFSET(0xB87E600)
#define MCHECHNKADP_FOIOMMEMGKF_OFFSET UNITYSDK_OFFSET(0xB87E3C0)
#define MCHECHNKADP_HCBDCHAFLFI_OFFSET UNITYSDK_OFFSET(0xB87E670)
#define MCHECHNKADP_IEALAKGGMEE_OFFSET UNITYSDK_OFFSET(0xB87DEE0)
#define MCHECHNKADP_IEBHBBDNKHD_OFFSET UNITYSDK_OFFSET(0xB87E960)
#define MCHECHNKADP_NEFOLMACABP_OFFSET UNITYSDK_OFFSET(0xB87E500)
#define MCHECHNKADP_OKGCKEGGPFM_OFFSET UNITYSDK_OFFSET(0xB87E750)
#define MCHECHNKADP_PGDDBKCNOID_OFFSET UNITYSDK_OFFSET(0xB87E8F0)
#define MCHECHNKADP_PMFNLGCKEOO_OFFSET UNITYSDK_OFFSET(0xB87E020)
#define MCHECHNKADP_POJBMPONJBL_OFFSET UNITYSDK_OFFSET(0xB87E580)

inline static constexpr unsigned int MCHECHNKADP_TypeDefinitionIndex = 80214;

	class MCHECHNKADP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* GBELPMCGMBG; // 0x10
		::System::Nullable* PFJPHIPKCDJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_CTOR_OFFSET))(this);
		}

		::System::Void BGOMKDMBLKK(::MCHECHNKADP_Category a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCHECHNKADP_Category, ::System::String*))((::PBYTE)hIl2Cpp + MCHECHNKADP_BGOMKDMBLKK_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH(::MCHECHNKADP_Category a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCHECHNKADP_Category, ::System::String*))((::PBYTE)hIl2Cpp + MCHECHNKADP_ABKBOGIGAEH_OFFSET))(this, a1, a2);
		}

		::System::Void PMFNLGCKEOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_PMFNLGCKEOO_OFFSET))(this);
		}

		::System::String* FJIGLMMACBG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_FJIGLMMACBG_OFFSET))(this);
		}

		::System::String* HCBDCHAFLFI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_HCBDCHAFLFI_OFFSET))(this);
		}

		::System::String* FCAPIPCKAGE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_FCAPIPCKAGE_OFFSET))(this);
		}

		::System::Void IEALAKGGMEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_IEALAKGGMEE_OFFSET))(this);
		}

		::System::Void FOIOMMEMGKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_FOIOMMEMGKF_OFFSET))(this);
		}

		::System::String* BOMJIOFEAAN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_BOMJIOFEAAN_OFFSET))(this);
		}

		::System::String* PGDDBKCNOID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_PGDDBKCNOID_OFFSET))(this);
		}

		::System::Void POJBMPONJBL(::MCHECHNKADP_Category a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCHECHNKADP_Category))((::PBYTE)hIl2Cpp + MCHECHNKADP_POJBMPONJBL_OFFSET))(this, a1);
		}

		::System::Void NEFOLMACABP(::MCHECHNKADP_Category a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCHECHNKADP_Category))((::PBYTE)hIl2Cpp + MCHECHNKADP_NEFOLMACABP_OFFSET))(this, a1);
		}

		::System::String* IEBHBBDNKHD(::MCHECHNKADP_Category a1)
		{
			return ((::System::String*(*)(::PVOID, ::MCHECHNKADP_Category))((::PBYTE)hIl2Cpp + MCHECHNKADP_IEBHBBDNKHD_OFFSET))(this, a1);
		}

		::RPG::Client::AdventureAudioManager* OKGCKEGGPFM()
		{
			return ((::RPG::Client::AdventureAudioManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHECHNKADP_OKGCKEGGPFM_OFFSET))(this);
		}

	};
