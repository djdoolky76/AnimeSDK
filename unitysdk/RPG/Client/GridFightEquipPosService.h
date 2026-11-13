#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipPosService; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D181B70)
#define RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D181720)
#define RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_GETTRANSFORMBYUID_OFFSET UNITYSDK_OFFSET(0x1D16C6D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D16C5A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_REMOVETRANSFORMBYUID_1_OFFSET UNITYSDK_OFFSET(0x1D181A50)
#define RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_REMOVETRANSFORMBYUID_OFFSET UNITYSDK_OFFSET(0x1D181960)
#define RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_SETTRANSFORMBYUID_OFFSET UNITYSDK_OFFSET(0x1D1817B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE__NOTIFYPOSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D1819B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipPosService_TypeDefinitionIndex = 66566;

	class GridFightEquipPosService : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Transform*>* _TransformByUID; // 0x10
		static ::RPG::Client::GridFightEquipPosService** StaticGet__Instance()
		{
			return (::RPG::Client::GridFightEquipPosService**)UnitySDK::FromName("RPG.Client", "GridFightEquipPosService")->GetStaticField(0x70FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightEquipPosService* get_Instance()
		{
			return ((::RPG::Client::GridFightEquipPosService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_GET_INSTANCE_OFFSET))();
		}

		::System::Void SetTransformByUID(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_SETTRANSFORMBYUID_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveTransformByUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_REMOVETRANSFORMBYUID_OFFSET))(this, a1);
		}

		::System::Void RemoveTransformByUID_1(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_REMOVETRANSFORMBYUID_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* GetTransformByUID(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_GETTRANSFORMBYUID_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE_CLEAR_OFFSET))(this);
		}

		::System::Void _NotifyPosChanged(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPPOSSERVICE__NOTIFYPOSCHANGED_OFFSET))(this, a1, a2);
		}

	};
}
