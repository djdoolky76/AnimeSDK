#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDAMAGESTAGGERLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x12770060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDamageStaggerLevel_TypeDefinitionIndex = 46973;

	class ConfigDamageStaggerLevel : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* damageStaggerLevelList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDAMAGESTAGGERLEVEL__CTOR_OFFSET))(this);
		}
	};
}
