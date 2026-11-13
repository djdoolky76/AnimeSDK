#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JFHAFLFFMKP_AMOHJEFHMPA_OFFSET UNITYSDK_OFFSET(0x1CB0FC90)
#define JFHAFLFFMKP_FHFOJIKGJKO_OFFSET UNITYSDK_OFFSET(0x1CB0FC30)
#define JFHAFLFFMKP_GKKBJJJFBHP_OFFSET UNITYSDK_OFFSET(0x1CB0FB90)
#define JFHAFLFFMKP_HNHPLIKFGFB_OFFSET UNITYSDK_OFFSET(0x1CB0FBE0)

inline static constexpr unsigned int JFHAFLFFMKP_TypeDefinitionIndex = 36239;

	class JFHAFLFFMKP : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_CFKKJMNCPLP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JFHAFLFFMKP")->GetStaticField(0x13020);
		}

		static ::System::Int32* StaticGet_FNDEDLLABNP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JFHAFLFFMKP")->GetStaticField(0x13024);
		}

		static ::System::Int32 GKKBJJJFBHP(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + JFHAFLFFMKP_GKKBJJJFBHP_OFFSET))(a1);
		}

		static ::System::Void HNHPLIKFGFB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFHAFLFFMKP_HNHPLIKFGFB_OFFSET))();
		}

		static ::System::Void FHFOJIKGJKO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFHAFLFFMKP_FHFOJIKGJKO_OFFSET))();
		}

		static ::System::Void AMOHJEFHMPA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFHAFLFFMKP_AMOHJEFHMPA_OFFSET))();
		}

	};
