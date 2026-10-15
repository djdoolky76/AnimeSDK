#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaShowToastDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6FD9C0)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D6FCF80)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D6FCE50)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D6FCB40)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D6FCDF0)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D6FD110)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D6FCBC0)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D6FD150)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6FD320)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D6FD6A0)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D6FD280)
#define RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D6FD1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaShowToastDataExcelTable_TypeDefinitionIndex = 13368;

	class GachaShowToastDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaShowToastDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaShowToastDataRow*>**)UnitySDK::FromName("RPG.GameCore", "GachaShowToastDataExcelTable")->GetStaticField(0x33C60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "GachaShowToastDataExcelTable")->GetStaticField(0x33C68);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "GachaShowToastDataExcelTable")->GetStaticField(0x33C70);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "GachaShowToastDataExcelTable")->GetStaticField(0xAE00);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GachaShowToastDataExcelTable")->GetStaticField(0xAE01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaShowToastDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaShowToastDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaShowToastDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaShowToastDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GachaShowToastDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GachaShowToastDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GachaShowToastDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GachaShowToastDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
