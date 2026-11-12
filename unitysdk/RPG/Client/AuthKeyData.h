#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AUTHKEYDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xD022000)
#define RPG_CLIENT_AUTHKEYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD021960)
#define RPG_CLIENT_AUTHKEYDATA_GETWEBAUTHKEYSTRING_OFFSET UNITYSDK_OFFSET(0xD021BF0)
#define RPG_CLIENT_AUTHKEYDATA_GET_AUTHKEYDIC_OFFSET UNITYSDK_OFFSET(0xD021970)
#define RPG_CLIENT_AUTHKEYDATA_ISWEBAUTHKEYEXPIRE_OFFSET UNITYSDK_OFFSET(0xD021A50)
#define RPG_CLIENT_AUTHKEYDATA_UPDATEWEBAUTHKEY_OFFSET UNITYSDK_OFFSET(0xD021D80)

namespace RPG::Client
{
	inline static constexpr unsigned int AuthKeyData_TypeDefinitionIndex = 68352;

	class AuthKeyData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _AuthKeyDic; // 0x10
		::System::UInt64 _WebAuthkeyCacheTimespan; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_AuthKeyDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_GET_AUTHKEYDIC_OFFSET))(this);
		}

		::System::Boolean IsWebAuthkeyExpire(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_ISWEBAUTHKEYEXPIRE_OFFSET))(this, a1);
		}

		::System::String* GetWebAuthKeyString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_GETWEBAUTHKEYSTRING_OFFSET))(this, a1);
		}

		::System::Void UpdateWebAuthKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_UPDATEWEBAUTHKEY_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_CLEAR_OFFSET))(this);
		}

	};
}
