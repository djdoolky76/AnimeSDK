#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace ConfigModuleLib::Runtime { class PreloadOp; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_CHECKALIVE_OFFSET UNITYSDK_OFFSET(0x1F2CC940)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_CREATEPRELOADOP_1_OFFSET UNITYSDK_OFFSET(0x1F2CCD40)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_CREATEPRELOADOP_OFFSET UNITYSDK_OFFSET(0x1F2CCC30)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_DISPOSEALLOPS_OFFSET UNITYSDK_OFFSET(0x1F2CD290)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_DISPOSEMODULE_OFFSET UNITYSDK_OFFSET(0x1F2CD6A0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_DISPOSESUBMODULES_OFFSET UNITYSDK_OFFSET(0x1F2CD520)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1F2CD7C0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1F2CD7E0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_PRELOADALLOPS_OFFSET UNITYSDK_OFFSET(0x1F2CCFB0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1F2CD4A0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_REGISTEROP_OFFSET UNITYSDK_OFFSET(0x1F2CCF20)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1F2CD7D0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_STARTLOADOP_1_OFFSET UNITYSDK_OFFSET(0x1F2CC990)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE_STARTLOADOP_OFFSET UNITYSDK_OFFSET(0x1F2CC7F0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CD740)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int ConfigModule_TypeDefinitionIndex = 7996;

	class ConfigModule : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ConfigModuleLib::Runtime::ConfigModule*>* _subModules; // 0x10
		::System::Collections::Generic::List_1<::ConfigModuleLib::Runtime::LoadOp*>* _ops; // 0x18
		::System::Boolean _IsDisposed_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE__CTOR_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOpHandle StartLoadOp(::ConfigModuleLib::Runtime::LoadOp* op)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOp*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_STARTLOADOP_OFFSET))(this, op);
		}

		::ConfigModuleLib::Runtime::LoadOpHandle StartLoadOp_1(::Il2CppArray<::ConfigModuleLib::Runtime::LoadOp*>* ops)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::Il2CppArray<::ConfigModuleLib::Runtime::LoadOp*>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_STARTLOADOP_1_OFFSET))(this, ops);
		}

		::ConfigModuleLib::Runtime::PreloadOp* CreatePreloadOp()
		{
			return ((::ConfigModuleLib::Runtime::PreloadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_CREATEPRELOADOP_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::PreloadOp* CreatePreloadOp_1(::ConfigModuleLib::Runtime::LoadOpHandle resolveDependency, ::System::Func_2<::ConfigModuleLib::Runtime::PreloadOp*, ::System::Boolean>* onResolved)
		{
			return ((::ConfigModuleLib::Runtime::PreloadOp*(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOpHandle, ::System::Func_2<::ConfigModuleLib::Runtime::PreloadOp*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_CREATEPRELOADOP_1_OFFSET))(this, resolveDependency, onResolved);
		}

		::System::Void RegisterOp(::ConfigModuleLib::Runtime::LoadOp* op)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOp*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_REGISTEROP_OFFSET))(this, op);
		}

		::ConfigModuleLib::Runtime::LoadOpHandle PreloadAllOps()
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_PRELOADALLOPS_OFFSET))(this);
		}

		::System::Void DisposeAllOps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_DISPOSEALLOPS_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase phase)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_PRELOADFORPHASE_OFFSET))(this, phase);
		}

		::System::Void DisposeSubModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_DISPOSESUBMODULES_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_IsDisposed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_SET_ISDISPOSED_OFFSET))(this, value);
		}

		::System::Void DisposeModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_DISPOSEMODULE_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean CheckAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE_CHECKALIVE_OFFSET))(this);
		}
	};
}
