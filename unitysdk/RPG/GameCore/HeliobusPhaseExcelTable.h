#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusPhaseRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D760510)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D75F9A0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D75F870)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D75F560)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D75F810)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D75FB30)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D75F5E0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D75FB70)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D75FD40)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D7601F0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D75FCA0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D75FC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPhaseExcelTable_TypeDefinitionIndex = 13740;

	class HeliobusPhaseExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusPhaseExcelTable")->GetStaticField(0x2AEB0);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "HeliobusPhaseExcelTable")->GetStaticField(0x2AEB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusPhaseExcelTable")->GetStaticField(0x2AEC0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "HeliobusPhaseExcelTable")->GetStaticField(0x8800);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "HeliobusPhaseExcelTable")->GetStaticField(0x8801);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusPhaseRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusPhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
