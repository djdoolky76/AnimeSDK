#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXASSETREF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x16428390)
#define MOLEMOLE_CONFIG_INDEXASSETREF_FLEJKHLBECL_1_OFFSET UNITYSDK_OFFSET(0x16402330)
#define MOLEMOLE_CONFIG_INDEXASSETREF_FLEJKHLBECL_OFFSET UNITYSDK_OFFSET(0x164283D0)
#define MOLEMOLE_CONFIG_INDEXASSETREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x164280C0)
#define MOLEMOLE_CONFIG_INDEXASSETREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16427D20)
#define MOLEMOLE_CONFIG_INDEXASSETREF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16428120)
#define MOLEMOLE_CONFIG_INDEXASSETREF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16427DA0)
#define MOLEMOLE_CONFIG_INDEXASSETREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164279E0)
#define MOLEMOLE_CONFIG_INDEXASSETREF__CTOR_OFFSET UNITYSDK_OFFSET(0x16428380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexAssetRef_TypeDefinitionIndex = 84838;

	class IndexAssetRef : public ::System::Object
	{
	public:
		::System::Int32 bundle; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 pathHash; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_DPIHOJBBGLA_OFFSET))(this);
		}

		::Foundation::AssetPath FLEJKHLBECL(::Il2CppArray<::System::String*>*& FLIKNNJJDBM)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_FLEJKHLBECL_OFFSET))(this, FLIKNNJJDBM);
		}

		::Foundation::AssetPath FLEJKHLBECL_1()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_FLEJKHLBECL_1_OFFSET))(this);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXASSETREF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
