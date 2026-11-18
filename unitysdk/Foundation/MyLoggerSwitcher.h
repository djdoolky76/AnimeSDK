#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_MYLOGGERSWITCHER_CHECKISENABLE_OFFSET UNITYSDK_OFFSET(0x1E0A0F40)
#define FOUNDATION_MYLOGGERSWITCHER_GET_SAVEFILENAME_OFFSET UNITYSDK_OFFSET(0x1E0A1300)
#define FOUNDATION_MYLOGGERSWITCHER_LOAD_OFFSET UNITYSDK_OFFSET(0x1E0A0DA0)
#define FOUNDATION_MYLOGGERSWITCHER_SAVE_OFFSET UNITYSDK_OFFSET(0x1E0A1130)
#define FOUNDATION_MYLOGGERSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A0D80)

namespace Foundation
{
	inline static constexpr unsigned int MyLoggerSwitcher_TypeDefinitionIndex = 8280;

	class MyLoggerSwitcher
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _logSwitcher; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckIsEnable(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER_CHECKISENABLE_OFFSET))(this, key);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER_LOAD_OFFSET))(this);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER_SAVE_OFFSET))(this);
		}

		::System::String* get_SaveFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER_GET_SAVEFILENAME_OFFSET))(this);
		}
	};
}
