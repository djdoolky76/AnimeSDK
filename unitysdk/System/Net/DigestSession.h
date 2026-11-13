#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Net { class Authorization; }
namespace System::Net { class DigestHeaderParser; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define SYSTEM_NET_DIGESTSESSION_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C3E51C0)
#define SYSTEM_NET_DIGESTSESSION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3E6610)
#define SYSTEM_NET_DIGESTSESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E5020)
#define SYSTEM_NET_DIGESTSESSION_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C3E6640)
#define SYSTEM_NET_DIGESTSESSION_GET_CNONCE_OFFSET UNITYSDK_OFFSET(0x1C3E6740)
#define SYSTEM_NET_DIGESTSESSION_GET_LASTUSE_OFFSET UNITYSDK_OFFSET(0x1C3E6F80)
#define SYSTEM_NET_DIGESTSESSION_GET_NONCE_OFFSET UNITYSDK_OFFSET(0x1C3E5180)
#define SYSTEM_NET_DIGESTSESSION_GET_OPAQUE_OFFSET UNITYSDK_OFFSET(0x1C3E66C0)
#define SYSTEM_NET_DIGESTSESSION_GET_QOP_OFFSET UNITYSDK_OFFSET(0x1C3E6700)
#define SYSTEM_NET_DIGESTSESSION_GET_REALM_OFFSET UNITYSDK_OFFSET(0x1C3E6680)
#define SYSTEM_NET_DIGESTSESSION_HA1_OFFSET UNITYSDK_OFFSET(0x1C3E6AE0)
#define SYSTEM_NET_DIGESTSESSION_HA2_OFFSET UNITYSDK_OFFSET(0x1C3E6C90)
#define SYSTEM_NET_DIGESTSESSION_HASHTOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1C3E6840)
#define SYSTEM_NET_DIGESTSESSION_PARSE_OFFSET UNITYSDK_OFFSET(0x1C3E5060)
#define SYSTEM_NET_DIGESTSESSION_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1C3E6D90)

namespace System::Net
{
	inline static constexpr unsigned int DigestSession_TypeDefinitionIndex = 2830;

	class DigestSession : public ::System::Object
	{
	public:
		::System::Net::DigestHeaderParser* parser; // 0x10
		::System::String* _cnonce; // 0x18
		::System::Security::Cryptography::HashAlgorithm* hash; // 0x20
		::System::Int32 _nc; // 0x28
		::System::Byte _padding0[0x4];
		::System::DateTime lastUse; // 0x30
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)UnitySDK::FromName("System.Net", "DigestSession")->GetStaticField(0x1DE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_CTOR_OFFSET))(this);
		}

		::System::String* get_Algorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_ALGORITHM_OFFSET))(this);
		}

		::System::String* get_Realm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_REALM_OFFSET))(this);
		}

		::System::String* get_Nonce()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_NONCE_OFFSET))(this);
		}

		::System::String* get_Opaque()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_OPAQUE_OFFSET))(this);
		}

		::System::String* get_QOP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_QOP_OFFSET))(this);
		}

		::System::String* get_CNonce()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_CNONCE_OFFSET))(this);
		}

		::System::Boolean Parse(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_PARSE_OFFSET))(this, a1);
		}

		::System::String* HashToHexString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_HASHTOHEXSTRING_OFFSET))(this, a1);
		}

		::System::String* HA1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_HA1_OFFSET))(this, a1, a2);
		}

		::System::String* HA2(::System::Net::HttpWebRequest* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_HA2_OFFSET))(this, a1);
		}

		::System::String* Response(::System::String* a1, ::System::String* a2, ::System::Net::HttpWebRequest* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_RESPONSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Net::Authorization* Authenticate(::System::Net::WebRequest* a1, ::System::Net::ICredentials* a2)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_AUTHENTICATE_OFFSET))(this, a1, a2);
		}

		::System::DateTime get_LastUse()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTSESSION_GET_LASTUSE_OFFSET))(this);
		}

	};
}
