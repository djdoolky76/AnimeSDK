#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarStarRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D923A40)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9230C0)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D922F50)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D922C40)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D922EF0)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D923290)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D922CC0)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9232D0)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9234A0)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D9236A0)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D923400)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D923360)

namespace RPG::GameCore
{
	class PlanetFesAvatarStarExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>**)UnitySDK::FromName("RPG.GameCore", "PlanetFesAvatarStarExcelTable")->GetStaticField(0x2A820);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "PlanetFesAvatarStarExcelTable")->GetStaticField(0x2A828);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PlanetFesAvatarStarExcelTable")->GetStaticField(0x2A830);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "PlanetFesAvatarStarExcelTable")->GetStaticField(0x84D0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PlanetFesAvatarStarExcelTable")->GetStaticField(0x84D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAvatarStarRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PlanetFesAvatarStarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesAvatarStarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarStarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
