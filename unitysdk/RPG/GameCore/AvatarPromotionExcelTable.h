#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/AvatarPromotionExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class AvatarPromotionRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D41BF40)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D419790)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D419540)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D419180)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D4192A0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D4194D0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D419B30)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D419320)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D419D60)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D419230)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D419840)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D419B70)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D41BA10)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D41BA60)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D41B9B0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D419D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionExcelTable_TypeDefinitionIndex = 12734;

	class AvatarPromotionExcelTable : public ::System::Object
	{
	public:
		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "AvatarPromotionExcelTable")->GetStaticField(0x507C0);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::AvatarPromotionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::AvatarPromotionRow*>**)UnitySDK::FromName("RPG.GameCore", "AvatarPromotionExcelTable")->GetStaticField(0x507C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AvatarPromotionExcelTable")->GetStaticField(0x507D0);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "AvatarPromotionExcelTable")->GetStaticField(0x507D8);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "AvatarPromotionExcelTable")->GetStaticField(0x507E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::AvatarPromotionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::AvatarPromotionRow*>**)UnitySDK::FromName("RPG.GameCore", "AvatarPromotionExcelTable")->GetStaticField(0x507E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AvatarPromotionExcelTable")->GetStaticField(0x507F0);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AvatarPromotionExcelTable")->GetStaticField(0x12180);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AvatarPromotionExcelTable")->GetStaticField(0x12181);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::AvatarPromotionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::AvatarPromotionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::AvatarPromotionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::AvatarPromotionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarPromotionRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarPromotionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::AvatarPromotionRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::AvatarPromotionExcelTable_IndexKey a1, ::RPG::GameCore::AvatarPromotionRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarPromotionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
