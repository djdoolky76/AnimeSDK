#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIGLHBEPNOG_CanUseAbilityRet.h"
#include "unitysdk/System/Object.h"
class AJFCABOOKCA;
class IFBFJDCECML;
class LBGIDBFBHEF;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KIGLHBEPNOG_BGENHAMAMFF_OFFSET UNITYSDK_OFFSET(0x1D892770)
#define KIGLHBEPNOG_BJAJEMOKBPC_OFFSET UNITYSDK_OFFSET(0x1D891F00)
#define KIGLHBEPNOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D891BD0)
#define KIGLHBEPNOG_DJCMOGBCOGC_OFFSET UNITYSDK_OFFSET(0x1D891C90)
#define KIGLHBEPNOG_DMKKECBIFEM_OFFSET UNITYSDK_OFFSET(0x1D891BC0)
#define KIGLHBEPNOG_DNGDJNAKNNK_OFFSET UNITYSDK_OFFSET(0x1D891D40)
#define KIGLHBEPNOG_EJCDCBDCDBC_OFFSET UNITYSDK_OFFSET(0x1D891FC0)
#define KIGLHBEPNOG_FIAHJGMNMGE_OFFSET UNITYSDK_OFFSET(0x1D891B30)
#define KIGLHBEPNOG_GET_CACHETARGETS_OFFSET UNITYSDK_OFFSET(0x1D891BA0)
#define KIGLHBEPNOG_IHGHLKKBAHI_OFFSET UNITYSDK_OFFSET(0x1D892460)
#define KIGLHBEPNOG_IHNJLOGHAJE_OFFSET UNITYSDK_OFFSET(0x1D892650)
#define KIGLHBEPNOG_JDBBDLNMBCA_OFFSET UNITYSDK_OFFSET(0x1D891F80)
#define KIGLHBEPNOG_JJJJGFJDKOJ_OFFSET UNITYSDK_OFFSET(0x1D891F40)
#define KIGLHBEPNOG_JKAHNFNMMOL_OFFSET UNITYSDK_OFFSET(0x1D892AB0)
#define KIGLHBEPNOG_LFFPFECCBEM_OFFSET UNITYSDK_OFFSET(0x1D892070)
#define KIGLHBEPNOG_NDBLMJLGKID_OFFSET UNITYSDK_OFFSET(0x1D891B20)
#define KIGLHBEPNOG_NDCNFMNIMCI_OFFSET UNITYSDK_OFFSET(0x1D892390)
#define KIGLHBEPNOG_NNIJHIKOJGM_OFFSET UNITYSDK_OFFSET(0x1D892A30)
#define KIGLHBEPNOG_OEOEIIGJOKO_OFFSET UNITYSDK_OFFSET(0x1D8928C0)
#define KIGLHBEPNOG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1D892010)
#define KIGLHBEPNOG_PMIMAILJLAF_OFFSET UNITYSDK_OFFSET(0x1D8927F0)
#define KIGLHBEPNOG_SET_CACHETARGETS_OFFSET UNITYSDK_OFFSET(0x1D891BB0)

inline static constexpr unsigned int KIGLHBEPNOG_TypeDefinitionIndex = 38287;

	class KIGLHBEPNOG : public ::System::Object
	{
	public:
		::IFBFJDCECML* OFHDAHHPNPJ; // 0x10
		::RPG::GameCore::CakeRaceAbilityConfig* CEKOPFIHIAD; // 0x18
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* _CacheTargets_k__BackingField; // 0x28
		::LBGIDBFBHEF* GANGPFFCCAF; // 0x30
		::AJFCABOOKCA* JCBLFONKHOE; // 0x38
		::System::Boolean ANOCILKNHLL; // 0x40
		::System::Boolean HDPLEHFEOFC; // 0x41
		::System::Byte _padding0[0x6];
		::System::UInt64 EMIDCKMNGCN; // 0x48
		::System::UInt64 PAAPGJBEJNP; // 0x50
		::System::Void _ctor(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::PBGNKMMDBGD* a3, ::LBGIDBFBHEF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::PBGNKMMDBGD*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::CakeRaceAbilityConfig* NDBLMJLGKID()
		{
			return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_NDBLMJLGKID_OFFSET))(this);
		}

		::System::Int32 FIAHJGMNMGE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_FIAHJGMNMGE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* get_CacheTargets()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_GET_CACHETARGETS_OFFSET))(this);
		}

		::System::Void set_CacheTargets(::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_SET_CACHETARGETS_OFFSET))(this, a1);
		}

		::System::Boolean DMKKECBIFEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_DMKKECBIFEM_OFFSET))(this);
		}

		::System::Void DJCMOGBCOGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_DJCMOGBCOGC_OFFSET))(this);
		}

		::System::Void BJAJEMOKBPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_BJAJEMOKBPC_OFFSET))(this);
		}

		::System::Void JJJJGFJDKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_JJJJGFJDKOJ_OFFSET))(this);
		}

		::System::Void JDBBDLNMBCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_JDBBDLNMBCA_OFFSET))(this);
		}

		::KIGLHBEPNOG_CanUseAbilityRet EJCDCBDCDBC(::IFBFJDCECML* a1)
		{
			return ((::KIGLHBEPNOG_CanUseAbilityRet(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_EJCDCBDCDBC_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Int64 IHGHLKKBAHI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_IHGHLKKBAHI_OFFSET))(this);
		}

		::System::Void IHNJLOGHAJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_IHNJLOGHAJE_OFFSET))(this);
		}

		::System::Void LFFPFECCBEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_LFFPFECCBEM_OFFSET))(this);
		}

		::System::Void PMIMAILJLAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_PMIMAILJLAF_OFFSET))(this);
		}

		::System::Void OEOEIIGJOKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_OEOEIIGJOKO_OFFSET))(this);
		}

		::System::Void NDCNFMNIMCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_NDCNFMNIMCI_OFFSET))(this);
		}

		::System::Void JKAHNFNMMOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_JKAHNFNMMOL_OFFSET))(this);
		}

		::System::Boolean BGENHAMAMFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_BGENHAMAMFF_OFFSET))(this);
		}

		::System::Boolean NNIJHIKOJGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_NNIJHIKOJGM_OFFSET))(this);
		}

		::System::Void DNGDJNAKNNK(::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*))((::PBYTE)hIl2Cpp + KIGLHBEPNOG_DNGDJNAKNNK_OFFSET))(this, a1);
		}

	};
