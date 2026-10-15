#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/AvatarServantSkillExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D426920)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D4240B0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D423E60)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D423AA0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D423BC0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D423DF0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D424450)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D423C40)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D424680)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D423B50)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D424160)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D424490)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4263E0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D426430)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D426380)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D424620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillExcelTable_TypeDefinitionIndex = 12808;

	class AvatarServantSkillExcelTable : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "AvatarServantSkillExcelTable")->GetStaticField(0x51B50);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "AvatarServantSkillExcelTable")->GetStaticField(0x51B58);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::AvatarServantSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::AvatarServantSkillRow*>**)UnitySDK::FromName("RPG.GameCore", "AvatarServantSkillExcelTable")->GetStaticField(0x51B60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AvatarServantSkillExcelTable")->GetStaticField(0x51B68);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "AvatarServantSkillExcelTable")->GetStaticField(0x51B70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AvatarServantSkillExcelTable")->GetStaticField(0x51B78);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::AvatarServantSkillRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::AvatarServantSkillRow*>**)UnitySDK::FromName("RPG.GameCore", "AvatarServantSkillExcelTable")->GetStaticField(0x51B80);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AvatarServantSkillExcelTable")->GetStaticField(0x12380);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AvatarServantSkillExcelTable")->GetStaticField(0x12381);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::AvatarServantSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::AvatarServantSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::AvatarServantSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::AvatarServantSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarServantSkillRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarServantSkillRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::AvatarServantSkillRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey a1, ::RPG::GameCore::AvatarServantSkillRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarServantSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
