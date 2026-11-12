#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AKLNIAEEONB_CCTOR_OFFSET UNITYSDK_OFFSET(0x163BD980)
#define AKLNIAEEONB_CNGFIJEBNJP_OFFSET UNITYSDK_OFFSET(0x163BCBB0)
#define AKLNIAEEONB_EHAODEKMMBM_OFFSET UNITYSDK_OFFSET(0x163BCF90)
#define AKLNIAEEONB_FDPGGCENAPA_OFFSET UNITYSDK_OFFSET(0x163BD160)
#define AKLNIAEEONB_GGCGNOGLOPA_OFFSET UNITYSDK_OFFSET(0x163BD440)
#define AKLNIAEEONB_HIFOMCOCIDC_OFFSET UNITYSDK_OFFSET(0x163BC960)
#define AKLNIAEEONB_OANFNFOHKCD_OFFSET UNITYSDK_OFFSET(0x163BD290)

inline static constexpr unsigned int AKLNIAEEONB_TypeDefinitionIndex = 62598;

	class AKLNIAEEONB : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MDGNDGLBBFK()
		{
			return (::System::String**)UnitySDK::FromName("", "AKLNIAEEONB")->GetStaticField(0x4F230);
		}

		static ::System::String** StaticGet_ANKLLNIJNOA()
		{
			return (::System::String**)UnitySDK::FromName("", "AKLNIAEEONB")->GetStaticField(0x4F238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLNIAEEONB_CCTOR_OFFSET))();
		}

		static ::System::Void HIFOMCOCIDC(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLNIAEEONB_HIFOMCOCIDC_OFFSET))(a1);
		}

		static ::System::String* EHAODEKMMBM()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKLNIAEEONB_EHAODEKMMBM_OFFSET))();
		}

		static ::System::Boolean FDPGGCENAPA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLNIAEEONB_FDPGGCENAPA_OFFSET))(a1);
		}

		static ::System::Boolean OANFNFOHKCD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLNIAEEONB_OANFNFOHKCD_OFFSET))(a1);
		}

		static ::System::Void CNGFIJEBNJP(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLNIAEEONB_CNGFIJEBNJP_OFFSET))(a1);
		}

		static ::System::Void GGCGNOGLOPA(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLNIAEEONB_GGCGNOGLOPA_OFFSET))(a1);
		}

	};
