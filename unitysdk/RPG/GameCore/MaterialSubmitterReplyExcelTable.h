#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MaterialSubmitterReplyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB65C10)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EB65210)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EB650A0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EB64D90)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EB65040)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EB653A0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB64E10)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB653E0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB655B0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EB658A0)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EB65510)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB65470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialSubmitterReplyExcelTable_TypeDefinitionIndex = 12021;

	class MaterialSubmitterReplyExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>**)UnitySDK::FromName("RPG.GameCore", "MaterialSubmitterReplyExcelTable")->GetStaticField(0x3CD00);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MaterialSubmitterReplyExcelTable")->GetStaticField(0x3CD08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MaterialSubmitterReplyExcelTable")->GetStaticField(0x3CD10);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MaterialSubmitterReplyExcelTable")->GetStaticField(0xC1F0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MaterialSubmitterReplyExcelTable")->GetStaticField(0xC1F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterReplyRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MaterialSubmitterReplyRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MaterialSubmitterReplyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MaterialSubmitterReplyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MaterialSubmitterReplyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
