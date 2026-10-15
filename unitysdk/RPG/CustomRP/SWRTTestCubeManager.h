#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class SWRTTestCube; }
namespace RPG::CustomRP { class SWRTTestCubeManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC472B0)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC47270)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x1CC469C0)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CC47240)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1CC47050)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1CC471D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTTestCubeManager_TypeDefinitionIndex = 37874;

	class SWRTTestCubeManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::CustomRP::SWRTTestCube*>* _Cubes; // 0x10
		static ::RPG::CustomRP::SWRTTestCubeManager** StaticGet_s_Instance()
		{
			return (::RPG::CustomRP::SWRTTestCubeManager**)UnitySDK::FromName("RPG.CustomRP", "SWRTTestCubeManager")->GetStaticField(0x31540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_CCTOR_OFFSET))();
		}

		static ::RPG::CustomRP::SWRTTestCubeManager* get_Instance()
		{
			return ((::RPG::CustomRP::SWRTTestCubeManager*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Register(::RPG::CustomRP::SWRTTestCube* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::SWRTTestCube*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_REGISTER_OFFSET))(this, a1);
		}

		::System::Void Unregister(::RPG::CustomRP::SWRTTestCube* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::SWRTTestCube*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_UNREGISTER_OFFSET))(this, a1);
		}

		::RPG::CustomRP::SWRTTestCube* GetActive()
		{
			return ((::RPG::CustomRP::SWRTTestCube*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_GETACTIVE_OFFSET))(this);
		}

	};
}
