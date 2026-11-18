#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGNEWBIE_EXPORTTOJSON_OFFSET UNITYSDK_OFFSET(0x103E35A0)
#define MOLEMOLE_CONFIGNEWBIE_RELOADNEWBIECONFIG_OFFSET UNITYSDK_OFFSET(0x103E35E0)
#define MOLEMOLE_CONFIGNEWBIE__CTOR_OFFSET UNITYSDK_OFFSET(0x103E3620)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_TypeDefinitionIndex = 55929;

	class ConfigNewbie : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* NewbieList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE__CTOR_OFFSET))(this);
		}

		::System::Void ExportToJson()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_EXPORTTOJSON_OFFSET))(this);
		}

		::System::Void ReloadNewbieConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_RELOADNEWBIECONFIG_OFFSET))(this);
		}
	};
}
