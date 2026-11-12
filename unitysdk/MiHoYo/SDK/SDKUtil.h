#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_SDKUTIL_AESDECRYPT_OFFSET UNITYSDK_OFFSET(0x1D163F90)
#define MIHOYO_SDK_SDKUTIL_AESENCRYPT_OFFSET UNITYSDK_OFFSET(0x1D163C20)
#define MIHOYO_SDK_SDKUTIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D164450)
#define MIHOYO_SDK_SDKUTIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D164440)
#define MIHOYO_SDK_SDKUTIL_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1D1634F0)
#define MIHOYO_SDK_SDKUTIL_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1D163010)
#define MIHOYO_SDK_SDKUTIL_ESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1D162C40)
#define MIHOYO_SDK_SDKUTIL_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D161700)
#define MIHOYO_SDK_SDKUTIL_GETCONTENTMD5_OFFSET UNITYSDK_OFFSET(0x1D1642F0)
#define MIHOYO_SDK_SDKUTIL_GETENCODEVALUE_OFFSET UNITYSDK_OFFSET(0x1D163490)
#define MIHOYO_SDK_SDKUTIL_GETMACADDRESS_OFFSET UNITYSDK_OFFSET(0x1D163970)
#define MIHOYO_SDK_SDKUTIL_GETQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1D161780)
#define MIHOYO_SDK_SDKUTIL_GETQUERYURL_OFFSET UNITYSDK_OFFSET(0x1D14FCC0)
#define MIHOYO_SDK_SDKUTIL_GETQUERY_OFFSET UNITYSDK_OFFSET(0x1D162C60)
#define MIHOYO_SDK_SDKUTIL_HMACSHA1_OFFSET UNITYSDK_OFFSET(0x1D14C140)
#define MIHOYO_SDK_SDKUTIL_HMACSHA256_OFFSET UNITYSDK_OFFSET(0x1D160440)
#define MIHOYO_SDK_SDKUTIL_MD5SUM_OFFSET UNITYSDK_OFFSET(0x1D14BF00)
#define MIHOYO_SDK_SDKUTIL_RSADECRYPT_OFFSET UNITYSDK_OFFSET(0x1D160660)
#define MIHOYO_SDK_SDKUTIL_RSAENCRYPT_OFFSET UNITYSDK_OFFSET(0x1D156160)
#define MIHOYO_SDK_SDKUTIL_SHA1_OFFSET UNITYSDK_OFFSET(0x1D1602F0)
#define MIHOYO_SDK_SDKUTIL_SIGNCOMBOBODY_OFFSET UNITYSDK_OFFSET(0x1D161120)
#define MIHOYO_SDK_SDKUTIL_SIGNMDKBODY_OFFSET UNITYSDK_OFFSET(0x1D14EE10)
#define MIHOYO_SDK_SDKUTIL_SPECIALCODE_OFFSET UNITYSDK_OFFSET(0x1D1610C0)
#define MIHOYO_SDK_SDKUTIL_STRINGTOBASE64_OFFSET UNITYSDK_OFFSET(0x1D162E90)
#define MIHOYO_SDK_SDKUTIL_STRINGTOBYTES_OFFSET UNITYSDK_OFFSET(0x1D160F90)
#define MIHOYO_SDK_SDKUTIL_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1D162E70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKUtil_TypeDefinitionIndex = 8188;

	class SDKUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Keys()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("MiHoYo.SDK", "SDKUtil")->GetStaticField(0x1E810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_CCTOR_OFFSET))();
		}

		static ::System::String* SHA1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SHA1_OFFSET))(a1);
		}

		static ::System::String* HMACSHA1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_HMACSHA1_OFFSET))(a1, a2);
		}

		static ::System::String* HMACSHA256(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_HMACSHA256_OFFSET))(a1, a2);
		}

		static ::System::String* RSAEncrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_RSAENCRYPT_OFFSET))(a1, a2);
		}

		static ::System::String* RSADecrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_RSADECRYPT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* StringToBytes(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_STRINGTOBYTES_OFFSET))(a1);
		}

		static ::System::String* SpecialCode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SPECIALCODE_OFFSET))(a1);
		}

		static ::System::String* SignMdkBody(::MiHoYo::SDK::JSONObject* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SIGNMDKBODY_OFFSET))(a1, a2);
		}

		static ::System::String* SignComboBody(::MiHoYo::SDK::JSONObject* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SIGNCOMBOBODY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color GetColor(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETCOLOR_OFFSET))(a1);
		}

		static ::System::String* GetQueryString(::MiHoYo::SDK::JSONObject* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETQUERYSTRING_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::JSONObject* GetQuery(::System::String* a1, ::System::Boolean a2)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETQUERY_OFFSET))(a1, a2);
		}

		static ::System::String* GetQueryUrl(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETQUERYURL_OFFSET))(a1, a2);
		}

		static ::System::String* EscapeURL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_ESCAPEURL_OFFSET))(a1);
		}

		static ::System::String* UnEscapeURL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_UNESCAPEURL_OFFSET))(a1);
		}

		static ::System::String* StringToBase64(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_STRINGTOBASE64_OFFSET))(a1);
		}

		static ::System::String* Md5Sum(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_MD5SUM_OFFSET))(a1);
		}

		static ::System::String* EncodeString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_ENCODESTRING_OFFSET))(a1, a2);
		}

		static ::System::String* DecodeString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_DECODESTRING_OFFSET))(a1, a2);
		}

		static ::System::String* GetEncodeValue(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETENCODEVALUE_OFFSET))(a1);
		}

		static ::System::String* GetMacAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETMACADDRESS_OFFSET))();
		}

		static ::System::String* AesEncrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_AESENCRYPT_OFFSET))(a1, a2);
		}

		static ::System::String* AesDecrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_AESDECRYPT_OFFSET))(a1, a2);
		}

		static ::System::String* GetContentMD5(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETCONTENTMD5_OFFSET))(a1);
		}

	};
}
