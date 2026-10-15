#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideBadgeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3D2180)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3D18B0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3D1740)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3D1430)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3D16E0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3D1A40)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3D14B0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3D1A80)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D1C50)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3D1E10)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3D1BB0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3D1B10)

namespace RPG::GameCore
{
	class AetherDivideBadgeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "AetherDivideBadgeExcelTable")->GetStaticField(0x259A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideBadgeExcelTable")->GetStaticField(0x259A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideBadgeExcelTable")->GetStaticField(0x259B0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AetherDivideBadgeExcelTable")->GetStaticField(0x8290);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AetherDivideBadgeExcelTable")->GetStaticField(0x8291);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideBadgeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideBadgeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideBadgeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideBadgeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
