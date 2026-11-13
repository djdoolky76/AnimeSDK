#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/MetricNumberFormatMode.h"
#include "unitysdk/System/Object.h"
class BALMEHEPCDM;
namespace System { class String; }

#define BKNDHMPPNNH_ACDBKJLJAKM_OFFSET UNITYSDK_OFFSET(0x1A66F4C0)
#define BKNDHMPPNNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A66F600)
#define BKNDHMPPNNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A66F5F0)
#define BKNDHMPPNNH_OAFOOCLBDKD_OFFSET UNITYSDK_OFFSET(0x1A66F570)
#define BKNDHMPPNNH_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x1A66F400)
#define BKNDHMPPNNH_PIMJNLHCGOL_OFFSET UNITYSDK_OFFSET(0x1A66F440)

inline static constexpr unsigned int BKNDHMPPNNH_TypeDefinitionIndex = 75503;

	class BKNDHMPPNNH : public ::System::Object
	{
	public:
		static ::BALMEHEPCDM** StaticGet_FMJPMFEDIJL()
		{
			return (::BALMEHEPCDM**)UnitySDK::FromName("", "BKNDHMPPNNH")->GetStaticField(0x68B70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNDHMPPNNH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKNDHMPPNNH_CCTOR_OFFSET))();
		}

		::RPG::Client::Textmap::Parameter::MetricNumberFormatMode OPGLAKFNMLD()
		{
			return ((::RPG::Client::Textmap::Parameter::MetricNumberFormatMode(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNDHMPPNNH_OPGLAKFNMLD_OFFSET))(this);
		}

		::System::String* PIMJNLHCGOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNDHMPPNNH_PIMJNLHCGOL_OFFSET))(this);
		}

		::System::String* ACDBKJLJAKM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNDHMPPNNH_ACDBKJLJAKM_OFFSET))(this);
		}

		::System::String* OAFOOCLBDKD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNDHMPPNNH_OAFOOCLBDKD_OFFSET))(this);
		}

	};
