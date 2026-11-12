#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFCBBIKNPPI_IIEOHMBJCNF_OFFSET UNITYSDK_OFFSET(0xB98F340)
#define JFCBBIKNPPI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB98F570)
#define JFCBBIKNPPI_LIMKHPGCOFC_OFFSET UNITYSDK_OFFSET(0xB98F510)
#define JFCBBIKNPPI_NAJOPNMPHPF_OFFSET UNITYSDK_OFFSET(0xB98F390)

inline static constexpr unsigned int JFCBBIKNPPI_TypeDefinitionIndex = 75206;

	class JFCBBIKNPPI : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_KAIAKGGNICG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x15090);
		}

		static ::System::Boolean* StaticGet_MEIFCCODPAC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x15091);
		}

		static ::System::Boolean* StaticGet_PKEINFHJKOC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x15092);
		}

		static ::System::Boolean* StaticGet_EENMLGGAILM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x15093);
		}

		static ::System::Boolean* StaticGet_DLKCJBEMHAK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x15094);
		}

		static ::System::Void IIEOHMBJCNF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + JFCBBIKNPPI_IIEOHMBJCNF_OFFSET))(a1);
		}

		static ::System::Void LIMKHPGCOFC(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JFCBBIKNPPI_LIMKHPGCOFC_OFFSET))(a1, a2);
		}

		static ::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFCBBIKNPPI_KHGIKBFDLFB_OFFSET))();
		}

		static ::System::Void NAJOPNMPHPF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFCBBIKNPPI_NAJOPNMPHPF_OFFSET))();
		}

	};
