#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace ConfigModuleLib::Runtime { class LoadOpHandle_CompositeState; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_ADDCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x8DEAF0)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEADDCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x8DE870)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEISDONE_OFFSET UNITYSDK_OFFSET(0x8DE780)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEISRESOLVED_OFFSET UNITYSDK_OFFSET(0x8DE7E0)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEPROGRESS_OFFSET UNITYSDK_OFFSET(0x8DE860)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITERESOLVEPROGRESS_OFFSET UNITYSDK_OFFSET(0x8DE840)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITETOTAL_OFFSET UNITYSDK_OFFSET(0x8DE850)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x8DE8D0)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x8DE950)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_ISRESOLVED_OFFSET UNITYSDK_OFFSET(0x8DE960)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8DE8F0)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1E07E020)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_OP_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x8DEA60)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_RESOLVEPROGRESS_OFFSET UNITYSDK_OFFSET(0x8DE970)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x8DE9E0)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8DEB10)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8DEB60)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8DEBB0)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x8DEB00)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_WHENALL_1_OFFSET UNITYSDK_OFFSET(0x1E07E990)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_WHENALL_OFFSET UNITYSDK_OFFSET(0x1E07E040)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8DE8E0)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE770)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadOpHandle_TypeDefinitionIndex = 8372;

	struct alignas(8) LoadOpHandle
	{
		::System::Collections::Generic::IEnumerable_1<::ConfigModuleLib::Runtime::LoadOpHandle>* _handles; // 0x10
		::ConfigModuleLib::Runtime::LoadOpHandle_CompositeState* _state; // 0x18
		::ConfigModuleLib::Runtime::LoadOp* _op; // 0x20

		/*
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::ConfigModuleLib::Runtime::LoadOpHandle>* handles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::ConfigModuleLib::Runtime::LoadOpHandle>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE__CTOR_OFFSET))(this, handles);
		}
		*/

		::System::Void _ctor_1(::ConfigModuleLib::Runtime::LoadOp* op)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOp*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE__CTOR_1_OFFSET))(this, op);
		}

		/*
		static ::ConfigModuleLib::Runtime::LoadOpHandle WhenAll(::System::Collections::Generic::IEnumerable_1<::ConfigModuleLib::Runtime::LoadOpHandle>* handles)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::System::Collections::Generic::IEnumerable_1<::ConfigModuleLib::Runtime::LoadOpHandle>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_WHENALL_OFFSET))(handles);
		}
		*/

		/*
		static ::ConfigModuleLib::Runtime::LoadOpHandle WhenAll_1(::Il2CppArray<::ConfigModuleLib::Runtime::LoadOpHandle>* handles)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::Il2CppArray<::ConfigModuleLib::Runtime::LoadOpHandle>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_WHENALL_1_OFFSET))(handles);
		}
		*/

		::System::Boolean CompositeIsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEISDONE_OFFSET))(this);
		}

		::System::Boolean CompositeIsResolved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEISRESOLVED_OFFSET))(this);
		}

		::System::Single CompositeResolveProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITERESOLVEPROGRESS_OFFSET))(this);
		}

		::System::Int32 CompositeTotal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITETOTAL_OFFSET))(this);
		}

		::System::Single CompositeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEPROGRESS_OFFSET))(this);
		}

		/*
		::System::Void CompositeAddCompleteCallback(::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEADDCOMPLETECALLBACK_OFFSET))(this, callback);
		}
		*/

		::System::Boolean CompositeWaitForCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITEWAITFORCOMPLETION_OFFSET))(this);
		}

		/*
		static ::ConfigModuleLib::Runtime::LoadOpHandle get_None()
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)())((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_NONE_OFFSET))();
		}
		*/

		::ConfigModuleLib::Runtime::LoadOp* get_Op()
		{
			return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_OP_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_IsResolved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_ISRESOLVED_OFFSET))(this);
		}

		::System::Single get_ResolveProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_RESOLVEPROGRESS_OFFSET))(this);
		}

		::System::Int32 get_Total()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_TOTAL_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_GET_PROGRESS_OFFSET))(this);
		}

		/*
		::System::Void AddCompleteCallback(::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_ADDCOMPLETECALLBACK_OFFSET))(this, callback);
		}
		*/

		::System::Boolean WaitForCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_WAITFORCOMPLETION_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
