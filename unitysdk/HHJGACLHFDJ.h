#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"
class AEKEIBNBMDJ;
class CBEBICGIOAB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define HHJGACLHFDJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15CC1780)
#define HHJGACLHFDJ_AICPJEANMOA_OFFSET UNITYSDK_OFFSET(0x15CC1850)
#define HHJGACLHFDJ_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15CC17C0)
#define HHJGACLHFDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC1FA0)
#define HHJGACLHFDJ_DEJELBOHHKN_OFFSET UNITYSDK_OFFSET(0x15CC1810)
#define HHJGACLHFDJ_DHBFCHLKMHP_1_OFFSET UNITYSDK_OFFSET(0x15CC1B60)
#define HHJGACLHFDJ_DHBFCHLKMHP_OFFSET UNITYSDK_OFFSET(0x15CC1980)
#define HHJGACLHFDJ_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0x15CC1740)
#define HHJGACLHFDJ_GDDDDIBBAHA_OFFSET UNITYSDK_OFFSET(0x15CC1AD0)
#define HHJGACLHFDJ_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x15CC16A0)
#define HHJGACLHFDJ_HKPABPDHLJM_OFFSET UNITYSDK_OFFSET(0x15CC18D0)
#define HHJGACLHFDJ_IPBBKDCFBLA_OFFSET UNITYSDK_OFFSET(0x15CC1970)
#define HHJGACLHFDJ_JOKHAHJANGN_OFFSET UNITYSDK_OFFSET(0x15CC1920)
#define HHJGACLHFDJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15CC1890)
#define HHJGACLHFDJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15CC1700)
#define HHJGACLHFDJ_PFMBEHKMHDK_OFFSET UNITYSDK_OFFSET(0x15CC1B10)
#define HHJGACLHFDJ_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x15CC1650)

inline static constexpr unsigned int HHJGACLHFDJ_TypeDefinitionIndex = 49333;

	class HHJGACLHFDJ : public ::System::Object
	{
	public:
		::System::String* LFLPOOCDHDP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::AEKEIBNBMDJ*>* AGIJODGKPBN; // 0x18
		::System::Boolean MNALFCDKDAC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void EPNKLHCHFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_EPNKLHCHFIH_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void DEJELBOHHKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_DEJELBOHHKN_OFFSET))(this);
		}

		::System::Void AICPJEANMOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_AICPJEANMOA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HKPABPDHLJM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_HKPABPDHLJM_OFFSET))(this, a1);
		}

		::System::Void JOKHAHJANGN(::RPG::CustomRP::CustomLightQualityFilter a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_JOKHAHJANGN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::AEKEIBNBMDJ*>* IPBBKDCFBLA()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::AEKEIBNBMDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_IPBBKDCFBLA_OFFSET))(this);
		}

		::System::Void DHBFCHLKMHP(::System::String* a1, ::AEKEIBNBMDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::AEKEIBNBMDJ*))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_DHBFCHLKMHP_OFFSET))(this, a1, a2);
		}

		::System::Void GDDDDIBBAHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_GDDDDIBBAHA_OFFSET))(this);
		}

		::System::Void PFMBEHKMHDK(::EnviromentSystemV2Space::OutputType a1, ::CBEBICGIOAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_PFMBEHKMHDK_OFFSET))(this, a1, a2);
		}

		::System::Void DHBFCHLKMHP_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJGACLHFDJ_DHBFCHLKMHP_1_OFFSET))(this);
		}

	};
