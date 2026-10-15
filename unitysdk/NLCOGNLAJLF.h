#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOGCDNMNIKF.h"
class NLCOGNLAJLF;
namespace System { class String; }

#define NLCOGNLAJLF_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC63BB0)
#define NLCOGNLAJLF_CTOR_OFFSET UNITYSDK_OFFSET(0xBC63B50)
#define NLCOGNLAJLF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xBC63B60)

	class NLCOGNLAJLF : public ::GOGCDNMNIKF
	{
	public:
		static ::NLCOGNLAJLF** StaticGet_FMJPMFEDIJL()
		{
			return (::NLCOGNLAJLF**)UnitySDK::FromName("", "NLCOGNLAJLF")->GetStaticField(0x4B570);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCOGNLAJLF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLCOGNLAJLF_CCTOR_OFFSET))();
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCOGNLAJLF_JBIOGKPHKKC_OFFSET))(this);
		}

	};
