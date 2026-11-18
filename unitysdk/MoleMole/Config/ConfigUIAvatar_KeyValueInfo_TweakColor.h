#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIAVATAR_KEYVALUEINFO_TWEAKCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92D9D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIAvatar_KeyValueInfo_TweakColor_TypeDefinitionIndex = 67142;

	class ConfigUIAvatar_KeyValueInfo_TweakColor : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* valueInst; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::System::Collections::Generic::List_1<::System::Object*>* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIAVATAR_KEYVALUEINFO_TWEAKCOLOR__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
