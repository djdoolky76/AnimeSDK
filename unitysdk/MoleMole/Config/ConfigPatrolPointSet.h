#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEKAJBHGPBN.h"
#include "unitysdk/MoleMole/Config/ConfigPatrolPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Config { class ConfigStreamGamePatrolReachedAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A766450)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A767840)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A766B70)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A7678A0)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A766BF0)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A767D40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPatrolPointSet_TypeDefinitionIndex = 88548;

	class ConfigPatrolPointSet : public ::System::Object
	{
	public:
		::System::String* SetId; // 0x10
		::HEKAJBHGPBN PatrolMode; // 0x18
		::System::Boolean UseNavMesh; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single TurnSpeed; // 0x20
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPatrolPoint>* Points; // 0x28
		::MoleMole::Config::ConfigStreamGamePatrolReachedAction* DefaultOnPointReached; // 0x30
		::MoleMole::Config::ConfigStreamGamePatrolReachedAction* OnCycleEndReached; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET__CTOR_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
