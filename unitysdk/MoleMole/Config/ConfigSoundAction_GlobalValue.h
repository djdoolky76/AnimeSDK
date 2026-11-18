#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x192AB8D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x192AB8C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x192AB6E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x192AB720)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x192AC000)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_WALK_OFFSET UNITYSDK_OFFSET(0x192AC1B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x192AC3D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x192AC390)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x192AC530)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x192AC540)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x192AC550)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_GlobalValue_TypeDefinitionIndex = 90873;

	class ConfigSoundAction_GlobalValue : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_operateTypes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_TypeDefinitionIndex)->GetStaticField(0x520A0);
		}
		::System::String* scopeName; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* branchList; // 0x28
		::System::Int32 value; // 0x30
		::System::Int32 operateType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE__CCTOR_OFFSET))();
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_WALK_OFFSET))(this, callback);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
