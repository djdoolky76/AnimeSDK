#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingWorldImageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA30990)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA30120)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA2FFB0)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA2FCA0)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA2FF50)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA30270)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA2FD20)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA302B0)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA30480)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA30670)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA303E0)
#define RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA30340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingWorldImageExcelTable_TypeDefinitionIndex = 14147;

	class LoadingWorldImageExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "LoadingWorldImageExcelTable")->GetStaticField(0x3F5B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingWorldImageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingWorldImageRow*>**)UnitySDK::FromName("RPG.GameCore", "LoadingWorldImageExcelTable")->GetStaticField(0x3F5B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "LoadingWorldImageExcelTable")->GetStaticField(0x3F5C0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "LoadingWorldImageExcelTable")->GetStaticField(0xD9B0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "LoadingWorldImageExcelTable")->GetStaticField(0xD9B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingWorldImageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingWorldImageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingWorldImageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingWorldImageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LoadingWorldImageRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LoadingWorldImageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LoadingWorldImageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LoadingWorldImageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
