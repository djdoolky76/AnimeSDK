#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposableObjectManager_ModuleType.h"
#include "unitysdk/System/Object.h"
namespace CriWare { class CriDisposable; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_CALLONMODULEFINALIZATION_OFFSET UNITYSDK_OFFSET(0x1EC62910)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC6B5A0)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_DISPOSEALL_OFFSET UNITYSDK_OFFSET(0x1EC6AFE0)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_GETNEXTWITHTYPE_OFFSET UNITYSDK_OFFSET(0x1EC6B4A0)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1EC6AFB0)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1EC4C020)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_SEARCHFORDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1EC6AD30)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1EC4C520)

namespace CriWare
{
	inline static constexpr unsigned int CriDisposableObjectManager_TypeDefinitionIndex = 41171;

	class CriDisposableObjectManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_refList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("CriWare", "CriDisposableObjectManager")->GetStaticField(0x5CD30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Int32 SearchForDisposable(::CriWare::CriDisposable* a1)
		{
			return ((::System::Int32(*)(::CriWare::CriDisposable*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_SEARCHFORDISPOSABLE_OFFSET))(a1);
		}

		static ::System::Void Register(::CriWare::CriDisposable* a1, ::CriWare::CriDisposableObjectManager_ModuleType a2)
		{
			return ((::System::Void(*)(::CriWare::CriDisposable*, ::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_REGISTER_OFFSET))(a1, a2);
		}

		static ::System::Boolean Unregister(::CriWare::CriDisposable* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriDisposable*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_UNREGISTER_OFFSET))(a1);
		}

		static ::System::Boolean IsDisposed(::CriWare::CriDisposable* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriDisposable*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_ISDISPOSED_OFFSET))(a1);
		}

		static ::System::Void CallOnModuleFinalization(::CriWare::CriDisposableObjectManager_ModuleType a1)
		{
			return ((::System::Void(*)(::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_CALLONMODULEFINALIZATION_OFFSET))(a1);
		}

		static ::System::Int32 GetNextWithType(::CriWare::CriDisposableObjectManager_ModuleType a1)
		{
			return ((::System::Int32(*)(::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_GETNEXTWITHTYPE_OFFSET))(a1);
		}

		static ::System::Void DisposeAll(::CriWare::CriDisposableObjectManager_ModuleType a1)
		{
			return ((::System::Void(*)(::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_DISPOSEALL_OFFSET))(a1);
		}

	};
}
