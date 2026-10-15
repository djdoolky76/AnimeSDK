#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAMOHABJIP;
class GPLMLPKBGGE;

#define DCNAOHHJAML_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xE252350)
#define DCNAOHHJAML_ICACIAMIIDM_OFFSET UNITYSDK_OFFSET(0xE2522B0)

	class DCNAOHHJAML : public ::System::Object
	{
	public:
		static ::GPLMLPKBGGE* ICACIAMIIDM(::ALAMOHABJIP* a1, ::System::UInt32 a2)
		{
			return ((::GPLMLPKBGGE*(*)(::ALAMOHABJIP*, ::System::UInt32))((::PBYTE)hIl2Cpp + DCNAOHHJAML_ICACIAMIIDM_OFFSET))(a1, a2);
		}

		static ::ALAMOHABJIP* HMPDCLHIPHI(::GPLMLPKBGGE* a1)
		{
			return ((::ALAMOHABJIP*(*)(::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + DCNAOHHJAML_HMPDCLHIPHI_OFFSET))(a1);
		}

	};
