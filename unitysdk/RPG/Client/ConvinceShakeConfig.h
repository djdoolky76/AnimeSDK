#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ConvinceShakeConfig_ConvinceShakeData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONVINCESHAKECONFIG_BBLJEGEGIEE_OFFSET UNITYSDK_OFFSET(0xCBC69E0)
#define RPG_CLIENT_CONVINCESHAKECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC6B20)

namespace RPG::Client
{
	class ConvinceShakeConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Datas; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCESHAKECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::ConvinceShakeConfig_ConvinceShakeData* BBLJEGEGIEE(::System::String* a1)
		{
			return ((::RPG::Client::ConvinceShakeConfig_ConvinceShakeData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCESHAKECONFIG_BBLJEGEGIEE_OFFSET))(this, a1);
		}

	};
}
