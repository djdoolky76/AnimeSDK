#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/MetricNumberFormatMode.h"
#include "unitysdk/System/Object.h"
class BALMEHEPCDM;
namespace System { class String; }

#define MNOIPPFHMJF_ACDBKJLJAKM_OFFSET UNITYSDK_OFFSET(0xBA140B0)
#define MNOIPPFHMJF_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA141F0)
#define MNOIPPFHMJF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA141E0)
#define MNOIPPFHMJF_OAFOOCLBDKD_OFFSET UNITYSDK_OFFSET(0xBA14130)
#define MNOIPPFHMJF_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0xBA13FB0)
#define MNOIPPFHMJF_PIMJNLHCGOL_OFFSET UNITYSDK_OFFSET(0xBA14000)

inline static constexpr unsigned int MNOIPPFHMJF_TypeDefinitionIndex = 73384;

	class MNOIPPFHMJF : public ::System::Object
	{
	public:
		static ::BALMEHEPCDM** StaticGet_FMJPMFEDIJL()
		{
			return (::BALMEHEPCDM**)UnitySDK::FromName("", "MNOIPPFHMJF")->GetStaticField(0x13E80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOIPPFHMJF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNOIPPFHMJF_CCTOR_OFFSET))();
		}

		::RPG::Client::Textmap::Parameter::MetricNumberFormatMode OPGLAKFNMLD()
		{
			return ((::RPG::Client::Textmap::Parameter::MetricNumberFormatMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOIPPFHMJF_OPGLAKFNMLD_OFFSET))(this);
		}

		::System::String* PIMJNLHCGOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOIPPFHMJF_PIMJNLHCGOL_OFFSET))(this);
		}

		::System::String* ACDBKJLJAKM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOIPPFHMJF_ACDBKJLJAKM_OFFSET))(this);
		}

		::System::String* OAFOOCLBDKD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOIPPFHMJF_OAFOOCLBDKD_OFFSET))(this);
		}

	};
