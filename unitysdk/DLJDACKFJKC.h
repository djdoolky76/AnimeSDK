#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGDPGOHKLPI;
class EOHNDDIAKOA;
class NPMAIAEDIHK;
namespace System { class String; }

#define DLJDACKFJKC_CCTOR_OFFSET UNITYSDK_OFFSET(0xF8A11F0)
#define DLJDACKFJKC_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A11E0)
#define DLJDACKFJKC_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xF8A0E20)

	class DLJDACKFJKC : public ::System::Object
	{
	public:
		static ::EGDPGOHKLPI** StaticGet_IFCMENDDFIK()
		{
			return (::EGDPGOHKLPI**)UnitySDK::FromName("", "DLJDACKFJKC")->GetStaticField(0x5B490);
		}

		static ::EOHNDDIAKOA** StaticGet_ILBAIDFFNEC()
		{
			return (::EOHNDDIAKOA**)UnitySDK::FromName("", "DLJDACKFJKC")->GetStaticField(0x5B498);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJDACKFJKC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLJDACKFJKC_CCTOR_OFFSET))();
		}

		static ::NPMAIAEDIHK* FPKLDCGAJGP(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::NPMAIAEDIHK*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + DLJDACKFJKC_FPKLDCGAJGP_OFFSET))(a1, a2);
		}

	};
