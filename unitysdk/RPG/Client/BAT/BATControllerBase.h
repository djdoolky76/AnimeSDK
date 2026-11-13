#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase_DrawMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client::BAT { class BATRenderer; }
namespace RPG::Client::TAUtils { class MaterialPropertiesCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_BAT_BATCONTROLLERBASE_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1CA8D9E0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA8E010)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8E000)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_GPUDRIVEN_OFFSET UNITYSDK_OFFSET(0x1CA8D800)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1CA8DCD0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1CA8DFE0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_VALIDFORCULLING_OFFSET UNITYSDK_OFFSET(0x1CA8DF60)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1CA8DDA0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET__PROTOTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1CA8D7A0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0x1CA8DD60)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x1CA8DD20)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0x1CA8DCE0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1CA8DC80)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1CA8CE30)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CA8D930)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1CA8DFF0)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATControllerBase_TypeDefinitionIndex = 75788;

	class BATControllerBase : public ::System::Object
	{
	public:
		::RPG::Client::BAT::BATControllerBase_DrawMode _Mode_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* Counts; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* MatrixLists; // 0x20
		::UnityEngine::ComputeBuffer* Buffer; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* MPBLists; // 0x30
		::RPG::Client::TAUtils::MaterialPropertiesCollection* GlobalMaterialProperties; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::MaterialPropertiesCollection*>* PerPrototypeMaterialProperties; // 0x40
		::UnityEngine::Bounds Bounds; // 0x48
		::System::Int32 _TotalCount_k__BackingField; // 0x60
		::System::Boolean _AutoSpawnDataAligned; // 0x64
		::System::Byte _padding1[0x3];
		::RPG::Client::BAT::BATRenderer* Owner; // 0x68
		static ::System::Int32* StaticGet__InstanceDataOffsetShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATControllerBase")->GetStaticField(0x13DC0);
		}

		static ::System::Int32* StaticGet__InstanceDataBufferShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATControllerBase")->GetStaticField(0x13DC4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_CCTOR_OFFSET))();
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_KHGIKBFDLFB_OFFSET))(this);
		}

		::RPG::Client::BAT::BATControllerBase_DrawMode get_Mode()
		{
			return ((::RPG::Client::BAT::BATControllerBase_DrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_MODE_OFFSET))(this);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_IKOHLHDGFKH_OFFSET))(this);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Boolean get_ValidForRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_VALIDFORRENDERING_OFFSET))(this);
		}

		::System::Boolean get_ValidForCulling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_VALIDFORCULLING_OFFSET))(this);
		}

		::System::Boolean get_GPUDriven()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_GPUDRIVEN_OFFSET))(this);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get__PrototypeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET__PROTOTYPECOUNT_OFFSET))(this);
		}

	};
}
