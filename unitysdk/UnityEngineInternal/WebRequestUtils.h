#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Uri; }
namespace System::Text::RegularExpressions { class Regex; }

#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x208EFE20)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEINITIALURL_OFFSET UNITYSDK_OFFSET(0x208E9350)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEURISTRING_OFFSET UNITYSDK_OFFSET(0x208E9850)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_REDIRECTTO_OFFSET UNITYSDK_OFFSET(0x208EFB80)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_URLDECODE_OFFSET UNITYSDK_OFFSET(0x208EFCA0)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int WebRequestUtils_TypeDefinitionIndex = 5355;

	class WebRequestUtils : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_domainRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("UnityEngineInternal", "WebRequestUtils")->GetStaticField(0x2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_CCTOR_OFFSET))();
		}

		static ::System::String* RedirectTo(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_REDIRECTTO_OFFSET))(a1, a2);
		}

		static ::System::String* MakeInitialUrl(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEINITIALURL_OFFSET))(a1, a2);
		}

		static ::System::String* MakeUriString(::System::Uri* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::Uri*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEURISTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::String* URLDecode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_URLDECODE_OFFSET))(a1);
		}

	};
}
