#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/SerializedScriptableObjectBase.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGONGOINGTYPEDURATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16418C30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOnGoingTypeDurationData_TypeDefinitionIndex = 80462;

	class ConfigOnGoingTypeDurationData : public ::MoleMole::SerializedScriptableObjectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Object*>* configDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGONGOINGTYPEDURATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
