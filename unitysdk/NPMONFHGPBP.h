#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
class NPMONFHGPBP;
namespace System { class String; }

#define NPMONFHGPBP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x19D0B650)
#define NPMONFHGPBP_CBPIGOCOHLK_OFFSET UNITYSDK_OFFSET(0x19D0B890)
#define NPMONFHGPBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x19D0B930)
#define NPMONFHGPBP_CTOR_OFFSET UNITYSDK_OFFSET(0x19D0B7C0)
#define NPMONFHGPBP_NDINLCMBHMG_OFFSET UNITYSDK_OFFSET(0x19D0B800)

inline static constexpr unsigned int NPMONFHGPBP_TypeDefinitionIndex = 50553;

	class NPMONFHGPBP
	{
	public:
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "NPMONFHGPBP")->GetStaticField(0x5F360);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMONFHGPBP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPMONFHGPBP_CCTOR_OFFSET))();
		}

		static ::NPMONFHGPBP* ACMKLFOMPFC(::System::String* a1)
		{
			return ((::NPMONFHGPBP*(*)(::System::String*))((::PBYTE)hIl2Cpp + NPMONFHGPBP_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::System::Void NDINLCMBHMG(::NPMONFHGPBP* a1)
		{
			return ((::System::Void(*)(::NPMONFHGPBP*))((::PBYTE)hIl2Cpp + NPMONFHGPBP_NDINLCMBHMG_OFFSET))(a1);
		}

		::GGJFAFONDHN* CBPIGOCOHLK()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMONFHGPBP_CBPIGOCOHLK_OFFSET))(this);
		}

	};
