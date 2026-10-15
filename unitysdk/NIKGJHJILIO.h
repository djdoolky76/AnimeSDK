#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/HHJGACLHFDJ.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
class AEKEIBNBMDJ;
class BOLOIOMPBHO;
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class EnvDynamicPropLayoutProfile; }
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define NIKGJHJILIO_BEAPHCCJJLL_OFFSET UNITYSDK_OFFSET(0xBBEEE20)
#define NIKGJHJILIO_BPDNDHKKHHL_OFFSET UNITYSDK_OFFSET(0xBBF4710)
#define NIKGJHJILIO_CAMJIKALEHO_OFFSET UNITYSDK_OFFSET(0xBBEDF80)
#define NIKGJHJILIO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBF7950)
#define NIKGJHJILIO_CJILLNDHFGF_OFFSET UNITYSDK_OFFSET(0xBBEED90)
#define NIKGJHJILIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBEDD00)
#define NIKGJHJILIO_DHBFCHLKMHP_OFFSET UNITYSDK_OFFSET(0xBBEFCC0)
#define NIKGJHJILIO_EBJNJCLCLGC_OFFSET UNITYSDK_OFFSET(0xBBF49D0)
#define NIKGJHJILIO_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0xBBEEEC0)
#define NIKGJHJILIO_GDDDDIBBAHA_OFFSET UNITYSDK_OFFSET(0xBBF16F0)
#define NIKGJHJILIO_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xBBEFF20)
#define NIKGJHJILIO_HIHEFMEAGBL_1_OFFSET UNITYSDK_OFFSET(0xBBEEC20)
#define NIKGJHJILIO_HIHEFMEAGBL_OFFSET UNITYSDK_OFFSET(0xBBEE000)
#define NIKGJHJILIO_HNDINMFCHIK_OFFSET UNITYSDK_OFFSET(0xBBF4E10)
#define NIKGJHJILIO_IJCJLGIHLEH_OFFSET UNITYSDK_OFFSET(0xBBEFC30)
#define NIKGJHJILIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBBEEF00)
#define NIKGJHJILIO_LAFPBMMPLAG_1_OFFSET UNITYSDK_OFFSET(0xBBEE210)
#define NIKGJHJILIO_LAFPBMMPLAG_OFFSET UNITYSDK_OFFSET(0xBBEE090)
#define NIKGJHJILIO_LCKNAHBJHIK_OFFSET UNITYSDK_OFFSET(0xBBF14E0)
#define NIKGJHJILIO_LKGPNNEJJCG_OFFSET UNITYSDK_OFFSET(0xBBF4D50)
#define NIKGJHJILIO_LPODGMALCAI_OFFSET UNITYSDK_OFFSET(0xBBEE320)
#define NIKGJHJILIO_MNIDGEBOMPA_OFFSET UNITYSDK_OFFSET(0xBBEECD0)
#define NIKGJHJILIO_NEFEDKCCIHF_OFFSET UNITYSDK_OFFSET(0xBBEFDF0)
#define NIKGJHJILIO_ODGCGFIKFAO_OFFSET UNITYSDK_OFFSET(0xBBF4F20)
#define NIKGJHJILIO_PEOOCEPDJLL_1_OFFSET UNITYSDK_OFFSET(0xBBEE170)
#define NIKGJHJILIO_PEOOCEPDJLL_OFFSET UNITYSDK_OFFSET(0xBBEDF90)
#define NIKGJHJILIO_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBBF56A0)

inline static constexpr unsigned int NIKGJHJILIO_TypeDefinitionIndex = 49296;

	class NIKGJHJILIO : public ::HHJGACLHFDJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::AEKEIBNBMDJ*>* BLBLJGFJGGH; // 0x28
		::Il2CppArray<::System::Int32>* IKIFJCJCPEN; // 0x30
		::System::Collections::Generic::List_1<::AEKEIBNBMDJ*>* EAKGJCFGGOI; // 0x38
		::Il2CppArray<::System::Int32>* EFDHOCDHANP; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::AEKEIBNBMDJ*>* APDHIPDCDEE; // 0x48
		::Il2CppArray<::System::Int32>* DHOFFCMGBIN; // 0x50
		::BOLOIOMPBHO* OFPAEFBOBIN; // 0x58
		::System::Boolean JMPFLDBGNOO; // 0x60
		::System::Boolean ILJKOACIDPG; // 0x61
		::System::Byte _padding0[0x2];
		::System::Int32 MGDDIMFNMHC; // 0x64
		::System::Int32 COCHFMDGDJE; // 0x68
		::System::Int32 FBDDAPHLPIA; // 0x6C
		::System::Int32 AKNHHOAKIHL; // 0x70
		::System::Int32 EOGHMODEGPJ; // 0x74
		::System::Int32 HDPFJHOFLNG; // 0x78
		static ::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile** StaticGet_CJKKMLHNIFC()
		{
			return (::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile**)UnitySDK::FromName("", "NIKGJHJILIO")->GetStaticField(0x3F790);
		}

		static ::System::Int32* StaticGet_JHMIPHOOMNG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NIKGJHJILIO")->GetStaticField(0xD8A0);
		}

		static ::System::Int32* StaticGet_BIKGLJIPLJE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NIKGJHJILIO")->GetStaticField(0xD8A4);
		}

		static ::System::Int32* StaticGet_JEDEFKEGMCM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NIKGJHJILIO")->GetStaticField(0xD8A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKGJHJILIO_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::AEKEIBNBMDJ*>* CAMJIKALEHO()
		{
			return ((::System::Collections::Generic::List_1<::AEKEIBNBMDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_CAMJIKALEHO_OFFSET))(this);
		}

		::System::Void PEOOCEPDJLL(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + NIKGJHJILIO_PEOOCEPDJLL_OFFSET))(this, a1, a2);
		}

		::System::Void LAFPBMMPLAG(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + NIKGJHJILIO_LAFPBMMPLAG_OFFSET))(this, a1, a2);
		}

		::System::Void PEOOCEPDJLL_1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + NIKGJHJILIO_PEOOCEPDJLL_1_OFFSET))(this, a1, a2);
		}

		::System::Void LAFPBMMPLAG_1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + NIKGJHJILIO_LAFPBMMPLAG_1_OFFSET))(this, a1, a2);
		}

		::AEKEIBNBMDJ* HIHEFMEAGBL(::System::Int32 a1)
		{
			return ((::AEKEIBNBMDJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NIKGJHJILIO_HIHEFMEAGBL_OFFSET))(this, a1);
		}

		::AEKEIBNBMDJ* LPODGMALCAI(::GGJFAFONDHN* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::AEKEIBNBMDJ*(*)(::PVOID, ::GGJFAFONDHN*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NIKGJHJILIO_LPODGMALCAI_OFFSET))(this, a1, a2, a3);
		}

		::AEKEIBNBMDJ* HIHEFMEAGBL_1(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::AEKEIBNBMDJ*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_HIHEFMEAGBL_1_OFFSET))(this, a1);
		}

		::System::Void MNIDGEBOMPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_MNIDGEBOMPA_OFFSET))(this);
		}

		::System::Void CJILLNDHFGF(::AEKEIBNBMDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEKEIBNBMDJ*))((::PBYTE)hIl2Cpp + NIKGJHJILIO_CJILLNDHFGF_OFFSET))(this, a1);
		}

		static ::System::Void BEAPHCCJJLL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKGJHJILIO_BEAPHCCJJLL_OFFSET))();
		}

		::System::Void EPNKLHCHFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_EPNKLHCHFIH_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void IJCJLGIHLEH(::GGJFAFONDHN* a1, ::EnviromentSystemV2Space::PropertyDataBase* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*, ::EnviromentSystemV2Space::PropertyDataBase*, ::System::Int32))((::PBYTE)hIl2Cpp + NIKGJHJILIO_IJCJLGIHLEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DHBFCHLKMHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_DHBFCHLKMHP_OFFSET))(this);
		}

		::System::Void NEFEDKCCIHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_NEFEDKCCIHF_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIKGJHJILIO_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void GDDDDIBBAHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_GDDDDIBBAHA_OFFSET))(this);
		}

		::System::Single LKGPNNEJJCG(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIKGJHJILIO_LKGPNNEJJCG_OFFSET))(this, a1);
		}

		::System::Void EBJNJCLCLGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKGJHJILIO_EBJNJCLCLGC_OFFSET))(this);
		}

		static ::System::Void BPDNDHKKHHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKGJHJILIO_BPDNDHKKHHL_OFFSET))();
		}

		static ::System::Void LCKNAHBJHIK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NIKGJHJILIO_LCKNAHBJHIK_OFFSET))(a1);
		}

		static ::System::Boolean HNDINMFCHIK(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::RPG::CustomRP::CustomLightQualityFilter a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + NIKGJHJILIO_HNDINMFCHIK_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void ODGCGFIKFAO(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + NIKGJHJILIO_ODGCGFIKFAO_OFFSET))(this, a1);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + NIKGJHJILIO_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
