#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECGNDFACKKC.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class CHJFODDFPJH;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x5F21D0)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x5F2270)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x5F21E0)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x5F2330)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_IFLLEJAJBPE_OFFSET UNITYSDK_OFFSET(0x5F2300)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_KCIBMEINJAF_OFFSET UNITYSDK_OFFSET(0x5F2320)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x5F22D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlackboardParam_TypeDefinitionIndex = 86567;

	struct alignas(8) ConfigBlackboardParam
	{
		::System::String* Key; // 0x10
		::ECGNDFACKKC ParamType; // 0x18
		::System::Boolean BoolValue; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 IntValue; // 0x20
		::System::Single FloatValue; // 0x24
		::System::String* StringValue; // 0x28
		::UnityEngine::Vector3 VectorValue; // 0x30
		::System::Byte _padding1[0x4];
		::MoleMole::Config::ConfigDynamicValue* DynamicValue; // 0x40

		::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::DPKOIBEFPAO IFLLEJAJBPE()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_IFLLEJAJBPE_OFFSET))(this);
		}

		::System::Void KCIBMEINJAF(::CHJFODDFPJH* GAPEENBKDAK)
		{
			return ((::System::Void(*)(::PVOID, ::CHJFODDFPJH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_KCIBMEINJAF_OFFSET))(this, GAPEENBKDAK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
