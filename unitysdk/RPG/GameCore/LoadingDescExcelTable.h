#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingDescRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2E700)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA2DA70)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA2D940)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA2D630)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA2D8E0)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA2DC00)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA2D6B0)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA2DC40)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA2DE10)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA2E3E0)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA2DD70)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA2DCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingDescExcelTable_TypeDefinitionIndex = 14141;

	class LoadingDescExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>**)UnitySDK::FromName("RPG.GameCore", "LoadingDescExcelTable")->GetStaticField(0x3F440);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "LoadingDescExcelTable")->GetStaticField(0x3F448);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "LoadingDescExcelTable")->GetStaticField(0x3F450);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "LoadingDescExcelTable")->GetStaticField(0xD960);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "LoadingDescExcelTable")->GetStaticField(0xD961);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LoadingDescRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LoadingDescRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LoadingDescRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
