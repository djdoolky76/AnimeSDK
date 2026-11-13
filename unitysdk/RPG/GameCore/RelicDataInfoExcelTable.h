#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicDataInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F237CE0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F237230)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F2370C0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F236DB0)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F237060)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F237410)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F236E30)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F237450)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F237620)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F237940)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F237580)
#define RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F2374E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicDataInfoExcelTable_TypeDefinitionIndex = 14805;

	class RelicDataInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RelicDataInfoExcelTable")->GetStaticField(0x2A850);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RelicDataInfoExcelTable")->GetStaticField(0x2A858);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>**)UnitySDK::FromName("RPG.GameCore", "RelicDataInfoExcelTable")->GetStaticField(0x2A860);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RelicDataInfoExcelTable")->GetStaticField(0x89B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RelicDataInfoExcelTable")->GetStaticField(0x89B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicDataInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicDataInfoRow* GetData(::System::UInt32 a1, ::RPG::GameCore::RelicType a2)
		{
			return ((::RPG::GameCore::RelicDataInfoRow*(*)(::System::UInt32, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicDataInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicDataInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
