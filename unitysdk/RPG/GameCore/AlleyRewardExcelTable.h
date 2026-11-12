#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60ADC0)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E60A5B0)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E60A480)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E60A170)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E60A420)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E60A700)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E60A1F0)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E60A740)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E60A910)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E60AAA0)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E60A870)
#define RPG_GAMECORE_ALLEYREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E60A7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyRewardExcelTable_TypeDefinitionIndex = 12697;

	class AlleyRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AlleyRewardExcelTable")->GetStaticField(0x3F1D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AlleyRewardExcelTable")->GetStaticField(0x3F1D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyRewardRow*>**)UnitySDK::FromName("RPG.GameCore", "AlleyRewardExcelTable")->GetStaticField(0x3F1E0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AlleyRewardExcelTable")->GetStaticField(0xD900);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AlleyRewardExcelTable")->GetStaticField(0xD901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
