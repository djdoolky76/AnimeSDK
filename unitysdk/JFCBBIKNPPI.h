#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFCBBIKNPPI_IIEOHMBJCNF_OFFSET UNITYSDK_OFFSET(0x16632040)
#define JFCBBIKNPPI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16632270)
#define JFCBBIKNPPI_LIMKHPGCOFC_OFFSET UNITYSDK_OFFSET(0x16632210)
#define JFCBBIKNPPI_NAJOPNMPHPF_OFFSET UNITYSDK_OFFSET(0x16632090)

inline static constexpr unsigned int JFCBBIKNPPI_TypeDefinitionIndex = 73091;

	class JFCBBIKNPPI : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EENMLGGAILM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x29F0);
		}

		static ::System::Boolean* StaticGet_PKEINFHJKOC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x29F1);
		}

		static ::System::Boolean* StaticGet_DLKCJBEMHAK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x29F2);
		}

		static ::System::Boolean* StaticGet_MEIFCCODPAC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x29F3);
		}

		static ::System::Boolean* StaticGet_KAIAKGGNICG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFCBBIKNPPI")->GetStaticField(0x29F4);
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
