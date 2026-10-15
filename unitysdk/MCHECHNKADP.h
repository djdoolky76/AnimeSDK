#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCHECHNKADP_Category.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventureAudioManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MCHECHNKADP_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB877A40)
#define MCHECHNKADP_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0xB877450)
#define MCHECHNKADP_BOMJIOFEAAN_OFFSET UNITYSDK_OFFSET(0xB878060)
#define MCHECHNKADP_CTOR_OFFSET UNITYSDK_OFFSET(0xB8782C0)
#define MCHECHNKADP_FCAPIPCKAGE_OFFSET UNITYSDK_OFFSET(0xB877EC0)
#define MCHECHNKADP_FJIGLMMACBG_OFFSET UNITYSDK_OFFSET(0xB877DE0)
#define MCHECHNKADP_FOIOMMEMGKF_OFFSET UNITYSDK_OFFSET(0xB877BA0)
#define MCHECHNKADP_HCBDCHAFLFI_OFFSET UNITYSDK_OFFSET(0xB877E50)
#define MCHECHNKADP_IEALAKGGMEE_OFFSET UNITYSDK_OFFSET(0xB8776C0)
#define MCHECHNKADP_IEBHBBDNKHD_OFFSET UNITYSDK_OFFSET(0xB878140)
#define MCHECHNKADP_NEFOLMACABP_OFFSET UNITYSDK_OFFSET(0xB877CE0)
#define MCHECHNKADP_OKGCKEGGPFM_OFFSET UNITYSDK_OFFSET(0xB877F30)
#define MCHECHNKADP_PGDDBKCNOID_OFFSET UNITYSDK_OFFSET(0xB8780D0)
#define MCHECHNKADP_PMFNLGCKEOO_OFFSET UNITYSDK_OFFSET(0xB877800)
#define MCHECHNKADP_POJBMPONJBL_OFFSET UNITYSDK_OFFSET(0xB877D60)

inline static constexpr unsigned int MCHECHNKADP_TypeDefinitionIndex = 80213;

	class MCHECHNKADP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* GBELPMCGMBG; // 0x10
		::System::Nullable_1<::System::Object*> PFJPHIPKCDJ; // 0x18
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
