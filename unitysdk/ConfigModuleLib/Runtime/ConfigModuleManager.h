#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/UnloadPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ConfigModuleLib/Runtime/ConfigModuleManager_PhasesCache.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { class ConfigModule; }
namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_CHECKSTEPLOADINGFRAME_OFFSET UNITYSDK_OFFSET(0x1F2CDFB0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_CLEARPHASEREGISTRATIONS_OFFSET UNITYSDK_OFFSET(0x1F2CD870)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_CREATEMODULEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1F2CE900)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_DISPOSEMODULESAFE_OFFSET UNITYSDK_OFFSET(0x1F2CE5B0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_GETORCREATE_OFFSET UNITYSDK_OFFSET(0x1F2CDDE0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_GETPHASESCACHE_OFFSET UNITYSDK_OFFSET(0x1F2CD980)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_PRELOADBYPHASEASYNC_OFFSET UNITYSDK_OFFSET(0x1F2CE0A0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_PRELOADBYPHASE_OFFSET UNITYSDK_OFFSET(0x1F2CDB60)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_RECORDLAZYSYNCLOAD_OFFSET UNITYSDK_OFFSET(0x1F2CD820)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1F2CE6A0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_UNLOADBYPHASE_OFFSET UNITYSDK_OFFSET(0x1F2CE140)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2CEC00)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int ConfigModuleManager_TypeDefinitionIndex = 8192;

	class ConfigModuleManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_s_removeCache()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x6660);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ConfigModuleLib::Runtime::ConfigModule*>** StaticGet_Modules()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::ConfigModuleLib::Runtime::ConfigModule*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x6668);
		}
		static ::System::Func_1<::System::String*>** StaticGet_LazyLoadLogContextProvider()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x6670);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_PhasesCaches()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x6678);
		}
		static ::System::Int32* StaticGet_LazyLoadLogMaxFileCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x3300);
		}
		static ::System::Boolean* StaticGet_UseGameInsConfigModule()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x3304);
		}
		static ::System::Boolean* StaticGet_LazyLoadLogEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x3305);
		}
		static ::System::Boolean* StaticGet_UseGlobalConfigModule()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x3306);
		}
		static ::System::Boolean* StaticGet_UseConfigModule()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x3307);
		}
		static ::System::Single* StaticGet_s_stepLoadingWindowBegin()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x3308);
		}
		static ::System::Single* StaticGet_s_stepLoadingFrameBudget()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x330C);
		}
		static ::System::Boolean* StaticGet_EnablePhaseUnload()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x3310);
		}
		static ::System::Boolean* StaticGet_EnablePhasePreload()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x3311);
		}
		static ::System::Boolean* StaticGet_ValidatePhaseAttributeConsistency()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigModuleManager_TypeDefinitionIndex)->GetStaticField(0x3312);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void RecordLazySyncLoad(::ConfigModuleLib::Runtime::LoadOp* op, ::System::Boolean cold, ::System::Int64 startTimestamp)
		{
			return ((::System::Void(*)(::ConfigModuleLib::Runtime::LoadOp*, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_RECORDLAZYSYNCLOAD_OFFSET))(op, cold, startTimestamp);
		}

		static ::System::Void ClearPhaseRegistrations()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_CLEARPHASEREGISTRATIONS_OFFSET))();
		}

		static ::ConfigModuleLib::Runtime::ConfigModuleManager_PhasesCache GetPhasesCache(::System::Type* type)
		{
			return ((::ConfigModuleLib::Runtime::ConfigModuleManager_PhasesCache(*)(::System::Type*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_GETPHASESCACHE_OFFSET))(type);
		}

		static ::ConfigModuleLib::Runtime::LoadOpHandle PreloadByPhase(::ConfigModuleLib::Runtime::LoadPhase phase)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_PRELOADBYPHASE_OFFSET))(phase);
		}

		static ::System::Boolean CheckStepLoadingFrame(::System::Single budgetCoefficient)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_CHECKSTEPLOADINGFRAME_OFFSET))(budgetCoefficient);
		}

		static ::System::Collections::IEnumerator* PreloadByPhaseAsync(::ConfigModuleLib::Runtime::LoadPhase phase, ::System::Single budgetCoefficient, ::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>* onComplete, ::System::Action_1<::System::Single>* onProgress)
		{
			return ((::System::Collections::IEnumerator*(*)(::ConfigModuleLib::Runtime::LoadPhase, ::System::Single, ::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_PRELOADBYPHASEASYNC_OFFSET))(phase, budgetCoefficient, onComplete, onProgress);
		}

		static ::System::Void UnloadByPhase(::ConfigModuleLib::Runtime::UnloadPhase phase)
		{
			return ((::System::Void(*)(::ConfigModuleLib::Runtime::UnloadPhase))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_UNLOADBYPHASE_OFFSET))(phase);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_UNLOADALL_OFFSET))();
		}

		static ::System::Void DisposeModuleSafe(::ConfigModuleLib::Runtime::ConfigModule* module)
		{
			return ((::System::Void(*)(::ConfigModuleLib::Runtime::ConfigModule*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_DISPOSEMODULESAFE_OFFSET))(module);
		}

		static ::ConfigModuleLib::Runtime::ConfigModule* GetOrCreate(::System::Type* type)
		{
			return ((::ConfigModuleLib::Runtime::ConfigModule*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_GETORCREATE_OFFSET))(type);
		}

		static ::ConfigModuleLib::Runtime::ConfigModule* CreateModuleInstance_1(::System::Type* type)
		{
			return ((::ConfigModuleLib::Runtime::ConfigModule*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER_CREATEMODULEINSTANCE_1_OFFSET))(type);
		}
	};
}
