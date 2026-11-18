#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12792070)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12791B70)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12791010)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12791BD0)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12791090)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12790680)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x12792060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexBundleRef_TypeDefinitionIndex = 51383;

	class IndexBundleRef : public ::System::Object
	{
	public:
		::System::UInt32 blockIndex; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 bundleHashName; // 0x18
		::System::UInt64 bundleHash; // 0x20
		::System::UInt32 offset; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Int32>* children; // 0x30
		::Il2CppArray<::System::Int32>* directChildren; // 0x38
		::System::UInt32 fileSize; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
