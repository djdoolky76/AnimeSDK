#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_BBHDHKGNDOO_OFFSET UNITYSDK_OFFSET(0xCCFD3B0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCCFD600)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xCCFC970)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_NKJNLBIJDLF_OFFSET UNITYSDK_OFFSET(0xCCFD4A0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0xCCFCC90)

namespace RPG::Client
{
	class DynamicMaterialLoader_RendererLoadItem : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x10
		::Il2CppArray<::System::Object*>* Mats; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* _MatInsts; // 0x20
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__TmpNameIDs()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("RPG.Client", "RendererLoadItem")->GetStaticField(0x33810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_CTOR_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_HKEPJLDBGIG_OFFSET))(this);
		}

		::System::Void PEECNCABGFD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_PEECNCABGFD_OFFSET))(this, a1);
		}

		::System::Void BBHDHKGNDOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_BBHDHKGNDOO_OFFSET))(this);
		}

		static ::System::Void NKJNLBIJDLF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_NKJNLBIJDLF_OFFSET))(a1);
		}

	};
}
