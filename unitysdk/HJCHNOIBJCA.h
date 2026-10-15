#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreCharacterStatus.h"
#include "unitysdk/System/Object.h"
class CEAIGOBEACN;
class GMPJIHGDDJB;
class LDLKEEFPGMB;
class LLMNADLMHPJ;
class NMLGHIFLBNN;
class OGIFJNIGHBO;
namespace RPG::Client { class PreAvatarGrowthMaterialData; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJCHNOIBJCA_BKPOBMOIMOD_OFFSET UNITYSDK_OFFSET(0x15CF8010)
#define HJCHNOIBJCA_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF7CF0)
#define HJCHNOIBJCA_DKMMHHNNDLK_OFFSET UNITYSDK_OFFSET(0x15CF9AC0)
#define HJCHNOIBJCA_DPIKBLNBDEE_OFFSET UNITYSDK_OFFSET(0x15CF8580)
#define HJCHNOIBJCA_DPLPLLNNICC_OFFSET UNITYSDK_OFFSET(0x15CF9A60)
#define HJCHNOIBJCA_EGDKAOEJKDJ_OFFSET UNITYSDK_OFFSET(0x15CF8330)
#define HJCHNOIBJCA_FBOOBJFAMPM_OFFSET UNITYSDK_OFFSET(0x15CF7F50)
#define HJCHNOIBJCA_FKOKDKLHPHG_OFFSET UNITYSDK_OFFSET(0x15CF7EE0)
#define HJCHNOIBJCA_GFPAJCLILAO_OFFSET UNITYSDK_OFFSET(0x15CF80C0)
#define HJCHNOIBJCA_GIIBNDFKECO_OFFSET UNITYSDK_OFFSET(0x15CF8260)
#define HJCHNOIBJCA_GMAMMAENDHN_OFFSET UNITYSDK_OFFSET(0x15CF8650)
#define HJCHNOIBJCA_HLAFFNMMIDM_OFFSET UNITYSDK_OFFSET(0x15CF90B0)
#define HJCHNOIBJCA_JPKMKMDGMHK_OFFSET UNITYSDK_OFFSET(0x15CF8390)
#define HJCHNOIBJCA_LJJJNPJEHEB_OFFSET UNITYSDK_OFFSET(0x15CF83F0)
#define HJCHNOIBJCA_MBCCFCNJCMD_OFFSET UNITYSDK_OFFSET(0x15CF8AD0)
#define HJCHNOIBJCA_MJNIIBGAHBN_OFFSET UNITYSDK_OFFSET(0x15CF8460)
#define HJCHNOIBJCA_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x15CF7DA0)
#define HJCHNOIBJCA_NADHDOJFOLK_OFFSET UNITYSDK_OFFSET(0x15CF8B30)
#define HJCHNOIBJCA_NAKIGFCHAMF_OFFSET UNITYSDK_OFFSET(0x15CFA8E0)
#define HJCHNOIBJCA_NNPMAOKNFAN_OFFSET UNITYSDK_OFFSET(0x15CF7DE0)
#define HJCHNOIBJCA_PDIJKIJOCBP_OFFSET UNITYSDK_OFFSET(0x15CF9530)
#define HJCHNOIBJCA_PDKEGCMFHIJ_OFFSET UNITYSDK_OFFSET(0x15CF81E0)

inline static constexpr unsigned int HJCHNOIBJCA_TypeDefinitionIndex = 66725;

	class HJCHNOIBJCA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PreAvatarGrowthMaterialData*>* JCGBBKAFGKO; // 0x10
		::RPG::Client::Promises::Promise* MFFKKAJENFC; // 0x18
		::GMPJIHGDDJB* LDCFHGAIKME; // 0x20
		::LLMNADLMHPJ* EEFMDEHLLFI; // 0x28
		::System::Collections::Generic::List_1<::LDLKEEFPGMB*>* PPLBHONGOGJ; // 0x30
		// static const ::System::Object DPJDDANNFGL; // 0x0
		::System::Void _ctor(::LLMNADLMHPJ* a1, ::GMPJIHGDDJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LLMNADLMHPJ*, ::GMPJIHGDDJB*))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::LDLKEEFPGMB*>* MJOEMBBMBON()
		{
			return ((::System::Collections::Generic::List_1<::LDLKEEFPGMB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_MJOEMBBMBON_OFFSET))(this);
		}

		::LDLKEEFPGMB* NNPMAOKNFAN(::System::UInt32 a1)
		{
			return ((::LDLKEEFPGMB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_NNPMAOKNFAN_OFFSET))(this, a1);
		}

		::LDLKEEFPGMB* FKOKDKLHPHG(::System::UInt32 a1)
		{
			return ((::LDLKEEFPGMB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_FKOKDKLHPHG_OFFSET))(this, a1);
		}

		::RPG::Client::PreAvatarGrowthMaterialData* BKPOBMOIMOD(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreAvatarGrowthMaterialData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_BKPOBMOIMOD_OFFSET))(this, a1);
		}

		::RPG::Client::PreCharacterStatus GFPAJCLILAO(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreCharacterStatus(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_GFPAJCLILAO_OFFSET))(this, a1);
		}

		::System::Boolean GIIBNDFKECO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_GIIBNDFKECO_OFFSET))(this, a1);
		}

		::System::Boolean EGDKAOEJKDJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_EGDKAOEJKDJ_OFFSET))(this, a1);
		}

		::System::Boolean JPKMKMDGMHK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_JPKMKMDGMHK_OFFSET))(this, a1);
		}

		::System::Boolean LJJJNPJEHEB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_LJJJNPJEHEB_OFFSET))(this, a1);
		}

		::LDLKEEFPGMB* FBOOBJFAMPM(::System::UInt32 a1)
		{
			return ((::LDLKEEFPGMB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_FBOOBJFAMPM_OFFSET))(this, a1);
		}

		::RPG::Client::PreCharacterStatus PDKEGCMFHIJ(::LDLKEEFPGMB* a1)
		{
			return ((::RPG::Client::PreCharacterStatus(*)(::PVOID, ::LDLKEEFPGMB*))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_PDKEGCMFHIJ_OFFSET))(this, a1);
		}

		::System::Boolean MJNIIBGAHBN(::LDLKEEFPGMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDLKEEFPGMB*))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_MJNIIBGAHBN_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* DPIKBLNBDEE()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_DPIKBLNBDEE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GMAMMAENDHN(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_GMAMMAENDHN_OFFSET))(this, a1);
		}

		::System::Void MBCCFCNJCMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_MBCCFCNJCMD_OFFSET))(this);
		}

		::System::Void NADHDOJFOLK(::NMLGHIFLBNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMLGHIFLBNN*))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_NADHDOJFOLK_OFFSET))(this, a1);
		}

		::System::Void PDIJKIJOCBP(::CEAIGOBEACN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEAIGOBEACN*))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_PDIJKIJOCBP_OFFSET))(this, a1);
		}

		::System::Void DPLPLLNNICC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_DPLPLLNNICC_OFFSET))(this);
		}

		::System::Void DKMMHHNNDLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_DKMMHHNNDLK_OFFSET))(this);
		}

		::System::Void HLAFFNMMIDM(::OGIFJNIGHBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGIFJNIGHBO*))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_HLAFFNMMIDM_OFFSET))(this, a1);
		}

		::System::Void NAKIGFCHAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA_NAKIGFCHAMF_OFFSET))(this);
		}

	};
