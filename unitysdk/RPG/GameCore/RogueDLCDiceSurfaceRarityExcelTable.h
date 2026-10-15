#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCDiceSurfaceRarityRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9C06E0)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9BFE00)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D9BFC90)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D9BF980)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D9BFC30)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9BFF90)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9BFA00)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9BFFD0)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C01A0)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D9C0370)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D9C0100)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9C0060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCDiceSurfaceRarityExcelTable_TypeDefinitionIndex = 14746;

	class RogueDLCDiceSurfaceRarityExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueDLCDiceSurfaceRarityExcelTable")->GetStaticField(0x2620);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "RogueDLCDiceSurfaceRarityExcelTable")->GetStaticField(0x2628);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueDLCDiceSurfaceRarityExcelTable")->GetStaticField(0x2630);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueDLCDiceSurfaceRarityExcelTable")->GetStaticField(0x1E20);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueDLCDiceSurfaceRarityExcelTable")->GetStaticField(0x1E21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCDiceSurfaceRarityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
