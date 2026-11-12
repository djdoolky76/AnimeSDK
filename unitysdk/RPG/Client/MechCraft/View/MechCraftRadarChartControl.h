#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0E83E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE0E83D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_GET_DISTRIBUTION_OFFSET UNITYSDK_OFFSET(0xE0E7C30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_HJPCCPKNMKL_OFFSET UNITYSDK_OFFSET(0xE0E7A10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE0E7CD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_OAPEMJLHPAI_OFFSET UNITYSDK_OFFSET(0xE0E8250)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE0E8370)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_SET_DISTRIBUTION_OFFSET UNITYSDK_OFFSET(0xE0E7C70)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRadarChartControl_TypeDefinitionIndex = 82601;

	class MechCraftRadarChartControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* BDKCBIFDCOM; // 0x18
		::UnityEngine::Material* NAOKMFOCKJM; // 0x20
		static ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>** StaticGet_EBLFGPECGIE()
		{
			return (::System::Collections::Generic::IReadOnlyList_1<::System::Int32>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "MechCraftRadarChartControl")->GetStaticField(0x65920);
		}

		static ::System::Int32* StaticGet_FKILCDOGGAI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.MechCraft.View", "MechCraftRadarChartControl")->GetStaticField(0x146D0);
		}

		// static const ::System::Object MPOBDBMFKBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* HJPCCPKNMKL()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_HJPCCPKNMKL_OFFSET))();
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* get_Distribution()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_GET_DISTRIBUTION_OFFSET))(this);
		}

		::System::Void set_Distribution(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_SET_DISTRIBUTION_OFFSET))(this, a1);
		}

		::UnityEngine::Material* OAPEMJLHPAI()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_OAPEMJLHPAI_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
