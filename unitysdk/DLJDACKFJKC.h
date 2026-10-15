#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGDPGOHKLPI;
class EOHNDDIAKOA;
class NPMAIAEDIHK;
namespace System { class String; }

#define DLJDACKFJKC_CCTOR_OFFSET UNITYSDK_OFFSET(0xF89B840)
#define DLJDACKFJKC_CTOR_OFFSET UNITYSDK_OFFSET(0xF89B830)
#define DLJDACKFJKC_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xF89B470)

inline static constexpr unsigned int DLJDACKFJKC_TypeDefinitionIndex = 63276;

	class DLJDACKFJKC : public ::System::Object
	{
	public:
		static ::EOHNDDIAKOA** StaticGet_ILBAIDFFNEC()
		{
			return (::EOHNDDIAKOA**)UnitySDK::FromName("", "DLJDACKFJKC")->GetStaticField(0x59200);
		}

		static ::EGDPGOHKLPI** StaticGet_IFCMENDDFIK()
		{
			return (::EGDPGOHKLPI**)UnitySDK::FromName("", "DLJDACKFJKC")->GetStaticField(0x59208);
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
