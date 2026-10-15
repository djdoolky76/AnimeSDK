#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UIPARAMDELIVERER_CTOR_OFFSET UNITYSDK_OFFSET(0xE3E3AA0)
#define RPG_CLIENT_UIPARAMDELIVERER_HASKEY_OFFSET UNITYSDK_OFFSET(0xE3E36F0)
#define RPG_CLIENT_UIPARAMDELIVERER_TRYGETFLOATVALUE_OFFSET UNITYSDK_OFFSET(0xE3E3A20)
#define RPG_CLIENT_UIPARAMDELIVERER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xE3E3880)

namespace RPG::Client
{
	class UIParamDeliverer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _UIParamDataItemList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARAMDELIVERER_CTOR_OFFSET))(this);
		}

		::System::Boolean HasKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARAMDELIVERER_HASKEY_OFFSET))(this, a1);
		}

		::System::String* TryGetValue(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARAMDELIVERER_TRYGETVALUE_OFFSET))(this, a1);
		}

		::System::Single TryGetFloatValue(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARAMDELIVERER_TRYGETFLOATVALUE_OFFSET))(this, a1);
		}

	};
}
