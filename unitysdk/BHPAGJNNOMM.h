#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPAGJNNOMM_VCameraType.h"
#include "unitysdk/System/Object.h"
class BPMLCFOHMDB;

#define BHPAGJNNOMM_ADKMGGOCFHA_OFFSET UNITYSDK_OFFSET(0xB492B60)

inline static constexpr unsigned int BHPAGJNNOMM_TypeDefinitionIndex = 69748;

	class BHPAGJNNOMM : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_HHBHKCLDBIF()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "BHPAGJNNOMM")->GetStaticField(0x157C0);
		}

		static ::BPMLCFOHMDB* ADKMGGOCFHA(::BHPAGJNNOMM_VCameraType a1)
		{
			return ((::BPMLCFOHMDB*(*)(::BHPAGJNNOMM_VCameraType))((::PBYTE)hIl2Cpp + BHPAGJNNOMM_ADKMGGOCFHA_OFFSET))(a1);
		}

	};
