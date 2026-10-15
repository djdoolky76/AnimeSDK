#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DNNOGJDIEFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C432470)
#define DNNOGJDIEFC_DAJGAHEALIK_OFFSET UNITYSDK_OFFSET(0x1C401220)
#define DNNOGJDIEFC_DDOGOKEFICL_OFFSET UNITYSDK_OFFSET(0x1C400D00)
#define DNNOGJDIEFC_IMFDFCIBGLF_OFFSET UNITYSDK_OFFSET(0x1C432410)
#define DNNOGJDIEFC_OCMANHDJEDF_OFFSET UNITYSDK_OFFSET(0x1C4012F0)

inline static constexpr unsigned int DNNOGJDIEFC_TypeDefinitionIndex = 41431;

	class DNNOGJDIEFC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNOGJDIEFC_CTOR_OFFSET))(this);
		}

		static ::System::Boolean DDOGOKEFICL(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DNNOGJDIEFC_DDOGOKEFICL_OFFSET))(a1);
		}

		static ::System::Boolean IMFDFCIBGLF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DNNOGJDIEFC_IMFDFCIBGLF_OFFSET))(a1);
		}

		static ::System::Boolean DAJGAHEALIK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DNNOGJDIEFC_DAJGAHEALIK_OFFSET))(a1);
		}

		static ::System::Boolean OCMANHDJEDF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DNNOGJDIEFC_OCMANHDJEDF_OFFSET))(a1);
		}

	};
