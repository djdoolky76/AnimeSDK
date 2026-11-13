#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/MetricNumberFormatMode.h"
#include "unitysdk/System/Object.h"
class BALMEHEPCDM;
namespace System { class String; }

#define MNOIPPFHMJF_ACDBKJLJAKM_OFFSET UNITYSDK_OFFSET(0x1B200F40)
#define MNOIPPFHMJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B201080)
#define MNOIPPFHMJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B201070)
#define MNOIPPFHMJF_OAFOOCLBDKD_OFFSET UNITYSDK_OFFSET(0x1B200FC0)
#define MNOIPPFHMJF_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x1B200E40)
#define MNOIPPFHMJF_PIMJNLHCGOL_OFFSET UNITYSDK_OFFSET(0x1B200E90)

inline static constexpr unsigned int MNOIPPFHMJF_TypeDefinitionIndex = 75504;

	class MNOIPPFHMJF : public ::System::Object
	{
	public:
		static ::BALMEHEPCDM** StaticGet_FMJPMFEDIJL()
		{
			return (::BALMEHEPCDM**)UnitySDK::FromName("", "MNOIPPFHMJF")->GetStaticField(0xF8B0);
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
