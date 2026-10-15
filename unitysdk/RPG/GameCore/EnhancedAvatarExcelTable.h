#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnhancedAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D616810)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D615990)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D615860)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETMAXENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1D6163B0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D615550)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D615800)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D615B30)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D6155D0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D6167D0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D615B70)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D615D40)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D616050)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDROWTOMAXENHANCEDIDDICT_OFFSET UNITYSDK_OFFSET(0x1D616690)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__INITMAXENHANCEDIDDICT_OFFSET UNITYSDK_OFFSET(0x1D6164B0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D615CA0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D615C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnhancedAvatarExcelTable_TypeDefinitionIndex = 12712;

	class EnhancedAvatarExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__AvatarIDToMaxEnhancedID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "EnhancedAvatarExcelTable")->GetStaticField(0x23070);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "EnhancedAvatarExcelTable")->GetStaticField(0x23078);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>**)UnitySDK::FromName("RPG.GameCore", "EnhancedAvatarExcelTable")->GetStaticField(0x23080);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "EnhancedAvatarExcelTable")->GetStaticField(0x23088);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "EnhancedAvatarExcelTable")->GetStaticField(0x7980);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "EnhancedAvatarExcelTable")->GetStaticField(0x7981);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EnhancedAvatarRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::EnhancedAvatarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EnhancedAvatarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EnhancedAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetMaxEnhancedID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETMAXENHANCEDID_OFFSET))(a1);
		}

		static ::System::Void _InitMaxEnhancedIDDict()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__INITMAXENHANCEDIDDICT_OFFSET))();
		}

		static ::System::Void _AddRowToMaxEnhancedIDDict(::RPG::GameCore::EnhancedAvatarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EnhancedAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDROWTOMAXENHANCEDIDDICT_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADALL_OFFSET))();
		}

	};
}
