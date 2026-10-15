#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCCCPPIJDB;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CLIENT_PREF_CHANGEPREFSWRAPPER_OFFSET UNITYSDK_OFFSET(0x1EC4AC50)
#define RPG_CLIENT_PREF_CHANGETOSERVERPREFS_OFFSET UNITYSDK_OFFSET(0x1EC4AB70)
#define RPG_CLIENT_PREF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EC4AA50)
#define RPG_CLIENT_PREF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4B090)
#define RPG_CLIENT_PREF_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1EC4AD30)
#define RPG_CLIENT_PREF_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1EC4AD20)
#define RPG_CLIENT_PREF_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1EC4AB30)
#define RPG_CLIENT_PREF_TRYSETSERVERPERFRELOAD_OFFSET UNITYSDK_OFFSET(0x1EC4ACA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Pref_TypeDefinitionIndex = 35317;

	class Pref : public ::System::Object
	{
	public:
		::System::String* _Key; // 0x10
		::System::Object* _DefaultValue; // 0x18
		::BCCCCPPIJDB* _PlayerPrefs; // 0x20
		::System::Object* _Value; // 0x28
		::System::Type* _ValueType; // 0x30
		::System::Boolean _Dirty; // 0x38
		::System::Boolean _Loaded; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_CLEAR_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_SETDIRTY_OFFSET))(this);
		}

		::System::Void ChangeToServerPrefs(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_CHANGETOSERVERPREFS_OFFSET))(this, a1);
		}

		::System::Void ChangePrefsWrapper(::BCCCCPPIJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCCCCPPIJDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_CHANGEPREFSWRAPPER_OFFSET))(this, a1);
		}

		::System::Void TrySetServerPerfReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_TRYSETSERVERPERFRELOAD_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_GET_KEY_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREF_GET_ISDIRTY_OFFSET))(this);
		}

	};
}
