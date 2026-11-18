#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOp.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { class ConfigModule; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGMODULELIB_RUNTIME_PRELOADOP_ADDLOAD_OFFSET UNITYSDK_OFFSET(0x1F4D2190)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_BEGINLOADPHASE_OFFSET UNITYSDK_OFFSET(0x1F4D2890)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_DRIVELOADOP_OFFSET UNITYSDK_OFFSET(0x1F4D2DC0)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_GET_ISRESOLVED_OFFSET UNITYSDK_OFFSET(0x1F4D24A0)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1F4D2590)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x1F4D24B0)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1F4D2970)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4D2AF0)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1F4D2AA0)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_ONRESOLVEDONE_OFFSET UNITYSDK_OFFSET(0x1F4D2B80)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_SETRESOLVE_1_OFFSET UNITYSDK_OFFSET(0x1F4D23B0)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_SETRESOLVE_OFFSET UNITYSDK_OFFSET(0x1F4D2250)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP_STARTLOAD_OFFSET UNITYSDK_OFFSET(0x1F4D2770)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D2100)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP___BASE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1F4D2F20)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP___BASE_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x1F4D3070)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP___BASE_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4D3080)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP___BASE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1F4D3110)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int PreloadOp_TypeDefinitionIndex = 8495;

	class PreloadOp : public ::ConfigModuleLib::Runtime::LoadOp
	{
	public:
		::System::Func_1<::System::Boolean>* _onResolved; // 0x30
		::System::Collections::Generic::List_1<::ConfigModuleLib::Runtime::LoadOp*>* _loadOps; // 0x38
		::ConfigModuleLib::Runtime::LoadOp* _resolveOp; // 0x40
		::System::Int32 _pendingLoadCount; // 0x48
		::System::Int32 _failedLoadCount; // 0x4C

		::System::Void _ctor(::ConfigModuleLib::Runtime::ConfigModule* owner)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::ConfigModule*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP__CTOR_OFFSET))(this, owner);
		}

		::System::Void AddLoad(::ConfigModuleLib::Runtime::LoadOp* op)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOp*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_ADDLOAD_OFFSET))(this, op);
		}

		::System::Void SetResolve(::ConfigModuleLib::Runtime::LoadOp* op, ::System::Func_1<::System::Boolean>* onResolved)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOp*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_SETRESOLVE_OFFSET))(this, op, onResolved);
		}

		::System::Void SetResolve_1(::ConfigModuleLib::Runtime::LoadOpHandle handle, ::System::Func_1<::System::Boolean>* onResolved)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOpHandle, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_SETRESOLVE_1_OFFSET))(this, handle, onResolved);
		}

		::System::Boolean get_IsResolved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_GET_ISRESOLVED_OFFSET))(this);
		}

		::System::Int32 get_Total()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_GET_TOTAL_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void StartLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_STARTLOAD_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_ONFINISH_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnResolveDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_ONRESOLVEDONE_OFFSET))(this);
		}

		::System::Void BeginLoadPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_BEGINLOADPHASE_OFFSET))(this);
		}

		::System::Void DriveLoadOp(::ConfigModuleLib::Runtime::LoadOp* op)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOp*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP_DRIVELOADOP_OFFSET))(this, op);
		}

		::System::Single __base_get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP___BASE_GET_PROGRESS_OFFSET))(this);
		}

		::System::Int32 __base_get_Total()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP___BASE_GET_TOTAL_OFFSET))(this);
		}

		::System::Void __base_OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP___BASE_ONDISPOSE_OFFSET))(this);
		}

		::System::Void __base_OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP___BASE_ONFINISH_OFFSET))(this);
		}
	};
}
