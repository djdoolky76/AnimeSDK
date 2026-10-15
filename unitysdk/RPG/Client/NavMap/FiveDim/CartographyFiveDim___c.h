#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAHPCEMFND;
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap::FiveDim { class EntityIcon; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD9403F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD940420)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__GETCHESTICONS_B__5_0_OFFSET UNITYSDK_OFFSET(0xD940430)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__GET_ALLFACES_B__20_0_OFFSET UNITYSDK_OFFSET(0xD9404C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C___COLLECTTRACKINGMISSIONICON_B__10_0_OFFSET UNITYSDK_OFFSET(0xD940450)

namespace RPG::Client::NavMap::FiveDim
{
	class CartographyFiveDim___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)UnitySDK::FromName("RPG.Client.NavMap.FiveDim", "<>c")->GetStaticField(0x6EC70);
		}

		static ::System::Func_2<::APAHPCEMFND*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::FiveDim::Face*>*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::APAHPCEMFND*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::FiveDim::Face*>*>**)UnitySDK::FromName("RPG.Client.NavMap.FiveDim", "<>c")->GetStaticField(0x6EC78);
		}

		static ::System::Func_2<::RPG::Client::NavMap::FiveDim::EntityIcon*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::FiveDim::EntityIcon*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.NavMap.FiveDim", "<>c")->GetStaticField(0x6EC80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.NavMap.FiveDim", "<>c")->GetStaticField(0x6EC88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChestIcons_b__5_0(::RPG::Client::NavMap::FiveDim::EntityIcon* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__GETCHESTICONS_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 __CollectTrackingMissionIcon_b__10_0(::RPG::Client::SubMissionData* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C___COLLECTTRACKINGMISSIONICON_B__10_0_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::FiveDim::Face*>* _get_AllFaces_b__20_0(::APAHPCEMFND* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::FiveDim::Face*>*(*)(::PVOID, ::APAHPCEMFND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__GET_ALLFACES_B__20_0_OFFSET))(this, a1);
		}

	};
}
