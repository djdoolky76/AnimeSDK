#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideChallengeRankRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3D3690)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3D2C80)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3D2B50)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3D2840)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3D2AF0)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3D2E10)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3D28C0)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3D2E50)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D3020)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3D3370)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3D2F80)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3D2EE0)

namespace RPG::GameCore
{
	class AetherDivideChallengeRankExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "AetherDivideChallengeRankExcelTable")->GetStaticField(0x2B50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideChallengeRankExcelTable")->GetStaticField(0x2B58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AetherDivideChallengeRankExcelTable")->GetStaticField(0x2B60);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AetherDivideChallengeRankExcelTable")->GetStaticField(0x2210);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AetherDivideChallengeRankExcelTable")->GetStaticField(0x2211);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideChallengeRankRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideChallengeRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideChallengeRankRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideChallengeRankRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
