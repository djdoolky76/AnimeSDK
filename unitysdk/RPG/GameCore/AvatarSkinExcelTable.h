#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSkinRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSKINEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2F6530)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C2F5350)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C2F5220)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C2F4F10)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C2F51C0)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C2F54A0)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C2F4F90)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C2F54E0)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2F56B0)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C2F6210)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C2F5610)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C2F5570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkinExcelTable_TypeDefinitionIndex = 12782;

	class AvatarSkinExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AvatarSkinExcelTable")->GetStaticField(0x58E20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AvatarSkinExcelTable")->GetStaticField(0x58E28);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>**)UnitySDK::FromName("RPG.GameCore", "AvatarSkinExcelTable")->GetStaticField(0x58E30);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AvatarSkinExcelTable")->GetStaticField(0x12F10);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AvatarSkinExcelTable")->GetStaticField(0x12F11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSkinRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarSkinRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarSkinRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkinRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
