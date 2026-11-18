#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class CLFBLCIJPKD_PEPKKBJMJCD;
class KAJAGPBJADH;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGLEVELCONDITIONDYNAMICWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0x69D3D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLevelConditionDynamicWrapper_TypeDefinitionIndex = 70438;

	struct alignas(8) ConfigLevelConditionDynamicWrapper
	{
		// static const ::System::String* DynamicKeyConditionID; // 0x0
		// static const ::System::String* DynamicKeyConditionTemplate; // 0x0
		// static const ::System::String* DynamicKeyConditionScriptArgs; // 0x0
		::MoleMole::Config::DynamicInt* ConditionID; // 0x10
		::MoleMole::Config::DynamicInt* ConditionTemplate; // 0x18
		::MoleMole::Config::DynamicString* ConditionScriptArgs; // 0x20

		::CLFBLCIJPKD_PEPKKBJMJCD* Create(::KAJAGPBJADH* argMap)
		{
			return ((::CLFBLCIJPKD_PEPKKBJMJCD*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELCONDITIONDYNAMICWRAPPER_CREATE_OFFSET))(this, argMap);
		}
	};
}
